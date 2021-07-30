#define _CRT_SECURE_NO_WARNINGS 1
//////#include <stdio.h>
//////int main(){
//////	//得到最大值
//////	int getmax(int x, int y);
//////	int num1 = 0;
//////	int num2 = 0;
//////	scanf("%d%d", &num1, &num2);
//////	int MAX = getmax(num1, num2);
//////	printf("最大值为%d\n", MAX);
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
////////另一种表达
//////int getmax(int x, int y){
//////	return x > y ? x : y;
//////}
//////#include <stdio.h>
////////int a=10;  指针变量在具体类型后加上*
////////int* p=&a;
//////void swap1(int x, int y){//未对地址进行处理 并不能交换两个数的值
//////	int tmp = 0;
//////	tmp = x;
//////	x = y;
//////	y = tmp;
//////}
//////void swap2(int* pa, int* pb){
//////	int tmp = 0;//*为解引用操作 通过pa 找到a 并且对a在进行操作
//////	tmp = *pa;
//////	*pa = *pb;
//////	*pb = tmp;
//////}
//////int main(){
//////	//交换两个数
//////	int a = 3;
//////	int b = 5;
//////	printf("a=%d b=%d\n",a,b);
//////	swap1(&a,&b);
//////	printf("a=%d b=%d\n",a,b);//交换两个数改变了两个数的地址，应该采用指针变量进行传入
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
////	//应用函数交换两个数的值
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
//	int* pa = &a;//指针变量  用来存放地址 *pa *解引用操作 通过a的地址来对a进行操作与处理
//	*pa = 250;
//	printf("%p\n", *pa);
//	printf("a=%d\n", a);//实参与形参使用的不是同一个空间
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int get_max(int x, int y);
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int s = get_max(num1, num2);//s为变量可以进行赋值操作哦
//	printf("最大值为%d\n", s);
//	s = get_max(111, 553);
//	printf("最大值为%d\n", s);
//	s = get_max(44, get_max(45, 55));
//	printf("最大值为%d\n", s);
//	s = get_max(get_max(45,78), get_max(45, 55));
//	printf("最大值为%d\n", s);
//	return 0;
//}
//int get_max(int x, int y){
//	if (x > y)
//		return x;
////	else
//		return y;
//}
//九九乘法表
//1*1=1 几行几列
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
//		printf("\n");//换行操作
//	}
//	return 0;
//}
