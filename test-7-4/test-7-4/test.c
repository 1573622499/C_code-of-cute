#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//
//
////int Add(int x, int y){
////	return (x + y);
////}
///*i*//*nt Jian(int x, int y){
//	return (x - y);
//}
//int Mal(int x, int y){
//	return x*y;
//}
//int Div(int x, int y){
//	return x / y;
//}*/
////���鴫��
////void test(int *arr){
////}  no
////void test(int* arr[5]){
////
////}  no
////void test(int(*p)[5]){
////
////}ok
////void test(int **arr){
////
////}no
////int main(){
////	int arr[3][5];//arr ��ʾ��Ԫ�ص�ַ  ��ά�����Ӧһ�������ַ
////	test(arr);
////}
////��ά���鴫�ο���ʡ���е�����
////һ��ָ���ӡ
////void test(int** str){
////	printf("%d ", **str);
////	printf("\n");
////}
////void print(int* p, int sz){
////	int i = 0;
////	for (i = 0; i < sz; i++){
////
////		//printf("%d ", *(p + i));//p[i]
////		printf("%d ", p[i]);
////	}
////	printf("\n");
////}
////void print1(int** ret){
////	printf("%d ", **ret);
////}
////void prinT(char* p){
////	printf("%s\n", p);
////}
//////void time(){
//////	time_t t;
////	time(&t);
////	struct tm *lt = localtime(&t);
////	printf("%d/%d/%d %d:%d:%d\n", lt->tm_year + 1900, lt->tm_mon + 1, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->s);
////}
//
//int Add(int x, int y){
//	return (x + y);
//}
//int Sub(int x, int y){
//	return (x-y);
//}
//int Mul(int x, int y){
//	return (x*y);
//}
//int Div(int x, int y){
//	return (x/y);
//}
//int Xor(int x, int y){
//	return (x ^ y);
//}
//void menu(){
//	printf("*******************************************\n");
//	printf("******1.Add                 2.Sub**********\n");
//	printf("******3.Mul                 4.Div**********\n");
//	printf("******5.Xor                 0.Exit*********\n");
//	printf("*******************************************\n");
//
//}
////int main(){
////	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = arr;//p==arr ��Ԫ�ص�ַ
//	//print(p, sz);
//	//int n = 10;
//	//int* p = &n;
//	//int** pp = &p;//ppΪһ������ָ��
//	//print1(pp);
//	//int n = 10;
//	//int* p = &n;
//	//int** pp = &p;
//	////test(pp);
//	//test(&p);
//	//ָ������ �ڴ���ʱ ����������ָ�루Ԫ�أ��ĵ�ַ �൱�ڿ����ö���ָ�����
//	//����ָ��
//	/*int a = 10;
//	int b*/ /*= 20;*/
//	//printf("%d ", Add(a, b));
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);//���������Ǻ����ĵ�ַ &����ν
//	//int (*p)(int, int) = Add;//����ָ��Ķ���  ����ָ��ָ����
//	//���ɺ����ĳɷ�  ��������ֵ���� �������������β����ͣ�{}
//	//����ָ�붨��  ��������ֵ���� ��*ָ�������������������ͣ�=��������
//	//printf("%d ", Add(2, 3));
//	//printf("%d ", (p)(2, 3));//һ���Ľ��  �������  ������==ָ����==������ַ ָ�벻��Ҫ�����÷��ʺ��� *  ָ������ʵ�Σ����ʣ�
//
//	//void(*p)(char) = prinT;
//	//(*p)("hello bit��������");//ע��һ�� char* p="hdkjhjka"  p����׸��ַ��ĵ�ַ  %s->��ַ ֱ��\0����   �ַ�ָ����ַ�����Ԫ�ص�ַ �ַ�������ַ�����ַ
//	//(*  (void(*)())   0)()  0��ǿ��ת��Ϊһ������ָ������ ��ָ�뺯����������Ϊvoid ����Ϊ�� *�����һغ��� ����һ�κ�������
//	//void(* signal(int, void(*)(int)) )(int) signalΪһ������ ��������Ϊ int һ������ָ������ ָ��������Ϊint ��������ֵΪvoid  void��*����int ��Ϊsignal�ķ�������
//	/*void(*signal(int, void(*)(int)))(int)���Խ��м�  ��ͬ����  void��*����int��
//		typedef void(*ful_t)(int)   ��*�ź� ������
//		ful_t signal(int, fun_t); ��������*/
//
//	//time();��ӡʱ�亯��
//
//	//typedef unsigned int uint �������¶��� 
//
//	//int(*p[4])(int, int) = { Add, Jian, Mal, Div };//�Ӽ��˳�������
//	//for (int i = 0;i<4; i++){
//	//
//	//	printf("%d\n", p[i](2, 3));//5 -1 6 0  ����ָ��ֱ�ӷ��� ����Ҫʹ��*������  һ��ʵ�ֶ���������� ���ú���ָ������
//	//
//	//}
//	/*char* my_strcpy(char* dest, const char* src);
//	typedef my_strcpy my
//	1.дһ������ָ��pf �ܹ�ָ��my_strcpy
//		char* (*pf)(char* , const char* ) = my_strcpy;
//	2.дһ������ָ������ pfarr �ܹ����4��mystrcpy�����ĵ�ַ �����涨���ͼ��� ����Ҫ����д����
//		char* (*pfarr[4])(char* , const char* ) = { my, my, my, my };*/
//
//	//2021-7-4���
//
//	//������
////	int input = 0;
////	int x = 0;
////	int y = 0;//��Ϊÿ�ζ�Ҫ�������д��� ���Կ��Զ�����do{}while()֮ǰ  c�����б���Ҫ�ȶ�������ڽ���ʹ�ã�������
////	do{
////	//input x y ��ֵ���Ա仯
////		menu();
////		printf("��ѡ��:>");
////		scanf("%d", &input);
////		/*printf("��������������:>");
////		scanf("%d%d", &x, &y);*/
////		switch (input){
////
////		case 1:
////			printf("��������������:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Add(x, y));
////			break;
////		case 2:
////			printf("��������������:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Sub(x, y));
////			break;
////		case 3:
////			printf("��������������:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Mul(x, y));
////			break;
////		case 4:
////			printf("��������������:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Div(x, y));
////			break;
////		case 0:
////			printf("�����˳�����\n");
////			break;
////		default:
////			printf("ѡ�����,������ѡ��\n");
////			break;
////
////
////		}
////
////
////
////
////
////
////
////	}while(input);
////	return 0;
////}
//int main(){
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*p[])(int, int)={ 0, Add, Sub, Mul, Div,Xor };//����һ������ָ������
//	do{
//		menu();
//		printf("��ѡ��;>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 6){
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = p[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input==0){
//			printf("�˳�\n");
//		}
//		else{
//			printf("�����������������\n");
//		}
//
//	}while(input);
//	return 0;
//}
//������ �����±� �Ժ���ָ������ ���к�������
void menu(){
	printf("******************************************************\n");
	printf("******1.Add                           2.Sub***********\n");
	printf("******3.Mul                           4.Div***********\n");
	printf("************       0.Exit               **************\n");
	printf("******************************************************\n");

	


}
int Add(int x, int y){
	return (x+y);
}
int Sub(int x, int y){
	return (x - y);
}
int Mul(int x, int y){
	return (x * y);
}
int Div(int x, int y){
	return (x /y);
}
void cale(int(*p)(int, int)){//ͨ������һ�������ĵ�ַ ���ú���ָ����գ���ʱ��ţ� ���лص����� ִ�ж�Ӧ����
	int x = 0;
	int y = 0;
	printf("����������������:>");
	scanf("%d%d", &x, &y);
	printf("%d\n", p(x, y));
}
//int main(){
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*p[])(int, int) = { 0, Add, Sub, Mul, Div };
//	do{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4){
//			printf("��ѡ������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", p[input](x, y));
//		}
//		else if (input == 0){
//			printf("�����˳�����\n");
//		}
//		else{
//			printf("�����������������\n");
//
//		}
//	} while (input);
//	return 0;
//}
int main(){
	int input = 0;
	do{
		menu();
		printf("��ѡ��;>");
		scanf("%d", &input);
		switch (input){
		case 1:
			cale(Add);
			break;
		case 2:
			cale(Sub);
			break;
		case 3:
			cale(Mul);
			break;
		case 4:
			cale(Div);
			break;
		case 0:
			printf("�����˳�����\n");
			break;
		default:
			printf("�����������������\n");
			break;

		}


	} while (input);
}