#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��������  ע�� ���������ͺ��������ʱ����Ҫд��������
void InitBoard(char board[ROW][COL], int row, int col);
DisplayBoard(char board[ROW][COL],int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char is_Win(char board[ROW][COL],int row, int col);
int Is_Full(char board[ROW][COL], int row, int col);