#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <assert.h>
#include <time.h>
void test(int arr[]){//arr ��ʱΪ��Ԫ�ص�ַ   ��ͬ���������  &arrȡ����ĵ�ַ  strlen()�����ַ������ȵ�ʱ��
	int sz = sizeof(arr) / sizeof(arr[0]);// sizeof(arr)һ����ַ�Ĵ�С  sizeof(arr[0])����һ������Ԫ�صĴ�С ��ȻΪ4  4or8/4=2or1 ָ�����ʹ�С�����ƽ̨�й� 4 or 8  
	printf("%d\n", sz);//1 or 2
	 
}
//int main()
//{
//	////1091567616
	//int n = 9;
	//float* pFLOAT = (float*)&n;//&n int* ()����ǿ��ת��
	//printf("%d\n", n);//9
	//printf("%f\n", *pFLOAT);//0.000000  *pFLOAT - ȡ
	//*pFLOAT = 9.0;//��
	//printf("%d\n", n);//ֱ�ӽ�FLOAT��Դ�뵱��int��Դ����д�ӡ  ���  1091567616
	//printf("%f\n", *pFLOAT);//9.000000  ������ С�����Ĭ�ϴ�ӡ��λ��
	//���� �������ͺ͸����������������ڴ��еĴ洢��ʽ��ͬ


	//char a[1000];
	//int i = 0;
	//for (i = 0; i <1000; i++){

	//	a[i] = -1 - i;
	//}

	//printf("a[1000]�ĳ���Ϊ%d\n", strlen(a));//Ѱ��\0->"0" �ַ���������־ char[-128,127] Ĭ���з�����-128-1=127...255

	//return 0;
	//ָ������ int arr[20]={0}; ��������  int* parr[10] ����ָ������
	/*int a = 10;
	int b = 20;
	int c = 30;
	int* p[3] = { &a, &b, &c };
	for (int i = 0; i < 3; i++){
		printf("%d ", *p[i]);
	}
	printf("\n");


*/
	//ָ������Ļ���ʹ��
	/*int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 2, 3, 4, 5, 6 };
	int arr3[] = { 3,4,5,6,7};
		int* parr[3] = { arr1, arr2, arr3 };
	for (int i = 0; i < 3; i++){
	
		for (int j = 0; j < 5; j++){
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
*/
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	////int (*p)[10]=&arr;//&arr ����ĵ�ַ Ӧ��������ָ�������  ����ʽ��ʾָ��ָ��һ������ʮ��Ԫ�أ����Σ�������
	//int i = 0;
	//int* parr = arr;//parr �� arr �ȼ�
	//int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	//for (i = 0; i < sz; i++){
	//	printf("%d ", arr[i]);
	//	printf("\n");
	//	printf("%d ", parr[i]);
	//	printf("\n");
	//	printf("%d ", *(parr+ i));
	//	printf("\n");
	////	printf("%d ", *(arr + i));
	////	printf("\n");
	//}
	//ָ�����ƪ
//�ַ�ָ�� ����ָ�� ָ������ ���鴫�κ�ָ�봫��  ����ָ�� ����ָ������ ָ����ָ�������ָ�� �ص����� ָ�������������
	/*int arr[10] = { 0 };
	test(arr);
	return 0;
	*/
//int main(){
//
//	//char arr[] = "abcdef";
//	//char* parr = arr;
//	//printf("%s\n", arr);
//	//printf("%s\n", parr);//��ָ����Ԫ�ص�ַ��ʼ��ӡ �ַ���������־ ��\0��==0
//
//	//��һ��д�� ����  
//	//const char* const parr = "abcdef";//��ʵ���Բ��Ϊ�������� char arr[]="abcedf"  char* parr=arr; parr��ָ��Ķ����ַ����ĵ�һ��Ԫ�صĵ�ַ "abcdef"Ϊһ�������ַ��� ԭ���ϲ��ܱ��ı��
//	//*parr = 'e';//32ƽ̨���� 64ƽ̨ok ���� Ӧ������ǰ�����const ������ ��������� ����*parr����
//	//printf("%s\n", parr);//��ַ->�ַ���
//	char* pa = "abcdef";paΪһ���ַ�ָ�� ָ������ַ�����һ��Ԫ�صĵ�ַ����Ԫ�ص�ַ��
//	//printf("%c\n", *pa);//a
//
//
//	return 0;
//}
//
//
//
//


//int main(){
//	char arr1[] = "abcdef";
//	char arr2[] = "abcede";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";//p1 p2 ��ָ�򣨴�ţ��ĵ�ַ��ͬ ��abcdef������p1 p2 û�й�ϵ   ��abcdef�����г����� ���ڴ���ֻ��һ��
//	//if (arr1 == arr2){//��Ȼarr1 arr2 �ĵ�ַ��Ȼ��ͬ ���������ӡhaha
//	//	printf("hehe\n");
//	//}
//	//else{
//	//	printf("haha\n");
//	//}
//	if (p1 == p2){
//		printf("hehe\n");
//
//	}
//	else{
//		printf("haha\n");//p1 p2 ָ��Ķ�����Ԫ�صĵ�ַ ���Զ������ ��ӡ����hehe
//	}
//
//	return 0;
//}
//int main(){
//	//ָ������ ������ �������ָ��
	//int arr[10] = { 0 };//�������� �����������
	//char ch[5] = { 0 };//�ַ����� ��������ַ�
	//int* arr1[10];//���� ָ������ ����ָ������Ϊ ����
	//char* ch1[4];//�ַ� ָ������ ����ָ������Ϊ �ַ�
	//��������
	/*int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int* p[4] = { &a, &b, &c, &d };
	for (int i = 0; i < 4; i++){
		printf("%d ", *(p[i]));
	}
	printf("\n");

*/
	  //��������
	//int arr1[] = { 1, 2, 3, 4, 5 };
	//int arr2[] = { 2, 3, 4, 5, 6 };
	//int arr3[] = { 3, 4, 5, 6, 7 };
	//int* p[3] = { arr1, arr2, arr3 };//p��Ϊһ��ָ�����麬������ָ�� �ֱ�ָ��ÿ������Ԫ�ص�ַ
	//int i = 0;
	//for (i = 0; i < 3; i++){
	//	int j = 0;
	//	for (j = 0; j < 5; j++){
	//		//printf("%d ", *(p[i]+j));
	//		printf("%d ", p[i][j]);
	//		//printf("%d ", *(p[i]+j));//+ j == [j]
	//	}
	//	printf("\n");
	//} //ָ��+ -������ǲ���   ָ������ Ӱ����ʿռ�Ĵ�С
//����ָ��  pointer
	//int *p = NULL;//p������ָ�� ָ�����ε�ָ�� ���Դ�����εĵ�ַ
	//char* pc = NULL;//pc���ַ�ָ�� ָ���ַ���ָ�� ���Դ���ַ��ĵ�ַ
	////����ָ�� �������ĵ�ַ ָ�������ָ�� &arr�����ַҪ������ָ�������
	//int arr[10] = { 0 };
	//arr------&arr[0]��Ԫ�صĵ�ַ
	//	&arr - ��������ĵ�ַ
	//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int ��*p)[10] = &arr;//��������ַ  ��*p������ָ�� ������ŵ�ַ  *pָ��һ������ʮ������Ԫ�ص����� ��pΪ����ָ�� intΪָ������Ԫ�ص�����
	////���ȼ����� [] >> *

//
//	return 0;
//}�ַ����� ����ַ���  char ch[20];  �ַ�ָ������ ���ָ�� char* ch[20]  char (*p)[20]=&arr�ַ�����ָ��
 

//int main(){
//	/*char ch[] = "abc";
//	printf("%s\n", ch);
//	char* p = ch;
//	printf("%s\n", p);
//	*/
//	//char* p= "abceef";//pָ����Ԫ�صĵ�ַ
//	//printf("%s\n", p);
//	//
//	/*char* arr[5];
//	char* (*pa)[5] = &arr; ����ָ��
//		int arr2[10] = &arr;
//	int(*pa2)[10] = &arr2;
//
//*/
//	//�Ƚ�arr &arr
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr);//��ӡ�Ľ�Ϊ��Ԫ�ص�ַ
//	////printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);//byte
//	//printf("%p\n", &arr+1);//��Խ��Ϊһ������Ĵ�С 40���ֽ� 
//	//int (*p)[10]=&arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++){//p=&arr   *p==arr  �һ����� ������Ԫ�ص�ַ
//	//	printf("%d ", (*p)[i]);//ģ��������� arr[i]
//	//int* p = arr;
//	int (*p)[10] = &arr;
//	for (int i=0;i<10;i++){
//		//printf("%d ", *(p + i));
//		//printf("\n");
//		//printf("%d ", p[i]);  //*(p + i) == p[i]
//		printf("%d ", *(*p + i));//ͨ��ָ��ķ��ʷ�ʽ
//	}
//	return 0;
//}
void print1(int arr[3][5], int x, int y){//ע��ʵ�δ����βζ�Ӧ������
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			
			printf("%d ", arr[i][j]);
		}
		printf("\n");

	}

}
void print2(int(*p)[5] , int x, int y){
	//һ��һԪ��
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			//printf("%d ", *(*(p + i) + j));
			printf("%d ", *(*(p + i) + j));//*p��ʾÿ�е���Ԫ�ص�ַ
			//printf("%d ", *(*(p + i)[j]));//arr[j] �൱�ڶ�ά�����ֳ�һά����


		}
		printf("\n");
	}


}
int main(){
	int arr[3][5] = { { 1, 2, 3, 4, 5 },{ 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };//˼��һ�������arr Ҳ����Ԫ�ص�ַ
	//print1(arr, 3, 5);
	//print2(arr, 3, 5);//arrΪ��Ԫ�ص�ַ ����������ָ��





	return 0;
}
