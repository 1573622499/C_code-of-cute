#define _CRT_SECURE_NO_WARNINGS 1
//////#include <stdio.h>
//////int main(){
//////	//�õ����ֵ
//////	int getmax(int x, int y);
//////	int num1 = 0;
//////	int num2 = 0;
//////	scanf("%d%d", &num1, &num2);
//////	int MAX = getmax(num1, num2);
//////	printf("���ֵΪ%d\n", MAX);
//////	return 0;
//////}
//////
////////int getmax(int x, int y){
////////	if (x < y){
////////		return y;
////////	}
////////	else{
////////		return x;
////////	}
////////}(x>y)?(x):(y);
////////��һ�ֱ��
//////int getmax(int x, int y){
//////	return x > y ? x : y;
//////}
//////#include <stdio.h>
////////int a=10;  ָ������ھ������ͺ����*
////////int* p=&a;
//////void swap1(int x, int y){//δ�Ե�ַ���д��� �����ܽ�����������ֵ
//////	int tmp = 0;
//////	tmp = x;
//////	x = y;
//////	y = tmp;
//////}
//////void swap2(int* pa, int* pb){
//////	int tmp = 0;//*Ϊ�����ò��� ͨ��pa �ҵ�a ���Ҷ�a�ڽ��в���
//////	tmp = *pa;
//////	*pa = *pb;
//////	*pb = tmp;
//////}
//////int main(){
//////	//����������
//////	int a = 3;
//////	int b = 5;
//////	printf("a=%d b=%d\n",a,b);
//////	swap1(&a,&b);
//////	printf("a=%d b=%d\n",a,b);//�����������ı����������ĵ�ַ��Ӧ�ò���ָ��������д���
//////	swap2(&a, &b);
//////	printf("a=%d b=%d\n", a, b);
//////	return 0;
//////}
////#include <stdio.h>
//////void swap1(int* pa, int* pb){
//////	int tmp = 0;
//////	tmp = *pa;
//////	*pa = *pb;
//////	*pb = tmp;
//////
//////}
////
////////void swap3(invoid swap2(int* pa, int* pb){
//////	*pa = *pa + *pb;
//////	*pb = *pa - *pb;
//////	*pa = *pa - *pb;
//////
//////}t* pa, int* pb){
//////
//////	*pa = *pa^*pb;
//////	*pb = *pa^*pb;
//////	*pa = *pa^*pb;
//////}
////int main(){
////	//Ӧ�ú���������������ֵ
////	int a = 3;
////	int b = 5;
////	/*swap1(&a, &b);
////	printf("a=%d b=%d\n", a, b);*/
////	swap2(&a, &b);
////	printf("a=%d b=%d\n", a, b);
////	/*swap3(&a, &b);
////	printf("a=%d b=%d\n", a, b);*/
////	return 0;
////}
//#include <stdio.h>
//int main(){
//	int a = 10;
//	int* pa = &a;//ָ�����  ������ŵ�ַ *pa *�����ò��� ͨ��a�ĵ�ַ����a���в����봦��
//	*pa = 250;
//	printf("%p\n", *pa);
//	printf("a=%d\n", a);//ʵ�����β�ʹ�õĲ���ͬһ���ռ�
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int get_max(int x, int y);
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int s = get_max(num1, num2);//sΪ�������Խ��и�ֵ����Ŷ
//	printf("���ֵΪ%d\n", s);
//	s = get_max(111, 553);
//	printf("���ֵΪ%d\n", s);
//	s = get_max(44, get_max(45, 55));
//	printf("���ֵΪ%d\n", s);
//	s = get_max(get_max(45,78), get_max(45, 55));
//	printf("���ֵΪ%d\n", s);
//	return 0;
//}
//int get_max(int x, int y){
//	if (x > y)
//		return x;
////	else
//		return y;
//}
//�žų˷���
//1*1=1 ���м���
//1*2=2 2*2=4  i*j
//.....
//#include <stdio.h>
//int main(){
//	int i = 0;
//	for (i = 1; i <= 100000; i++){//i row  j col
//		int j = 0;
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");//���в���
//	}
//	return 0;
//}
