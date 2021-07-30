#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void Initboard(char board[ROW][COL], int  ROW, int COL){
	int i = 0;
	for (i = 0; i < ROW; i++){
		int j = 0;
		for (j = 0; j < COL; j++){
			board[i][j] = ' ';
		}
	}






}
/////   |   |
//   ---|---|---
//      |   |
//   ---|---|---
//      |   | 初始化化棋盘




void Displayboard(char board[ROW][COL], int ROW, int COL){
	int i = 0;
	for (i = 0; i < ROW; i++){
		int j = 0;//打印一行
		for (j = 0; j < COL; j++){
			printf(" %c ", board[i][j]);
			if (j < col-1)
			printf("|");
		}
		printf("\n");

		//打印分割行
		if (i < ROW - 1){
			for (j = 0; j < COL; j++){
				printf("---");
				if (j < COL - 1){
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void playmove(char board[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while (1){
		printf("请输入要下的坐标:>");
		scanf("%d%d", &x, &y);
		if (x > +1 && x <= ROW && y >= 1 && y <= COL){
			if (board[x - 1][y - 1] == ' ')
				board[x - 1][y - 1] = '*';
			break;
		}
		else {
			printf("坐标已经被占用\n");
		}
	}
	else{
		printf("坐标非法，请重新输入!\n");
	}
}

void computermove(char board[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1){
		x = rand()%ROW;//随机数+0~2（%3的后果）
		y = rand() % COL;
		if (board[x][y] == ' '){
			board[x][y] = '#';
			break;
		}
	}
}
//1满了
//0未满
int isfull(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (board[i][j] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
char iswin(char board[ROW][COL], int row, int col){
	int i = 0;
	for (i = 0; i < row; i++){//横
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' '){
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++){//竖
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' '){
			return  board[1][i];
		}
	}//对角
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' '){
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' '){
		return board[1][1];
	}
	if (1 == isfull(board, ROW, COL)){
		return 'Q';
	}
	return 'C';
}