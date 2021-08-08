#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void Init_board(char board[ROWS][COLS], int rows, int cols,char set){

	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){

			board[i][j] = set;
		}
	}


}
void Display_board(char board[ROWS][COLS], int row, int col){
	int i = 0;
	int j = 0;
	for (j = 0; j <= row; j++){
		printf("%d ",j);
	}
	printf("\n");
	for (i = 1; i <= row; i++){
		printf("%d ", i);
		for(j = 1; j <= col; j++){

			printf("%c ", board[i][j]);
		}
		printf("\n");
	}


}
void Set_board(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count=Easy_count; //ʮ����
	while (count){
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;//ϸ��
		}


	}
}
void Tip_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col){
	int x = 0;
	int y = 0;
	int win = 0;//���׵ĸ���
	while (win<row*col-10){//����71����û����

		printf("��ѡ���±�:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col){
			if (mine[x][y] == '1'){//����Ϸ���  �������ף�
				printf("���ź����㱻ը���� ����ʧ��\n");
				Display_board(mine, ROW, COL);
				break;
			}
			else{//ͳ���׵ĸ���
				//��������
				show[x][y]=get_mine_count(mine, x, y)+'0';//��ʾ������ ��Ϣ
				if (get_mine_count(mine, x, y) == 0){//mine[x][y]��Χһ���׶�û�� ��ӡ' ' 
					show[x - 1][y - 1] = ' ';
					show[x][y - 1] = ' ';
							show[x + 1][y - 1] = ' ';
						show[x + 1][y] = ' ';
						show[x + 1][y + 1] = ' ';
						show[x][y + 1] = ' ';
						show[x - 1][y + 1] = ' ';
						show[x - 1][y] = ' ';
				}
				Display_board(show,ROW,COL);
				win++;
			}


		}
		else{
			printf("�����±��������������\n");


		}
	}


	if (win == row*col - 10){//�Ų��71����->���׳ɹ�
		printf("��ϲ�㣬ɨ�׳ɹ�\n");
		Display_board(mine, ROW, COL);
	}



}
int get_mine_count(char mine[ROWS][COLS], int x, int y){
	//�ַ����ַ�������  �� '2'-'0'=2  2+'0'=2

	return mine[x - 1][y - 1]
		+ mine[x][y - 1]
		+ mine[x + 1][y - 1]
		+ mine[x + 1][y]
		+ mine[x + 1][y + 1]
		+ mine[x][y + 1]
		+ mine[x - 1][y + 1]
		+ mine[x - 1][y] + 8 * '0';//mine[x][y] ��Χ�����ּ����� �����׵ĸ���
	//ע�⣺mine[x][y]��Χ���ַ� ��Ҫ+'0'






}
