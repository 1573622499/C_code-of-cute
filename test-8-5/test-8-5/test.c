#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game(){
	//���ö�ά���鴴����
	char board[ROW][COL] = {0};
	//��ʼ������
	IninBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);




}
void menu(){
	printf("*******************************************\n");
	printf("**********1.Play            0.Exit*********\n");
	printf("*******************************************\n");


}
void  test(){
	int input = 0;
	do{//�����˵�
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input){
		case 0:
			printf("�����˳���Ϸ\n");
			break;
		case 1:
			//printf("��������Ϸ\n");
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

