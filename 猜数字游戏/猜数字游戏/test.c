#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game(){
	printf("��ӭ������������Ϸ��������Ѿ����ɣ��������\n");
	int guess = 0;
	int ret = rand() % 100 + 1;//����1~100��������
	while (1){


		scanf("%d", &guess);
		if (guess > ret){
			printf("�´���\n");
		}
		else if (guess < ret){
			printf("��С��\n");
		}
		else{
			printf("��ϲ��¶��ˣ������Ϊ%d\n", ret);
			break;
		}
	}

}
void menu(){
	printf("*****************************************\n");
	printf("**********          0.Exit       ********\n");
	printf("**********          1.Play       ********\n");
	printf("*****************************************\n");
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
			printf("�������,����������\n");
			break;
		}

	} while (input);
}
int main(){
	//��������Ϸ--����
	srand((unsigned int)time(NULL));
	test();
	return 0;
}

