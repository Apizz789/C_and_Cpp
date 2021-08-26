#include<stdio.h>
#include<windows.h>
#include<conio.h>
void gotoxy(int x, int y)
{
	COORD c = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void set_color(int fg, int bg)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg * 16 + fg);
	//printf("    ");
}
void erase_ship(int x, int y)
{
	set_color(0, 0);
	gotoxy(x, y);
	printf("       ");
}
void draw_ship(int x, int y) {
	
	erase_ship(x,y);
	gotoxy(x, y);
	set_color(2, 0);
	printf(" <-0-> ");
	
}
void set_cursor(bool visible)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console, &lpCursor);
}

int main()
{
	set_color(0,0);
	char ch = '    ';
	int x = 38, y = 20;
	draw_ship(x, y);
	set_cursor(0);
	
	
	do
	{
		if (GetAsyncKeyState(0x41))
		{
			if (x - 1 < 0) draw_ship(x, y);
			else
			{
				erase_ship(x, y);
				draw_ship(--x, y);
			}
		}
		if (GetAsyncKeyState(0x44))
		{
			if (x - 1 > 71) draw_ship(x, y);
			else
			{
				erase_ship(x, y);
				draw_ship(++x, y);
			}
		}
		if (GetAsyncKeyState(0x57))
		{
			if (y - 1 < 0) draw_ship(x, y);
			else
			{
				erase_ship(x, y);
				draw_ship(x, --y);
			}
		}
		if (GetAsyncKeyState(0x53))
		{
			if (y - 1 > 20) draw_ship(x, y);
			else
			{
				erase_ship(x, y);
				draw_ship(x, ++y);
			}
		}
		fflush(stdin);
		Sleep(30);
	} while (ch != 'x');
	//system("pause");
	return 0;
}
