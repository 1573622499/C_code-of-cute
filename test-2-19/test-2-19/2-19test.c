//#define _CRT_SECURE_NO_WARNINGS 1
////��������Ϸ
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void menu(){
//	printf("##############################\n");
//	printf("######1.Play   0.Exit#########\n");
//	printf("##############################\n");
//}
//void game(){
//	int ret;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1){
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("�´���\n");
//		}
//		else if (guess < ret){
//			printf("��С�ˣ�\n");
//		}
//		else{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//int main(){
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			game();
//			break;
//		case 0:
//				printf("�����˳���Ϸ\n");
//				break;
//			default:
//				printf("�����������������\n");//��Щbreak��switch��ġ�breakֱ���˳���֧���
//					break;
//
//		}
//
//	} while (input);
//	return 0;
//}
////�žų˷���
//#include <stdio.h>
//int main(){
//	int i = 0;//i������
//	for (i = 1; i <= 9; i++){
//		int j = 0;
//		for (j = 1; j <= i; j++){//j������
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");//���뻻��
//
//	}
//	return 0;
//}
//
//
#include <stdio.h>
int main(){
	int i = 0;
	for (i = 1; i <= 6; i++){//i������
		int j = 0;
		for (j = 1; j <= 4; j++){//������
			printf("*** ");
		}
		printf("\n");
	}
	return 0;
}