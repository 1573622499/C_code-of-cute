#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void Init_board(char board[ROW][COL], int row, int col){

	int i = 0;
	for (i = 0; i < row; i++){


		int j = 0;
		for (j = 0; j < col; j++){
			board[i][j] = ' ';
		}
	}


}
void Display_board(char board[ROW][COL], int row, int col){

	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){

		for (j = 0; j < col; j++){
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");

		}
		printf("\n");
		if (i < row - 1){

			for (j = 0; j < col; j++){
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");

	}
	}

void Play_Move(char board[ROW][COL], int row, int col){

	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while (1)
	{


		printf("请选择并输入你的下标:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col){
			if (board[x - 1][y - 1] == ' '){
				board[x - 1][y - 1] = '*';
				break;
			}
			else{
				printf("该坐标已经被占用\n");
			}
		}
		else{

			printf("输入的坐标信息不合法,请重新输入\n");


		}

	}


}
void Computer_Move(char board[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1){
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' '){
			board[x][y] = '#';
			break;
		}

	}





}
int Is_Full(char board[ROW][COL], int row, int col){//检查棋盘是否满了
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (board[i][j] == ' ')
				return 0;//没满

		}
	}
	return 1;//满了



}
char Is_win(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		if (board[i][0] == board[i][1] && board[i][1]==board[i][2] && board[i][1] != ' '){
			return board[i][1];
		}


	}
	for (j = 0; j < col; j++){
		if (board[0][j] == board[1][j] && board[1][j]==board[2][j] && board[1][j] != ' '){
			return board[1][j];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2]&&board[1][1]!=' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	if (1 == Is_Full(board, ROW, COL))
		return 'Q';//平局
	return 'C';//继续

}