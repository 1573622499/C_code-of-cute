#define _CRT_SECURE_NO_WARNINGS 1
//��������
#include "game.h"
void INITboard(char board[ROW][COL], int row, int col){
	int i = 0;
	for (i = 0; i <row; i++){
		int j = 0;
		for (j = 0; j < col; j++){
			board[i][j] = ' ';
		}
	}

}
//   |   |
//---|---|---
//   |   |
//---|---|---
//   |   |   
//���̳�ʼ��




void Displayboard(char board[ROW][COL], int row, int col){

	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1){
			for (j = 0; j < col; j++){
				printf("---");
				if (j < col-1){
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void Playermove(char board[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("�����:>");
	while (1){
		printf("��ѡ��Ҫ�µ�����\n");
		scanf("%d%d", &x, &y);
		//judge
		if (x >= 1 && x <= row && y >= 1 && y <= col){
			if (board[x][y] = ' '){
				board[x - 1][y - 1] = '*';//��������������0~2
				break;
			}
			else {
				printf("�������Ѿ���ռ��\n");
			}
		}
		else{
			printf("����Ƿ�,����������\n");
		}
		
	}
}
void Computermove(char board[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("������\n");
	printf("\n");
	while (1){
		x = rand() % row;
		y = rand() % col;//%��Ӧ����0~2
		if (board[x][y] = ' '){
			board[x][y] = '#';
			break;
		}

	}
}
int Isfull(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			if (board[i][j] == ' '){
				return 0;
			}
		}
	}
	return 1;
}




char Iswin(char board[ROW][COL], int row, int col){
	int i = 0;
	for (i = 0; i < row; i++){
		if (board[i][0] = board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' '){
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++){
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' '){
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' '){
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' '){
		return board[1][1];
	}
	if (1 == Isfull(board, ROW, ROW)){
		return 'Q';
	}
	return 'C';//������
}