#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>

#define star 100
#define on 1
#define off 0
int line[star], colume[star], score = 0;
bool bull[5] = { off,off,off,off,off }, sound;


int bullet_st[50];
int bullet[5] = { 0 };

void gotoxy(int x, int y)
{
	COORD c = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void set_color(int fg, int bg)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}
void erase_ship(int x, int y)
{
	set_color(0, 0);
	gotoxy(--x, y);
	printf("     ");
}
void draw_ship(int x, int y)
{
	erase_ship(++x, y);
	gotoxy(x, y);
	set_color(2, 4);
	printf(" <+3+> ");
}
void set_cursor(bool visible)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console, &lpCursor);
}
void erase_bullet(int x, int y)
{
	set_color(0, 0);
	gotoxy(x, y);
	printf(" ");
}
void draw_bullet(int x, int y)
{
	//erase_bullet(x, y);
	gotoxy(x, y);
	set_color(2, 5);
	printf("+");
}
void numbullet() {
	set_color(2, 3);
	gotoxy(80, 2);
	printf("%d %d %d %d %d", bullet[0], bullet[1], bullet[2], bullet[3], bullet[4]);
}
char cursor(int x, int y) 
{
	HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
	char buf[2]; COORD c = { x,y }; DWORD num_read;
	if (!ReadConsoleOutputCharacter(hStd, (LPTSTR)buf, 1, c, (LPDWORD)& num_read))
		return '\0';
	else return buf[0];
}
void draw_star(int p) 
{
	int c,i;
	for ( i = 0; i < p; i++) {
		do {
			line[i] = (rand() % 4) + 1;
			colume[i] = (rand() % 60) + 8;
		} while (cursor(colume[i], line[i]) == '*');
		gotoxy(colume[i], line[i]);
		c = (rand() % 14) + 1;
		set_color(c, 0);
		printf("*");
	}
}


int main()
{
	char ch = ' ';
	int x = 38, y = 20;
	int slide = 0;
	int n[100], m[100], i = 0;
	draw_ship(x, y);
	set_cursor(0);
	srand(time(NULL));
	draw_star(star);


	for (i = 0; i < 100; i++)
	{
		bullet_st[i] = 0;
	}

	do
	{
			//numbullet();
			if (GetAsyncKeyState(0x41)) { slide = -1; }    /// A
			if (GetAsyncKeyState(0x44)) { slide = 1; }    /// D
			if (GetAsyncKeyState(0x53)) { slide = 0; }    /// S
			if (GetAsyncKeyState(VK_SPACE)) {	/// Spacebar
				for (int b = 0; b < 5; b++) {
					if (bullet[b] == 0)  // Font**
					{
						bullet[b] = 1;
						break;
					}
				}
			}
			// SCOREEEEEEEEEEEEEEEEEEEEE
			gotoxy(69, 0); set_color(0, 8);
			printf("SCORE : %3d", score);

		for (i = 0; i<5;i++)
		{
			if (bullet[i] == 1) 
			{
				if (bullet_st[i] == 0)
				{
					n[i] = x + 4;
					m[i] = y - 1;
					bullet_st[i] = 1;
					
				}
				if (cursor(n[i], m[i] - 1) == '*')
				{
					bullet[i] = 0;
					bullet_st[i] = 0;
					erase_bullet(n[i], m[i] - 1);
					erase_bullet(n[i], m[i]);
					draw_star(1);
					score ++;
					Beep(700, 50);
				}
				if (bullet_st[i] == 1)
				{
					if (m[i] > 1)
					{
						draw_bullet(n[i], --m[i]);
					}
					else
					{
						bullet_st[i] = 0;
						m[i]--;
						bullet[i] = 0;
					}
				}
				if (m[i] < 20)
				{
					erase_bullet(n[i], m[i] + 1);
					if (m[i] <= 0)
					{
						erase_bullet(n[i], --m[i]);
						bullet_st[i] = 0;
						bullet[i] = 0;
					}
				}
			}
		}
		/// ??? A ///
		if (slide == -1)
		{
			if (x > 0)
			{
				erase_ship(x+4, y);
				draw_ship(--x, y);
			}
		}
		if (slide == 0)
		{
			draw_ship(x, y);
		}
		/// ??? D ///
		if (slide == 1)
		{
			if (x < 80)
			{
				erase_ship(x-4 , y);
				draw_ship(++x, y);
			}
			if (x > 79)
			{
				draw_ship(x, y);
			}
		}
		if (sound == on) { Beep(700, 50); sound = off; }
		else Sleep(40);
		fflush(stdin);
		//Sleep(100);
	} while (!GetAsyncKeyState(0x58));
	return 0;
}

