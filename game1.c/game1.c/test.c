#define _CRT_SECURE_NO_WARNINGS 1
//����
#include "game.h"
void game(){
	char board[ROW][COL] = { 0 };
	//��ʼ��
	Init_board(board, ROW,COL);
	//��ӡ����
	Display_board(board, ROW, COL);


}
void menu(){
	printf("**************************\n");
	printf("*****      0.EXIT     ****\n");
	printf("*****      1.Play     ****\n");
	printf("**************************\n");
}
void test(){
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input){
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}

	} while (input);

}
int main(){

	test();
	return 0;
}

