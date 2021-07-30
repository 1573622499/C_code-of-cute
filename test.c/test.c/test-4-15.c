#define _CRT_SECURE_NO_WARNINGS 1
//二分查找
//如果一个有序的数组中查找具体的某个数
//如果找到了返回，这个数的下标，找不到的返回
//
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int k = 7;//找到了
//	int k = 11;//找不到
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right){
//		int mid = (right + left) / 2;
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			printf("找到了！下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right){
//		printf("不好意思，没有找到这个数！\n");
//	}
//	return 0;
//}
//利用函数求 加上二分法
//#include <stdio.h>//本质上arr是一个指针
//int bin_search(int arr[], int k, int sz){//类型加变量名
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right){
//		int mid=(left + right) / 2;
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;//没有找到该数时返回的值 再用if语句进行判断
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = bin_search(arr, k,sz);
//	if (ret ==-1){
//		printf("找不到指定的数字\n");
//	}
//	else{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//#include <stdio.h>//实现num+1；每调用一次
//void  ADD(int* pnum){
//	return (*pnum)++;//必须要用（）括起 不然有歧义
//}
//int main(){
//	int num = 0;
//	ADD(&num);
//	printf("num=%d\n", num);//1
//	ADD(&num);
//	printf("num=%d\n", num);//2
//	ADD(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}
//练习 ：1、函数实现 判断素数 2、判断闰年 3、整型有序数组二分查找 4、每调用函数num+1;
//函数嵌套使用 函数间的有机结合
//#include <stdio.h>//调用一个函数就ok啊 ??????
//void new1(){
//	printf("hehhe\n");
//}
//void new2(){
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		new1();
//	}
//}
//int main(){
//	new2();
//	return 0;
//}
//链式访问
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char arr[20] = "hello";//长度为5 字节为6
//	int ret = strlen(arr);
//	printf("arr的长度有%d\n", ret);
//	printf("%d\n", strlen("ahkdhkdh"));
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	//printf("%d", 1);//1
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}
//#include <stdio.h>
//#include "Add.h"
//int main(){
//	//int Add(int x, int y);//函数申明
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//函数调用
//	printf("sum=%d\n", sum);
//	return 0;
//}
////int Add(int x, int y){//函数定义
////	int z = 0;
////	z = x + y;
////	return z;
////}
//创建计算器 加法add.c add.h  减法sub.c sub.h  乘法mul.c mul.h  除法div.c div.h
//函数递归 定义：程序调用自身的编程技巧称为递归（recursion）。递归作为一种算法在程序设计语言应用。一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法，它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解，递归策略只需要少量的程序就可以描述出解题过程需要的多次重复计算，大大地减少了代码量。递归主要思考方式在于：把大事化小
//递归的两个必要条件    1、存在限制条件，递归便不再继续  2、每次递归调用之后越来越接近限制条件 递归常见的错误：栈溢出
//1234  1 2 3 4
//例如
//#include <stdio.h>
//int main(){
//	printf("hehe\n");//递归  函数套函数
//	main();//一直调用 栈溢出
//	return 0;
//}
#include <stdio.h>
void print(int n){
	if (n > 9){
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main(){
	unsigned int n = 0;
	scanf("%d", &n);
	//递归
	print(n);
	return 0;//%取余数  /扔掉后面 向左移动
}