#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include  <string.h>
//int main(){
//	char arr[] = "abc";//��\0����
//	char aee[] = { 'a', 'b', 'c' };//\0λ�ò�ȷ��
//	printf("%d\n", strlen(arr));//3
//	printf("%d\n", strlen(aee));//�����
//
//
//	return 0;
//}
//ö�ٳ���
//////enum Man{
//	MALE,//0
//	FEMALe,//1
//	SECRET//2
//	//Ĭ�ϴ�0��ʼ����

//};
//int main(){//ö�ٳ�����0��ʼ
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALe);
//	printf("%d\n", SECRET);
//	//����ö�ٳ�����ʱ����Ҫ��д������ 
//	return 0;
//}
//int Add(int x, int y){
//	return (x + y);
//}
////int main(){
////	//printf("%c\n", '\'');//'
//	//printf("%s\n", "\""); //"
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	//printf("%d+%d=%d\n", a, b, sum);
//	int(*p)(int, int) = Add;//����һ������ָ��  ���������Ǻ�����ַ ==ָ��
//	//printf("%d\n",(*p)(51, 65656));
//	printf("%d\n", Add(51, 65656));
//	return 0;
//}
//������������
void Swap1(int* x, int* y){
	*x = *x + *p;
	*p = *x - *p;
	*x = *x - *x;
}
int main(){
	int a = 10;
	int b = 20;//   a=20  b=10
	Swap1(&a, &b);//��ֵ���ò��ܸı�����ĵ�ַ ֻ�д�ַ���ò��ܸı�����ĵ�ַ
	printf("%d %d\n", a, b);//a=20 b=10
	return 0;
}