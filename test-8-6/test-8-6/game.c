#define _CRT_SECURE_NO_WARNINGS 1
//��Ϸ��������
#include "game.h"
void InitBoard(char board[ROW][COL], int row,int  col){
	int i = 0;
	for (i = 0; i < row; i++){
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
DisplayBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			//��ӡÿ��
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
			
		}
		printf("\n");//����
		if (i < row - 1){
			//��ӡ�ָ���
			for (j = 0; j < col; j++){
				printf("---");
				if (j < col - 1)
					printf("|");

			}


		}
		printf("\n");//����

	}




}
void PlayerMove(char board[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("�����\n");
	while (1){
		printf("������Ҫ�µ��±�:>\n");
		//x(1,3) y(1,3)  ---��Χȷ��
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col){
			if (board[x - 1][y - 1] == ' '){//Ϊ�� ����������
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else{
			printf("����Ƿ�,����������\n");
		}
	}


}
void ComputerMove(char board[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1){
		x = rand() % row;//0~2
		y = rand() % col;//0~2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}


}
int Is_Full(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (board[i][j] == ' ')
				return 0;//û��



		}
	}
	return 1;//����


}
char is_Win(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][1];

	}
	for (j = 0; j < col; j++){
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[1][j];

	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//�ж�ƽ�� ����û����
	if (1 == Is_Full(board, ROW, COL)){
		return 'Q';

	}
	return 'C';//������Ϸ
}
