#define _CRT_SECURE_NO_WARNINGS 1
//�ع� go over review
//#include <stdio.h>
//int isrun_sort(int n){
//	if ((n % 4 == 0) && (n % 100 != 0) || n % 400 == 0){
//		return 1;
//	}
//	else return 0;
//}
//int main(){
//	//���� ��ӡ1200~2000 ֮������� ����һ��
//	int year = 0;
//	int count = 0;
//	for (year = 1200; year <= 2000; year++){
//		if (1 == isrun_sort(year)){
//			printf("%d ", year);
//			count++;
//		}
//		if (count%8==0){//ÿ�˸���ݾͻ���
//			printf("\n");
//		}
//		
//	}
//	printf("\n");
//	printf("1200~2000֮������������%d��\n", count);
//	return 0;
//}
//
//ָ��pointer
//�����ַ����ĳ���
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//int my_strsort(char* str){
//	char* start = str;
//	char* end=str;
//	while (*end != '\0'){
//		end++;
//	}
//	return end - start;//��λָ����������ַ����ĳ���
//}
int main(){//1
	//char ch[] = "bitlll";//6
	////printf("���ַ����ĳ���Ϊ%d\n", strlen(ch));
	///*char* p = ch;
	//int len = 0;
	//for (p = ch; *p != '\0'; p++){
	//	len++;
	//}
	//printf("���ַ����ĳ���Ϊ%d\n", len);*/
	//int len = my_strsort(ch);
	//printf("���ַ����ĳ���Ϊ%d\n", len);
	/*char *p = "zbc";
	char arr[] = "zbc";
	printf("%s\n", *p);
	printf("%s\n", arr);*/
	/*int a = 10;
	int* pa = &a;
	*pa = 520;
	printf("%d\n", *pa);
	printf("%d\n", a);*///�������� �����ٶ�  
	//ָ����һ����������������ڴ浥Ԫ��ַ  һ����Ԫ��Ӧһ���ֽ�
	//ָ����ǵ�ַ  ָ������Ĵ�С��sizeof���ֽ� 32ƽ̨--4  64ƽ̨--8
	//ָ������  �����÷����ֽڴ�С  һһ��Ӧ
	//ָ�����;���ָ��Ĳ��� ��ַ������
	//int arr[10] = { 0 };
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++){
	//	printf("arr[%d]------------%p\n", i, &arr[i]);//����ĵ�ַ�������
	//}
	//int n = 10;
	//int* pn=&n;
	//char* pnn=&n;
	//printf("%p\n", &n);
	//printf("%p\n", pn);
	//printf("%p\n", pnn);
	//printf("%p\n", pn+1);//+4
	//printf("%p\n", pnn+1);//+1
	/*int arr[100] = { 0 };
	int i = 0;
	int count = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* parr = arr;
	for (i = 0; i < sz; i++){
		*(parr + i) = 0;
		count++;
	}
	for (i = 0; i < sz; i++){
		printf("%d\n", arr[i]);
	}
	printf("count=%d\n", count);*/
	//int a = 10;
	//int* pa;//Ұָ��  δ��ʼ����ַ  Ĭ�����ֵ
	//*p = 20;
	//printf("%d\n", *p);
	//int a;//�ֲ�����δ��ʼ�� ����д��
	//int* pa = &a;
	//*pa = 30;
	//printf("%d\n", *pa);
	//ָ��Խ��  �޶� ���� ����
	//�ֲ������ں�����ִ��һ�ξͻ�����
	/*int* test(){
		int a = 10;
		return &a;
	}
	int* p = test();
	*p = 20;
	printf("%d\n", *p);*/

	return 0;
}