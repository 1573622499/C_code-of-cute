#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//
//
////int Add(int x, int y){
////	return (x + y);
////}
///*i*//*nt Jian(int x, int y){
//	return (x - y);
//}
//int Mal(int x, int y){
//	return x*y;
//}
//int Div(int x, int y){
//	return x / y;
//}*/
////数组传参
////void test(int *arr){
////}  no
////void test(int* arr[5]){
////
////}  no
////void test(int(*p)[5]){
////
////}ok
////void test(int **arr){
////
////}no
////int main(){
////	int arr[3][5];//arr 表示首元素地址  二维数组对应一个数组地址
////	test(arr);
////}
////二维数组传参可以省略行的数字
////一级指针打印
////void test(int** str){
////	printf("%d ", **str);
////	printf("\n");
////}
////void print(int* p, int sz){
////	int i = 0;
////	for (i = 0; i < sz; i++){
////
////		//printf("%d ", *(p + i));//p[i]
////		printf("%d ", p[i]);
////	}
////	printf("\n");
////}
////void print1(int** ret){
////	printf("%d ", **ret);
////}
////void prinT(char* p){
////	printf("%s\n", p);
////}
//////void time(){
//////	time_t t;
////	time(&t);
////	struct tm *lt = localtime(&t);
////	printf("%d/%d/%d %d:%d:%d\n", lt->tm_year + 1900, lt->tm_mon + 1, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->s);
////}
//
//int Add(int x, int y){
//	return (x + y);
//}
//int Sub(int x, int y){
//	return (x-y);
//}
//int Mul(int x, int y){
//	return (x*y);
//}
//int Div(int x, int y){
//	return (x/y);
//}
//int Xor(int x, int y){
//	return (x ^ y);
//}
//void menu(){
//	printf("*******************************************\n");
//	printf("******1.Add                 2.Sub**********\n");
//	printf("******3.Mul                 4.Div**********\n");
//	printf("******5.Xor                 0.Exit*********\n");
//	printf("*******************************************\n");
//
//}
////int main(){
////	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = arr;//p==arr 首元素地址
//	//print(p, sz);
//	//int n = 10;
//	//int* p = &n;
//	//int** pp = &p;//pp为一个二级指针
//	//print1(pp);
//	//int n = 10;
//	//int* p = &n;
//	//int** pp = &p;
//	////test(pp);
//	//test(&p);
//	//指针数组 在传参时 数组名代表指针（元素）的地址 相当于可以用二级指针接收
//	//函数指针
//	/*int a = 10;
//	int b*/ /*= 20;*/
//	//printf("%d ", Add(a, b));
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);//函数名即是函数的地址 &无所谓
//	//int (*p)(int, int) = Add;//函数指针的定义  函数指针指向函数
//	//构成函数的成分  函数返回值类型 函数名（函数形参类型）{}
//	//函数指针定义  函数返回值类型 （*指针名）（函数参数类型）=函数名；
//	//printf("%d ", Add(2, 3));
//	//printf("%d ", (p)(2, 3));//一样的结果  个人理解  函数名==指针名==函数地址 指针不需要解引用访问函数 *  指针名（实参）访问；
//
//	//void(*p)(char) = prinT;
//	//(*p)("hello bit！！！！");//注释一下 char* p="hdkjhjka"  p存放首个字符的地址  %s->地址 直到\0结束   字符指针存字符串首元素地址 字符数组存字符串地址
//	//(*  (void(*)())   0)()  0被强制转换为一个函数指针类型 该指针函数返回类型为void 参数为空 *（）找回函数 进行一次函数调用
//	//void(* signal(int, void(*)(int)) )(int) signal为一个函数 他的类型为 int 一个函数指针类型 指向函数参数为int 函数返回值为void  void（*）（int ）为signal的返回类型
//	/*void(*signal(int, void(*)(int)))(int)可以进行简化  相同部分  void（*）（int）
//		typedef void(*ful_t)(int)   在*号后 重命名
//		ful_t signal(int, fun_t); 函数申明*/
//
//	//time();打印时间函数
//
//	//typedef unsigned int uint 类型重新定义 
//
//	//int(*p[4])(int, int) = { Add, Jian, Mal, Div };//加减乘除计算器
//	//for (int i = 0;i<4; i++){
//	//
//	//	printf("%d\n", p[i](2, 3));//5 -1 6 0  函数指针直接访问 不需要使用*解引用  一次实现多个函数功能 利用函数指针数组
//	//
//	//}
//	/*char* my_strcpy(char* dest, const char* src);
//	typedef my_strcpy my
//	1.写一个函数指针pf 能够指向my_strcpy
//		char* (*pf)(char* , const char* ) = my_strcpy;
//	2.写一个函数指针数组 pfarr 能够存放4个mystrcpy函数的地址 参数规定类型即可 不需要把名写出来
//		char* (*pfarr[4])(char* , const char* ) = { my, my, my, my };*/
//
//	//2021-7-4编程
//
//	//计算器
////	int input = 0;
////	int x = 0;
////	int y = 0;//因为每次都要对数进行处理 所以可以定义在do{}while()之前  c语言中必须要先定义变量在进行使用！！！！
////	do{
////	//input x y 的值可以变化
////		menu();
////		printf("请选择:>");
////		scanf("%d", &input);
////		/*printf("请输入两个整数:>");
////		scanf("%d%d", &x, &y);*/
////		switch (input){
////
////		case 1:
////			printf("请输入两个整数:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Add(x, y));
////			break;
////		case 2:
////			printf("请输入两个整数:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Sub(x, y));
////			break;
////		case 3:
////			printf("请输入两个整数:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Mul(x, y));
////			break;
////		case 4:
////			printf("请输入两个整数:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Div(x, y));
////			break;
////		case 0:
////			printf("即将退出程序\n");
////			break;
////		default:
////			printf("选择错误,请重新选择\n");
////			break;
////
////
////		}
////
////
////
////
////
////
////
////	}while(input);
////	return 0;
////}
//int main(){
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*p[])(int, int)={ 0, Add, Sub, Mul, Div,Xor };//定义一个函数指针数组
//	do{
//		menu();
//		printf("请选择;>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 6){
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = p[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input==0){
//			printf("退出\n");
//		}
//		else{
//			printf("输入错误，请重新输入\n");
//		}
//
//	}while(input);
//	return 0;
//}
//计算器 利用下标 对函数指针数组 进行函数调用
void menu(){
	printf("******************************************************\n");
	printf("******1.Add                           2.Sub***********\n");
	printf("******3.Mul                           4.Div***********\n");
	printf("************       0.Exit               **************\n");
	printf("******************************************************\n");

	


}
int Add(int x, int y){
	return (x+y);
}
int Sub(int x, int y){
	return (x - y);
}
int Mul(int x, int y){
	return (x * y);
}
int Div(int x, int y){
	return (x /y);
}
void cale(int(*p)(int, int)){//通过传入一个函数的地址 利用函数指针接收（临时存放） 进行回调函数 执行对应功能
	int x = 0;
	int y = 0;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	printf("%d\n", p(x, y));
}
//int main(){
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*p[])(int, int) = { 0, Add, Sub, Mul, Div };
//	do{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4){
//			printf("请选择两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", p[input](x, y));
//		}
//		else if (input == 0){
//			printf("即将退出程序\n");
//		}
//		else{
//			printf("输入错误，请重新输入\n");
//
//		}
//	} while (input);
//	return 0;
//}
int main(){
	int input = 0;
	do{
		menu();
		printf("请选择;>");
		scanf("%d", &input);
		switch (input){
		case 1:
			cale(Add);
			break;
		case 2:
			cale(Sub);
			break;
		case 3:
			cale(Mul);
			break;
		case 4:
			cale(Div);
			break;
		case 0:
			printf("即将退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;

		}


	} while (input);
}