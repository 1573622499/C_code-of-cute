#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���ú����ж�һ�����Ƿ�Ϊ����
//#include <stdio.h>
//int  is_prime(int n){
//	if (n % 2 == 0)
//		return 0;//��Ϊ��������ż����  Ĭ��1����������������������
//	int i = 0;
//	for (i = 2; i <=n/2; i++){//ע��return ֻ����һ�� �����ͽ���
//		if (n%i == 0)
//			return 0;//��������
//	}
//	if (i>n/2)
//		return 1;
//
//}
//int main(){
//	int n = 0;
//	printf("������һ����:>");
//		scanf("%d", &n);
//	if (is_prime(n) == 1){
//		printf("%d������\n", n);
//	}
//	else{
//		printf("%d��������\n", n);
//	}
//
//	return 0;
//}
//����->�ӳ��� ��Զ��� ִ���ض����� 
//������Ϊ���Զ��庯�� �⺯��  ������ʽ  ����ֵ ��������������{����}
//strcpy(destination,source );
//memset(char*, ����ַ�, ����); sqrt()-> <math.h>
//int ch = 0;
//while ((ch = getchar()) != EOF){
//	putchar(ch);
//}
//while ((ch = getchar()) != '\0'){
//	;//������\0����
//}
//strcpy(, ); �����ַ��� ��Ҫ��'\0'һ�𿽱�
//char arr1[] = "hello world";
//char arr2[] = "#############";
//strcpy(arr2, arr1);
//printf("%s\n", arr2)��//arr2 hello world
//memset(arr1, '*'int (char ����ASCII��ֵ), 5);
//printf("%s\n", arr1);//##### world
////��ֵ���� ��ַ���ã��ı�ֵ�����������ַ��ָ�룩* ���иı� 
//ʵ�����ͣ����� ���� ���� ���ʽ 
//�β���ʵ�ε�һ����ʱ����  �β�ͬ������ʱ�ĵ�ַ ���βεĸı䲻��Ӱ��ʵ��
//1.�ж�����
int Is_prime(int n){
	if (n / 2 == 0)//�Գ���
		return 0;//����0��ʾ��������
	int i = 0;
	for (i = 2; i <= n / 2; i++){//i/2 sqrt(n)  n-1
		if (n%i == 0)
			return 0;//n�ܱ�����Ϊ����

	}
	if (i > n / 2)
		return 1;//nΪ����
	
}
//int main(){
//	int n = 0;
//	printf("������һ������:>");
//	scanf("%d", &n);
//	if (Is_prime(n) == 1)
//		printf("%dΪ����\n", n);
//	else
//		printf("%d��������\n", n);
//
//	return 0;
//}
//�ж�һ����Ƿ�Ϊ����
int Is_runin(int year){
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;//����ֵΪ1Ϊ����
	else
		return 0;
}
////�������ֲ��ң��۰���ң�
//void BinSearch(int arr[],int sz,int k){
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("��ϲ���ҵ��ˣ���������±���%d\n", mid);
//			break;//�ҵ�����������˳�ѭ��  return 1; ѭ���ж� Ҳ���������� �н��
//		}
//
//		
//	}
//	if (left>right)
//		printf("�Ҳ��������!\n");
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	BinSearch(arr, sz, k);
//	return 0;
//}
//ÿ����һ�� num+1
void test(int* pn){
	(*pn)++;//num++ * + �漰���ȼ� �����
}
int main(){
	int num=0;
//����ѭ������test()ʮ��
	int i = 0;
	for (i = 0; i < 10; i++){
		test(&num);//����ָ�루���num�ĵ�ַ���иı�num��ֵ��
	}

	printf("num=%d\n", num);//���ú��num 2

	return 0;
}
