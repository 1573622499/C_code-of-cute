#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu(){
	printf("######################################\n");
	printf("#########1.Play        0.Exit#########\n");
	printf("######################################\n");
}
void game(){
	//������
	//�����������߳���������Ϣ
	int ret = 0;
	char board[ROW][COL] = { 0 };//ȫ���ո�
	Initboard(board, ROW, COL);//��ʼ������
	Displayboard(board,ROW, COL);
	while (1){
		//�������
		playmove(board, ROW, COL);
		Displayboard(board, ROW, COL);
//�ж�����Ƿ�Ӯ
		ret = iswin(board,ROW,COL);
		if (ret != 'C'){
			break;
		}
		//��������
		computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
//�жϵ����Ƿ�Ӯ
		ret = iswin(board[ROW][COL],ROW,COL);
		if (ret != 'C'){//û��ʤ���ͼ���
			break;//�൱���˳���Ϸ������Ϸ
		}

}
	if (ret == '*'){
		printf("���Ӯ\n");
	}
	else if (ret == '#'){
		printf("����Ӯ\n");
	}
	else{
		printf("ƽ��\n");
	}

	void test(){
	int input = 0;
	srand((unsigned int)time(NULL);
	do{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
	} while (input);
}
int  main(){
	test();
	return 0;
}

