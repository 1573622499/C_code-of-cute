#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//º¯ÊýÉêÃ÷
void Init_Board(char board[ROW][COL], int row, int col);
void Display_Board(char board[ROW][COL], int row, int col);
void Playe_rMove(char board[ROW][COL], int row, int col);
void Computer_Move(char board[ROW][COL], int row, int col);
char Is_win(char board[ROW][COL], int row, int col);
int Is_Full(char board[ROW][COL], int row, int col);