#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

//int main(){
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	/////*int* p=arr;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	////for (int i = 0; i < sz; i++){
	////	printf("%d ", *(p + i));
	////}*/
	////��������ָ��
	//int (*p)[10] = &arr;//����ָ��洢����ĵ�ַ
	//int i = 0;
	//for (i = 0; i < sz; i++){
	//	printf("%d ",*p[i]);
	//ָ������
	/*int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2 []= { 2, 3, 4, 5, 6 };
	int arr3 []= { 3, 4, 5, 6, 7 };
	int* p[3] = { arr1, arr2, arr3 };
	int i = 0;
	int j = 0;
	for (i=0;i<3;i++){
		for (j = 0; j < 5; j++){
			printf("%d ", );
		}


	}
	return 0;
}*/
void print2(int(*p)[5], int x, int y){

	for (int i = 0; i < x; i++){

		for (int j = 0; j < y; j++){
			//printf("%d ", *(*(p + i) + j));
			//printf("%d ", *p[i]+j);
		//printf("%d ", p[i][j]);
		//���ߵȼ�
		}
		printf("\n");
	}



}
void print3(char* str){
	printf("%s", str);
}
void print1(int arr[3][5], int x, int y){

	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	
	}
}
void print(int** str){
	**str = 20;
	printf("%d\n", **str);
}
int Add(int x, int y){
	return (x + y);
}
int Jian(int x, int y){
	return x-y;
}
int Mal(int x, int y){
	return (x*y);
}
int Div(int x, int y){
	return (x / y);
}
//int main(){
	//ָ������
	//int arr1[] = { 1, 2, 3, 4, 5 };
	//int arr2[] = { 2, 3, 4, 5, 6 };
	//int arr3[] = { 3, 4, 5, 6, 7 };
	//int* p[3] = { arr1, arr2, arr3 };
	//for (int i = 0; i < 3; i++){
	//	for (int j = 0; j < 5; j++){
	//		//printf("%d ", *(p[i] + j));
	//		//arr[i]==p[i]==*(p+i)==*(arr+i)  
	//		printf("%d ", p[i][j]);
	//	}printf("\n");
	/*int a = 10;
	int b = 20;
	int c = 30;
	int* p[3] = { &a, &b, &c };
	for (int i = 0;i<3;i++){
		printf("%d ", *(p[i]));





	}
	printf("\n");

*/
	//����ָ��
	//int arr[5] = { 1, 2, 3, 4, 5 };
	//int (*p)[5] = &arr;//����ָ�� �������ĵ�ַ
	//for (int i = 0; i < 5; i++){
	//	printf("%d ", (*p)[i]);
	//}
	//��Զ�ά����
	//int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	////print1(arr, 3, 5);//������
	//print2(arr, 3, 5);//�õ�ַ
	//����ָ��
	//int n = 10;
	//int* p = &n;
	//int** pp = &p;
	//print(&p);
	////printf("%d\n", **pp);
	//����ָ�����ַ�ָ����  char* p="abcede"==char arr[]="abcede" +  char* p=arr;  pΪһ���ַ�ָ�� ��������������Ԫ�ص�ַ %s --��Ԫ�ص�ַ ����С�\0��
	/*void(*p)(char*) = print3;
	(*p)("hello bit");
	printf("\n");*/
	//��¼
	//char password[20] = { 0 };
	//int k = 0;
	//printf("����������:>");
	//for (int i = 0; i < 3; i++){
	//	scanf("%s", password);
	//	if (0==strcmp(password, "123456")){
	//		printf("��¼�ɹ�\n");
	//		break;
	//	}
	//	else{
	//		printf("�����������������\n");
	//		k++;

	//	}
	//	if (k == 3){
	//		break;
	//	}
	//}


	//printf("hehe\n");//k==3 ʱ�˳�����

	//����ָ������
	//int a = 10;
	//int b = 20;
	////int sum = Add(a, b);
	//printf("%d ", sum);
	//���ú���ָ�� p=Add ��������������ַ &������
	//int(*p)(int, int) = Add;
	//printf("%d ", (*p)(2, 9));//����ָ�����
	//����ָ������
	//int(*p[4])(int, int) = { Add, Jian, Mal, Div };//�Ӽ��˳�
	//int i = 0;
	//for (i = 0; i < 4; i++){

	//	printf("%d\n", p[i](a, b));//������������� arr[i]  ����ָ����ʺܼ�  ָ�루������ ������ָ��ǰ���һ��*
	//}//30 -10 200 0
	//void(*     signal(int, void(*)(int)))    (int);//��������   ����ָ������   void(*)() һ������ָ��ָ��һ���޲Σ�����ֵΪ�յĺ���
	////����typedef��
	//typedef void(*fun_t)(int)
	//	void(*signal(int, void(*)(int)))    (int)----->       fun_t signal(int, fun_t);��������
	//	//һ�������ĳɷ�    ����ֵ���� ������ ���������ͣ���
	//	*(void(*)())0()    0��ǿ��ת��Ϊһ������ָ������ Ȼ��ͨ��*���ʺ�������
	//��ӡ 1 2 3 4 5  
	  //   2 3 4 5 6 
 	//     3 4 5 6 7
	//ָ������
	//int arr1[] = { 1, 2, 3, 4, 5 };
	//int arr2[] = { 2, 3, 4, 5, 6 };
	//int arr3[] = { 3, 4, 5, 6, 7 };
	//int* p[3] = { arr1, arr2, arr3 };
	//int i = 0;
	//for (i = 0; i < 3; i++){

	//	for (int j = 0; j < 5; j++){
	//		//printf("%d  ", *(p[i] + j));//��Ϊ[]�����ȼ�����* ����������ʲ���Ҫ��ַ
	//		printf("%d ", p[i][j]);//Ҳ��

	//	}
	//	printf("\n");
	//}ʹ������ָ��
//��ӡһά����
//int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//int* p = arr;
//for (int i = 0; i < 10; i++){
//	printf("%d ", *(p + i));
//}
//int (*p1)[10] = &arr1;//�����ַ->����ָ��
//����ָ�����һά����
//for (int i = 0; i < 10; i++){
//
//	printf("%d ", (*p)[i]);//�������˵��[]���ȼ�����*
//
//}
//����ָ����ڷ��ʶ�ά����
//int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
//int(*p)[5] =arr;
//for (int i = 0; i < 3; i++){
//
//	for (int j = 0; j < 5; j++){
//		printf("%d ", *(*(p + i) + j));
//		/*printf("%d ", *(p[i] + j));
//		printf("%d ", p[i][j]);*/
//
//	}
//	printf("\n");
//






//
//	return 0;
//}
////ʵ��my_strcmp() �Զ����ַ�����������
char* my_strcpy(char* dest, const char* source){
	char* str = dest;
	assert(dest != NULL);
	assert(source != NULL);//����������ֱ�ӱ���
	while (*dest++ = *source++){
		;
	}//����ѭ�� dest�ڲ��Ѿ��ı� �����ɹ�
	return str;
}
int main(){
	/*char* arr1 = "********************************";
	char* arr2 = "hello bit";*/
	char arr1[] = "********************";
	char arr2[] = "hello bit!";
	//ҵ��ʵ�� ��arr2������ת�Ƶ�arr1����
	//printf("%s\n", my_strcpy(arr1, arr2));//Debug ָ�����ַ�����ʱ����ʵ��
	printf("%c\n", *arr1);//*
	return 0;
}
