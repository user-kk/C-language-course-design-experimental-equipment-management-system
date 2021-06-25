#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
void gotoxy(int x,int y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos); 
}

