#define _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ
#include <stdio.h>
#include "game.h"
void menu(){
	printf("######################################\n");
	printf("#######1.Play              0.Exit#####\n");
	printf("######################################\n");
	
}
void game(){
	char ret = 0;
	char board[ROW][COL] = { 0 };
	INITboard(board,ROW,COL);
	Displayboard(board, ROW, COL);
	while (1){
		Playermove(board,ROW,COL);
		Displayboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		ret=Iswin(board,ROW,COL);
		if (ret != 'C'){
			break;
		}
	}//һ����Ϸ�Ľ���
	if (ret == '*'){
		printf("���Ӯ\n");
	}
	else if (ret == '#'){
		printf("����Ӯ\n");
	}
	else{
		printf("ƽ��\n");
	}
}
void test(){
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();//printf("������\n");
			break;
		case 0:
			printf("�����˳���Ϸ\n");
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


