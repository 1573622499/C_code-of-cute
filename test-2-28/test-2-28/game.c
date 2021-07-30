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
//      |   | ��ʼ��������




void Displayboard(char board[ROW][COL], int ROW, int COL){
	int i = 0;
	for (i = 0; i < ROW; i++){
		int j = 0;//��ӡһ��
		for (j = 0; j < COL; j++){
			printf(" %c ", board[i][j]);
			if (j < col-1)
			printf("|");
		}
		printf("\n");

		//��ӡ�ָ���
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
	printf("�����\n");
	while (1){
		printf("������Ҫ�µ�����:>");
		scanf("%d%d", &x, &y);
		if (x > +1 && x <= ROW && y >= 1 && y <= COL){
			if (board[x - 1][y - 1] == ' ')
				board[x - 1][y - 1] = '*';
			break;
		}
		else {
			printf("�����Ѿ���ռ��\n");
		}
	}
	else{
		printf("����Ƿ�������������!\n");
	}
}

void computermove(char board[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1){
		x = rand()%ROW;//�����+0~2��%3�ĺ����
		y = rand() % COL;
		if (board[x][y] == ' '){
			board[x][y] = '#';
			break;
		}
	}
}
//1����
//0δ��
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
	for (i = 0; i < row; i++){//��
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' '){
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++){//��
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' '){
			return  board[1][i];
		}
	}//�Խ�
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