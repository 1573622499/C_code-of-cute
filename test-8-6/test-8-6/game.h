#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//函数申明  注意 函数申明和函数定义的时候需要写数据类型
void InitBoard(char board[ROW][COL], int row, int col);
DisplayBoard(char board[ROW][COL],int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char is_Win(char board[ROW][COL],int row, int col);
int Is_Full(char board[ROW][COL], int row, int col);