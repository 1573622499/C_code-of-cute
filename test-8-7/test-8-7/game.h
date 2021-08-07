#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//º¯ÊýÉêÃ÷
void Init_board(char board[ROW][COL], int row, int col);
void Display_board(char board[ROW][COL], int row, int col);
void Play_Move(char board[ROW][COL], int row, int col);
void Computer_Move(char board[ROW][COL], int row, int col);
char Is_win(char board[ROW][COL], int row, int col);
int Is_Full(char board[ROW][COL], int row, int col);