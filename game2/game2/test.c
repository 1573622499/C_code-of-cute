#define _CRT_SECURE_NO_WARNINGS 1
//ɨ��
#include "game.h"

void game(){
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	Init_board(mine, ROWS, COLS, '0');
	Init_board(show, ROWS, COLS, '*');
	//��ӡ����
	Display_board(show, ROW, COL);
	//Display_board(mine, ROW, COL);  ��ӡ��� �׵�λ��
	//������
	Set_mine(mine, ROW, COL);
//��ʾ��
	Tip_mine(mine, show, ROW, COL);



}

void menu(){

	printf("*****************************************\n");
	printf("*************      0.EXIT      **********\n");
	printf("*************      1.PLAY      **********\n");
	printf("*****************************************\n");


}

void test(){
	int input = 0;
	srand((unsigned int)time(NULL));
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
			printf("�������,��������\n");
			break;

		}

	} while (input);

}
int main(){
	test();
	return 0;
}

