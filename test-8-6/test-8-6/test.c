#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//������Ϸ
void game(){
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//��ʼ����
	//�����
	while (1){
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ  ÿ��һ����Ҫ�ж���Ӯ
		// ͨ��ret�����ַ��ж� ���Ӯ��*��  ����Ӯ��#��  ƽ�֡�Q��  ������C��
		ret = is_Win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = is_Win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");

	


}
void menu(){
	printf("**********************************************\n");
	printf("*********0.Exit                 1.Play********\n");
	printf("**********************************************\n");

}
void test(){
	
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

	} while(input);

}
int main(){
	test();

	return 0;
}

