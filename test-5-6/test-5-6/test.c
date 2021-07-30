#define _CRT_SECURE_NO_WARNINGS 1
//回顾 go over review
//#include <stdio.h>
//int isrun_sort(int n){
//	if ((n % 4 == 0) && (n % 100 != 0) || n % 400 == 0){
//		return 1;
//	}
//	else return 0;
//}
//int main(){
//	//闰年 打印1200~2000 之间的闰年 四年一润
//	int year = 0;
//	int count = 0;
//	for (year = 1200; year <= 2000; year++){
//		if (1 == isrun_sort(year)){
//			printf("%d ", year);
//			count++;
//		}
//		if (count%8==0){//每八个年份就换行
//			printf("\n");
//		}
//		
//	}
//	printf("\n");
//	printf("1200~2000之间的闰年年份有%d个\n", count);
//	return 0;
//}
//
//指针pointer
//计算字符串的长度
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
//	return end - start;//首位指针相减等于字符串的长度
//}
int main(){//1
	//char ch[] = "bitlll";//6
	////printf("该字符串的长度为%d\n", strlen(ch));
	///*char* p = ch;
	//int len = 0;
	//for (p = ch; *p != '\0'; p++){
	//	len++;
	//}
	//printf("该字符串的长度为%d\n", len);*/
	//int len = my_strsort(ch);
	//printf("该字符串的长度为%d\n", len);
	/*char *p = "zbc";
	char arr[] = "zbc";
	printf("%s\n", *p);
	printf("%s\n", arr);*/
	/*int a = 10;
	int* pa = &a;
	*pa = 520;
	printf("%d\n", *pa);
	printf("%d\n", a);*///函数调用 运算速度  
	//指针是一个变量，用来存放内存单元地址  一个单元对应一个字节
	//指针就是地址  指针变量的大小（sizeof）字节 32平台--4  64平台--8
	//指针类型  解引用访问字节大小  一一对应
	//指针类型决定指针的步长 地址的增加
	//int arr[10] = { 0 };
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++){
	//	printf("arr[%d]------------%p\n", i, &arr[i]);//数组的地址连续存放
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
	//int* pa;//野指针  未初始化地址  默认随机值
	//*p = 20;
	//printf("%d\n", *p);
	//int a;//局部变量未初始化 错误写法
	//int* pa = &a;
	//*pa = 30;
	//printf("%d\n", *pa);
	//指针越界  限度 区域 扩张
	//局部变量在函数中执行一次就会销毁
	/*int* test(){
		int a = 10;
		return &a;
	}
	int* p = test();
	*p = 20;
	printf("%d\n", *p);*/

	return 0;
}