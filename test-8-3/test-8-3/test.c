#define _CRT_SECURE_NO_WARNINGS 1
//����
#include <string.h>
#include <stdio.h>
void print(int n){
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);


}
//ͳ���ַ�������
int My_strlen(char* p){

	if (*p != '\0')
		return 1 + My_strlen(p + 1);
	else
		return 0;
}
int main(){
	//����һ������������-ʮ��
	//int arr[10] = { 0 };
	//int n = 10;
	////int arr1[n] = { 0 };error [�������ʽ]
	//char str[] = "abcdef";//6  'a''b''c  'd'e'f'\0'
	//printf("%d\n", strlen(str));//�ַ�������   6 '\0'��ʾ�ַ���������־ strlen��Ҫ��ʶ���� ͳ�Ƹ��ַ���'\0'֮ǰ���ַ�����==�ַ�������
	//printf("%d\n", sizeof(str));//�������ݴ洢�ռ��С   7
	//char arr2[] = { 'a', 98, 48 };
	//return 0;
	//strlen() ��sizeof()û�й���
	//strlen() �����ַ������ȵ�-һ���⺯��-ֻ����ַ����󳤶�
	//sizeof()-һ����Ŀ������ ������������顢���͵Ĵ�С--��λ���ֽ�--������
	//���۴洢��ַ
	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) /sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++){

		printf("&arr[%d]--%p\n", i, &arr[i]);
	}*/
//	//�������ڴ����������洢�� �ɵ͵�ַ���ߵ�ַ��ά����Ҳ��������  ������ʶ��Ǵ��±�Ϊ0��ʼ��
	//��λ���顰�С�����ʡ��
	//int arr[][3] = { { 1, 2, 3 },{ 4, 5, 6 },{7, 8, 9} };
	//int i = 0;//[] [] [] (arr[0])  [] [] [](arr[1])   [] [] [](arr[2])   
	//int j = 0;//
	//for (i = 0; i < 3; i++){
	//	for (j = 0; j < 3; j++){

	//		//printf("%d ", arr[i][j]);
	//		printf("&arr[%d][%d]---%p\n", i, j, &arr[i][j]);
	//	}
	//	printf("\n");
	//}
	//1234  1  2  3  4
	/*int n = 0;
	scanf("%d", &n);
	print(n);*/
	char ch[] = "ahdkajkd";
	printf("%d\n", My_strlen(ch));



















	return 0;
}

