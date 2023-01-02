//0334 3075120

#include<stdio.h>
#include<windows.h>

void gotoxy(int x, int y) 
{ 
    COORD coord;
    coord.X = x; 
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{   
   system("cls");
   int x, y;
   x = 42;
   y = 42;
   gotoxy(x, y);
   printf("gotoxy jumps to cursor position x42 y42.");
 
   return 0;
}

