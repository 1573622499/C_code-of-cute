#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void IninBoard(char board[ROW][COL], int row, int col){

	int i = 0;
	for (i = 0; i < row; i++){
		int j = 0;
		for (j = 0; j < col; j++){

			board[i][j] = ' ';
		}
	}

}

void DisplayBoard(char board[ROW][COL], int row, int col){
	//1�������������� ȱ�㣺���ܺ���һ������ ʵ��ͬ��ͬ��
	//   |   |   
	//---|---|---
	//   |   |   
	//---|---|---
	//   |   |   

	/*int i = 0;
	for (i = 0; i < row; i++){
		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
		if (i < row - 1)
			printf("---|---|---\n");
		

	}
*/
	//2��ͬ��ͬ��
	int i = 0;
	for (i = 0; i < row; i++){
		int j = 0;
		for (j = 0; j < col; j++){
			printf(" %c ", board[i][j]);
			if (j < col-1)
				printf("|");
			//��ӡÿһ��
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1){
			for (j = 0; j < col; j++){
				printf("---");
				if (j < col - 1)
					printf("|");
			
			}
			printf("\n");


		}


	}










}