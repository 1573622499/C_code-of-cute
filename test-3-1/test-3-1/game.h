#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3//º¯ÊýÉùÃ÷
#define COL 3
void INITboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row ,int col);
void Computermove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);
int Isfull(char board[ROW][COL], int row, int col);