#define _CRT_SECURE_NO_WARNINGS 1
//������+��������ϰ
#include "game.h"
void game(){
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ��
	Init_board(board, ROW, COL);
	Display_board(board, ROW, COL);
	//��ʼ��Ϸ
	while (1){

		Player_Move(board, ROW, COL);
		Display_board(board, ROW, COL);
		//ÿ��һ�����ж�һ��
		ret = Is_win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		Computer_Move(board, ROW, COL);
		Display_board(board, ROW, COL);
		ret = Is_win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
	}
	if (ret == '*')
		printf("���Ӯ\n");
	if (ret == '#')
		printf("����Ӯ\n");
	if (ret == 'Q')
		printf("ƽ��\n");



}

void menu(){
	printf("******************************************************\n");
	printf("************            0.EXIT           *************\n");
	printf("************            1.PLAY           *************\n");
	printf("******************************************************\n");

}

void test(){
	typedef unsigned int u_int;
	int input = 0;
	srand((u_int)time(NULL));
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
			printf("���������������\n");
			break;


		}
	} while (input);


}
//int main(){
//	test();
//	return 0;
//}
//
//
