#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;

#define on 1
#define off 0
#define nStar 20
#define win 50

int 

, t = 0, t0;
int p[5] = {}, q[5] = {}, line[nStar] = {}, colume[nStar] = {};
bool bull[5] = { off,off,off,off,off }, sound;

void draw_ship(int, int);
void gotoxy(int, int);
void erase_ship(int, int);
void setcursor(bool visible);
void setcolor(int, int);
void draw_bull(int, int);
void erase_bull(int, int);
void draw_star(int);
void start();
char cursor(int, int);

int main() {
	char ch = ' ', drt = 's';
	int x = 38, y = 17;
	//start();
	setcursor(0);
	setcolor(4, 14);
	srand(time(NULL));
	draw_ship(x, y);
	draw_star(nStar);
	{
		do {
			if (_kbhit()) {
				ch = _getch();
				if (ch == 'a' || ch == 'A') drt = 'l'; //Left
				if (ch == 'd' || ch == 'D') drt = 'r'; //Right
				if (ch == 's' || ch == 'S') drt = 's'; //Stop
				if (ch == ' ') 
					for (int i = 0; i < 5; i++)
						if (bull[i] == off) {
							bull[i] = on;
							p[i] = x; q[i] = y;
							break;
						}
				fflush(stdin); //clear buffer keyboard
			}
			//Print Score
			gotoxy(69, 0); setcolor(0, 8);
			printf("Score : %3d", score);
			//Move Ship
			if (drt == 'l' && x != 5) { erase_ship(x, y); draw_ship(--x, y); }	
			if (drt == 'r' && x != 65) { erase_ship(x, y); draw_ship(++x, y); }   
			//Bullet
			for (int j = 0; j < 5; j++) {								
				if (bull[j] == on) {
					if (q[j] == 17 ) draw_bull(p[j], --q[j]);
					else {
						erase_bull(p[j], q[j]);
						if (q[j] != 0 ) {
							if(cursor(p[j] + 3, q[j] - 1) != '*')
								draw_bull(p[j], --q[j]);
							else { //Crash
								erase_bull(p[j], --q[j]); 
								bull[j] = off;
								sound = on;
								draw_star(1);
								score++;
							}
						}
						else bull[j] = off;
					}
				}
			} 
			if (sound == on) { Beep(700, 50); sound = off; }
			else Sleep(50);
		} while (ch != 'x' && ch != 'X' /*&& score != win*/);
	}
	system("pause");
	return 0;
}

void draw_ship(int x, int y) {
	gotoxy(x, y);
	printf(" <-0-> ");
}

void draw_bull(int x, int y) {
	gotoxy(x+3, y);
	setcolor(4, 0);
	printf("^");
}

void draw_star(int n) {
	int c;
	for (int i = 0; i < n; i++) {
		do {
			line[i] = (rand() % 4) + 1;
			colume[i] = (rand() % 60) + 8;
		} while (cursor(colume[i], line[i]) == '*');
		gotoxy(colume[i], line[i]);
		c = (rand() % 14)+1;
		setcolor(c, 0);
		printf("*");
	}
}

void gotoxy(int x, int y) {
	COORD c = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void erase_bull(int x, int y) {
	gotoxy(x+3, y);
	setcolor(1, 0);
	printf(" ");
}

void erase_ship(int x, int y) {
	gotoxy(x, y);
	setcolor(1, 0);
	printf("       ");
	setcolor(4, 14);
}

char cursor(int x, int y)  {
	HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
	char buf[2]; COORD c = { x,y }; DWORD num_read;
	if (!ReadConsoleOutputCharacter(hStd, (LPTSTR)buf, 1, c, (LPDWORD)& num_read))
		return '\0';
	else return buf[0];
}
void setcursor(bool visible) {
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console, &lpCursor);
}

void setcolor(int fg, int bg) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}

void start() {
	char name[40];
	setcolor(14, 0);
	gotoxy(20, 9); cout << ">>> Enter Your name : "; setcolor(15, 0); cin >> name;
	gotoxy(20, 9); for (int i = 1; i <= 70; i++) cout << " ";
	gotoxy(20, 9); setcolor(14, 0); cout << "Game will start in 3 Sec!!!!"; 
	Sleep(3000); t0 = time(NULL) % 1000;
	gotoxy(20, 9); for (int i = 1; i <= 70; i++) cout << " ";
	gotoxy(0, 19);
	setcolor(15, 0); cout << "Name ";
	setcolor(14, 0); cout << ">> " << name << " <<";
	gotoxy(69, 19); setcolor(2, 0); cout << "Star :: " << nStar;
	//Print Line
	gotoxy(5, 18);
	for (int i = 1; i <= 70; i++) {
		if (i % 2 == 0) { setcolor(12, 0); cout << "+"; }
		else { setcolor(11, 0); cout << "+"; }
	}
}
