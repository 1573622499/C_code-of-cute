#define _CRT_SECURE_NO_WARNINGS 1//���Ծ���
////////��������Ϸ
//////#include <stdio.h>
//////#include <time.h>
//////void menu(){
//////	printf("*******************************************************************\n");
//////	printf("************0.EXIT                     1.PLAY**********************\n");
//////	printf("*******************************************************************\n");
//////}
//////void game(){
//////	int guess = 0;
//////	int ret = rand() % 100 + 1;
//////	//ret = rand() % 100 + 1;
//////	printf("������Ѿ�����,�������\n");
//////	while (1){
//////		scanf("%d", &guess);
//////		if (guess > ret){
//////			printf("�´���!\n");
//////
//////		}
//////		else if (guess < ret){
//////			printf("��С��!\n");
//////
//////		}
//////		else{
//////			printf("��ϲ��¶��ˣ��������Ϊ%d\n", ret);
//////			break;
//////		}
//////	}
//////}
//////int main(){
//////	int input = 0;
//////	srand((unsigned int)time(NULL));
//////	printf("��ӭ������������Ϸ!\n");
//////	do{
//////		menu();
//////		printf("��ѡ��:>");
//////		scanf("%d", &input);
//////		switch (input){
//////		case 0 :
//////			printf("�����˳���Ϸ\n");
//////			break;
//////		case 1:
//////			game();
//////			break;
//////		default:
//////			printf("�����������������\n");
//////			break;
//////		}
//////	} while (input);
//////	return 0;
//////}
//////
//////n�Ľ׳� ���
//////#include <stdio.h>
//////int main(){
//////	int n = 0;
//////	int sum = 0;
//////	printf("������һ������:>");
//////	scanf("%d", &n);
//////	for (int i = 1; i <= n; ++i){
//////		int ret = 1;
//////		for (int j = 1; j <= i; ++j){
//////			ret *= j;//����nÿһ�α仯�׳˵�ֵ
//////		}
//////		sum += ret;//�ۼ����
//////	}
//////	printf("%d�Ľ׳� ��Ϊ%d\n", n, sum);
//////	return 0;
//////}
////#include <stdio.h>
////int SUM_sort(int n){
////	if (n == 1){
////		return 1;
////	}
////	else{
////		return n*SUM_sort(n - 1);//�ݹ�˼��
////	}
////}
////int s_sort(int n){
////	int ret = 1;
////	for (int i = 1; i <= n; ++i){
////		ret *= i;
////	}
////	return ret;
////}
////int main(){
////	int n = 0;
////	printf("������һ������:>");
////	scanf("%d", &n);
////	int s = SUM_sort(n);
////	int m = s_sort(n);
////	//printf("%d�Ľ׳�Ϊ%d\n", n, s);
////	printf("%d�Ľ׳�Ϊ%d\n", n, m);
////	return 0;
////}
////�ַ������� strcpy
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//#include <assert.h>
//
//
//
////void my_strcpy(char* dest, char* sour){
////	//1.
////	while (*sour != '\n'){
////		*dest = *sour;
////		dest++;
////		sour++;
////
////	}//ѭ��������ʱ�� *sour='\n'
////	*dest = *sour;
////
////}
////void my_strcpy(char* dest, char* sour){
////	while (*dest++ = *sour++){
////		;
////	}
////}
////void my_strcpy(char* dest, char* sour){
////	assert(dest != NULL);
////	assert(sour != NULL);
////	while (*dest++ = *sour++){
////		;
////	}
////}
////int main(){
////	char arr1[] = "***********";
////	char arr2[] = "bit";
////	//strcpy(arr1, arr2);
////	my_strcpy(arr1, arr2);
////	printf("%s\n", arr1);
////
////
////	return 0;
////}
//#include <assert.h>
//void my_strcpy(char* dest,char* sour){
//	assert(dest != NULL);
//	assert(sour != NULL);//ָ��֮��ıȽ�
//	while (*dest++=*sour++){
//		;
//	}
//
//}
//int main(){
//	//�ַ������� strcpy()
//	/*char arr1[] = "************";
//	char arr2[] = "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);*/
//
//
//
//	return 0;
//}
//strcpy strlen    �滻 my_strcpy  my_strlen()
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

void my_strcpy1(char* dest, char* sour){
	while (*sour != '\0'){
		*dest = *sour;
		dest++;
		sour++;
	}
	*dest = *sour;
}
void my_strcpy2(char* dest,char* sour){
	while (*dest++ = *sour++){
		;
	}
}
void my_strcpy3(char* dest, const char* sour){//const 
	assert(dest != NULL);//����
	assert(sour != NULL);//����
	while (*dest++ = *sour++){
		;
	}
}
//strcpy �Զ��庯��������ʽ
char* my_strcpy4(char* dest, const char* sour){
	char* ret = dest;
	assert(dest != NULL);
	assert(sour != NULL);
	while (*dest++ = *sour++)
	{
		;
	}
		return ret;
}
int my_strlen(const int* str){
	int count = 0;
	assert(str != NULL);
	while (*str != '\0'){
		count++;
		str++;
	}
	return count;
}
int main(){
	//char arr1[] = "***********";
	//char arr2[] = "bitbit";
	////my_strcpy1(arr1, arr2);
	////my_strcpy2(arr1, arr2);
	////my_strcpy3(arr1, arr2);
	//my_strcpy4(arr1, arr2);
	////printf("%s\n", arr1);
	//printf("%s\n", my_strcpy4(arr1, arr2));

	//strlen()����
	/*char arr[] ="jldjaslcjkhdkashdila";
	int len = my_strlen(arr);
	printf("%d\n", len);*/
	//���ݵĴ洢
	//��ӡ�����
	//srand((unsigned int)time(NULL));
	//while (1){//��������� �����Ѿ�ѧ��
	//	int len = rand() % 100 + 1;
	//	printf("%d\n", len);
	//}











	return 0;
}
