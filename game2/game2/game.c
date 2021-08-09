#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��������
void Init_board(char board[ROWS][COLS], int rows, int cols, char set){

	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){

			board[i][j] = set;
		}
	}


}

void Display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;//1~9
	for (j = 0; j <= col; j++){
		printf("%d ", j);

	}
	printf("\n");//��������
	for (i = 1; i <= row; i++){
		printf("%d ", i);
		for (j = 1; j <= col; j++){

			printf("%c ", board[i][j]);




		}
		printf("\n");



















	}


}
void Set_mine(char mine[ROWS][COLS], int row, int col){

	int x = 0;
	int y = 0;
	//����ʮ����
	int count = Easy_count;
	while (count){

		x = rand() % row;
		y = rand() % col;
		if (mine[x][y] == '0'){
			mine[x][y] = '1';
			count--;
		}

	}

}
int Get_count(char mine[ROWS][COLS], int x, int y){

	return mine[x - 1][y - 1]
		+ mine[x][y - 1]
		+ mine[x + 1][y - 1]
		+ mine[x + 1][y]
		+ mine[x + 1][y + 1]
		+ mine[x][y + 1]
		+ mine[x - 1][y + 1]
		+ mine[x - 1][y]-8*'0';
	//ASCII��ֵ �ַ� -> ��    �ַ�-��0��   ��->�ַ�  ��+��0��




}
void Tip_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col){

	int x = 0;
	int y = 0;
	int win = 0;
	printf("%d�����Ѿ���ã��뿪ʼɨ��\n", Easy_count);
	while (win<row*col - Easy_count){
		printf("��ѡ���Ų��׵�����:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col){//�ж�����Ϸ���
			if (mine[x][y]=='1'){//�ж���
				printf("���ź����㱻ը����\n");
				Display_board(mine, ROW, COL);
				break;
			}
			else{//��ʾ��Χ�׵ĸ���   һ��71���ף�row*col-Easy_count�� ÿ����һ���� win+1
				 show[x][y]=Get_count(mine, x, y)+'0';//show[ROWS][COLS]��ʾ�׵ĸ���
				 Display_board(show, ROW, COL);
				 win++;


			}
		
		}
		else{
			printf("�������겻�Ϸ�������������\n");
		}
	}
	if (win == row*col - Easy_count){

		printf("��ϲ�㣬���׳ɹ�\n");
		Display_board(mine, ROW, COL);
	}




}