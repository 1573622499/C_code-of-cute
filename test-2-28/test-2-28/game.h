#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void Initboard(char board[ROW][COL], int  row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void playmove(char board[ROW][COL], int row, int col);
void comptermove(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);
int isfull(char board[ROW][COL], int row, int col);


