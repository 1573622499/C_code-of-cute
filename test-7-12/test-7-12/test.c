#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include  <string.h>
//int main(){
//	char arr[] = "abc";//以\0结束
//	char aee[] = { 'a', 'b', 'c' };//\0位置不确定
//	printf("%d\n", strlen(arr));//3
//	printf("%d\n", strlen(aee));//随机数
//
//
//	return 0;
//}
//枚举常量
//////enum Man{
//	MALE,//0
//	FEMALe,//1
//	SECRET//2
//	//默认从0开始计数

//};
//int main(){//枚举常量从0开始
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALe);
//	printf("%d\n", SECRET);
//	//创建枚举常量的时候不需要大写变量名 
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
//	int(*p)(int, int) = Add;//创建一个函数指针  函数名即是函数地址 ==指针
//	//printf("%d\n",(*p)(51, 65656));
//	printf("%d\n", Add(51, 65656));
//	return 0;
//}
//交换两个整形
void Swap1(int* x, int* y){
	*x = *x + *p;
	*p = *x - *p;
	*x = *x - *x;
}
int main(){
	int a = 10;
	int b = 20;//   a=20  b=10
	Swap1(&a, &b);//传值调用不能改变变量的地址 只有传址调用才能改变变量的地址
	printf("%d %d\n", a, b);//a=20 b=10
	return 0;
}