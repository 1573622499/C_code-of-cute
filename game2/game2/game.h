#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define Easy_count 10







#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//º¯ÊýÉêÃ÷
void Init_board(char board[ROWS][COLS], int row, int col, char set);
void Display_board(char board[ROWS][COLS], int row, int col);
void Set_mine(char mine[ROWS][COLS], int row,int col);
void Tip_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int Get_count(char mine[ROWS][COLS], int x, int y);