#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main(){
//	int ret = 9;
//	int arr5[ret] = { 0 };//�˴���ret���ǳ������ʽ
//	int arr1[10] = { 0 };
//	char arr2[] = "abc";//""ȷ��\0 {}���ֲ���ȷ��\0��λ��
//	char arr3[] = { 'a', 'b' };
//	printf("%d\n", sizeof(arr2) / sizeof(arr2[0]));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", sizeof(arr3) / sizeof(arr3[0]));
//	printf("%d\n", strlen(arr3));//δ֪�����\0;
//	
//		return 0;
//}
//int main(){
//	char arr1[] = "abcdef";
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//int len=strlen(arr1);
//	for (i = 0; i < sz; i++){//i<(int)strlen(arr1)����Ҳok   i<len;
//		printf("%c ", arr1[i]);//��ӡ�����е�Ԫ��
//	}
//}
//
//��ӡ1 2 3 4 5 6 7 8 9 0
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//�ع˲�������Ϸ
//#include <time.h>
//void menu(){
//	printf("######################################\n");
//	printf("#######1.Play        0.Exit###########\n");
//	printf("######################################\n");
//}
//void game(){
//	int guess = 0;
//	int ret = 0;
//	ret = rand() % 100 + 1;
//	while (1){
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("�´���\n");
//		}
//		else if (guess < ret){
//			printf("��С��\n");
//		}
//		else
//			printf("��ϲ�㣬�¶��ˣ�\n");
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
//			printf("�˳���Ϸ\n");
//			break;
//		default :
//			printf("�����������������\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < len; i++){
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf(" &arr[%d]=%p\n",i, &arr[i]);//��һ�������У���Ԫ�ص�ַ��������,����.
//	}
//	return 0;
//}
//int main(){
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++){//��
//		int j = 0;
//		for (j = 0; j < 4; j++){//��
//			//printf("%d ", arr[i][j]);
//			printf(" &arr[%d][%d]=%p\n",i,j ,&arr[i][j]);//��ά���������������
//		}
//		//printf("\n");
//	}
//	return 0;
//}
//ð������ ����9 8 7 6 5 4 3 2 1->1,2,3,4,5,6,7,8,9  ����ʵ�� 10��Ԫ�� 9�� �Ƚ�8��
//
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	printf("%d\n", arr[0]);//����˵��arr ������Ԫ�ص�ַ������sizeof(arr)��������Ԫ�صĿռ� �Լ�strlen(arr)��ע���ַ������ȡ�&arr��ʾȡ����������ĵ�ַ
//	printf("%d\n", arr[0] + 1);
//	printf("%d\n", *arr + 1);
//	printf("%p\n", &arr);//&arrȡ�õĵ�ַΪ��������ĵ�ַ
//	printf("%p\n", &arr + 1);
//	return 0;//break������switch �Լ�forѭ������
//
//}
//������
#include "game.h"
void menu(){
	printf("***************************\n");
	printf("*******1.Play     0.Exit***\n");
	printf("***************************\n");
}

void test(){
	int input=0
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
		default :
			printf("����������������룡\n");
			break;
		}
	} while (input);
}
int main(){
	test();
	return;
}