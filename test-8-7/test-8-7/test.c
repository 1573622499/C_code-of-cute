//#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu(){
	printf("*****************************************************\n");
	printf("*****************       0.EXIT          *************\n");
	printf("*****************       1.PLAY          *************\n");
	printf("*****************************************************\n");


}
void game()
{
	char ret = 0;

	char board[ROW][COL] = { 0 };
	//��ʼ��
	Init_board(board, ROW, COL);
	//��ӡ����
	Display_board(board, ROW, COL);
	while (1){
		//�����
		Play_Move(board, ROW, COL);
		Display_board(board, ROW, COL);
		//ÿ��һ�����ж���Ӯ
		ret = Is_win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}

		Computer_Move(board, ROW, COL);
		Display_board(board, ROW, COL);
		//ÿ��һ�����ж���Ӯ

		ret = Is_win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else if (ret == 'Q')
		printf("ƽ��\n");

}



void test(){
	srand((unsigned int)time(NULL));
	int input = 0;
	do{

		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input){
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);


}
int main(){
	test();
	return 0;
}



