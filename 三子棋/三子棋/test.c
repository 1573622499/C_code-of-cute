#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game(){
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ��' '
	Init_Board(board, ROW, COL);
	//��ӡ����
	while (1){

		Display_Board(board, ROW, COL);
		//�����
		Player_Move(board, ROW, COL);
		Display_Board(board, ROW, COL);
		//�ж���Ӯ
		ret = Is_win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		Computer_Move(board, ROW, COL);
		Display_Board(board, ROW, COL);
		//�ж���Ӯ
		ret = Is_win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else if (ret=='Q')
		printf("ƽ��\n");//Q

}
void menu(){
	printf("***************************************\n");
	printf("*******0.Exit               1.Play*****\n");
	printf("***************************************\n");

}
void test(){
	//���������
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
		printf("��ѡ��;>");
		scanf("%d", &input);
		switch (input){
		case 0:
			printf("�����˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("�������,����������\n");
		}

	} while (input);


}
int main(){

	test();


	return 0;
}

