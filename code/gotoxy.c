#include"C���Կ���ͷ�ļ�.h" 
//���������ڹ����� 
void gotoxy(int x,int y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos); 
}
void goto3y()
{ HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coordScreen = {0, 0}; //���λ��
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(hConsole, &csbi))
    {
    	gotoxy(csbi.dwCursorPosition.X,csbi.dwCursorPosition.Y-3);
    }
}
