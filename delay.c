#include<stdio.h>
#include<windows.h>
#define STD_OUTPUT_HANDLE ((DWORD)-11)
void delay(){ 
   int c, d; 
    
   for (c = 1; c <= 32767; c++) 
       for (d = 1; d <= 32767; d++) 
       {}   
   
}
COORD coord = {0, 0};
void gotoxy (int x, int y)
{
coord.X = x; coord.Y = y; // X and Y coordinates
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
