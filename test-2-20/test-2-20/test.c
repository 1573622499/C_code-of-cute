#define _CRT_SECURE_NO_WARNINGS 1
//1~100����9��������ӡ���о��弸����
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int count = 0;
//	for(i = 1; i <= 100; i++){
//		if (i % 10 == 9){//��Ը�λ�ϵ�9
//			printf("%d ", i);
//			count++;
//		}
//		 if (i / 10 == 9){//���ʮλ��9
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n����9������%d��\n",count);
//	return 0;
//}
//��������Ϸ
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void menu(){
//	printf("############################\n");
//	printf("####1.Play   0.Exit#########\n");
//	printf("############################\n");
//}
//void game(){
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1){
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("�´��ˣ�\n");
//		}
//		else if (guess < ret){
//			printf("��С�ˣ�\n");
//		}
//		else{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//		}
//	}
//}
//int main(){
//	srand((unsigned int)time(NULL));//ʱ���
//	int input = 0;//ѡ���������֣���Ӧѡ����
//	do{
//		menu();//����˵�
//		scanf("%d", &input);//ȡ��ַ
//		switch (input){
//		case 1:
//			game();//������Ϸ
//			break;
//		case 0:
//			printf("�����˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//
//	} while (input);//inoutΪ1 or ����1������ ���ɼ���ִ�г������inputΪ0 ��������ֹ����
//	return 0;

//��ӡһ�������
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main(){
//	srand((unsigned int)time(NULL));
//	int ret = 0;
//	ret = rand() % 100 + 1;
//		printf("�������%d\n", ret);
//	
//	return 0;
//}

//#include <stdio.h>
////#include <stdio.h>
////int main(){
////	int i = 0;
////	int flag = 1;
////	double sum = 0.0;
////	for (i = 1; i <= 100; i++){
////		sum +=flag* 1.0 / i;//����Ҫһ����Ϊ���������������õ��Ľ����Ϊ��������
////		flag = -flag;
////	}
////	printf("%lf\n", sum);
////	return 0;
////}//int main(){
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++){
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//
//}
//��ʮ��������������
#include <stdio.h>
int main(){
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 94554, 1065 };
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++){
		if (arr[i]>max){
			max = arr[i];//����ע��
		}

	}printf("���ֵ��%d\n", max);
	return 0;
}