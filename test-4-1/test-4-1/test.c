#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(){//��������
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	//����һ�����Զ�������ʽ��1�ĸ���
//
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++){
//		if (1 == ((a >>i) & 1)){//�ƶ��ı߾Ͷ����ı�
//			count++;
//		}
//	}
//	printf("%d�Զ�����λ����1�ĸ�����%d��\n", a, count);
//	return 0;
//}
//��������Ϸ
#include <stdio.h>
void menu(){
	printf("*******************************************\n");
	printf("*************0.EXIT     1.PLAY*************\n");
	printf("*******************************************\n");
}
int main(){
	void game();
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input){
		case 0:printf("�����˳���Ϸ\n");
			break;
		case 1:game();
		default: printf("�����������������\n");
			break;
		}
	} while (input);

	return 0;
}
void game(){
	int guess = 0;
	int ret = rand() % 100 + 1;//1~100֮��������
while (1){
	printf("�������\n");
	scanf("%d", &guess);
	if (guess > ret){
		printf("�´���!\n");
	}
	else if (guess < ret){
		printf("��С�ˣ�\n");
	}
	else{
		printf("�¶��ˣ������Ϊ%d", ret);
		break;
	}

	}
}