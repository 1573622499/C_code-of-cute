#define _CRT_SECURE_NO_WARNINGS 1

//��ӡ�������е�*
//#include <stdio.h>
//int main(){
//	int i = 0;
//	for (i = 1; i <= 5; i++){
//		int j = 0;
//		for (j = 1; j <= 6; j++){
//			printf("*  ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//����1/1+1/2+.....+1/100==5.187378
//#include <stdio.h>
//int main(){
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++){
//		sum += 1.0/ i;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//-1/1+1/2-1/3+.....+1/100=-0.688172
//#include <stdio.h>
//int main(){
//	int i = 0;
//	double sum = 0;
//	int flag = -1;//���������������
//	for (i = 1; i <= 100; i++){
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//������Ϸ ,������
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu(){
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//	printf("@@@@@@@1.Play                  0.Exit@@@@@@@@@@\n");
//	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
//}
//void game(){
//	int guess = 0;
//	int ret = 0;
//	ret = rand() % 100 + 1;//ȷ���������Χ
//	while (1){
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("�´���\n");
//		}
//		else if (guess < ret){
//			printf("��С��\n");
//		}
//		else {
//			printf("��ϲ��,�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//int main(){
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input){
//		case 1:game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default :
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);//do while()ѭ���ǵ�;
//	return 0;
//}
//���ֵ���� �ɴ�С
#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b){
		int flag = b;
		b = a;
		a = flag;
	}
	 if (a < c){
		int flag = c;
		c = a;
		a = flag;
	}
	if (b < c){
		int flag = c;
		c = b;
		b = flag;

	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}