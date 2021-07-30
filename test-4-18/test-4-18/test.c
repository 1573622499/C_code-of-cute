#define _CRT_SECURE_NO_WARNINGS 1
//指针：存放变量地址  通过它找到变量的内存单元 内存分为许多单元 一个单元大小为一个字节
//指针是个变量，存放内存单元的地址 in a word 指针即地址
//#include <stdio.h>
//int main(){
//	int a = 10;
//	int* pa=&a;
//	*pa = 20;
//	printf("%d\n", *pa);
//	return 0;
//}
////
//#include <stdio.h>
//int main(){
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(int *));//4
//	printf("%d\n", sizeof(double*));//4  指针大小只与平台有关  32平台对应4个字节 64平台对应8个字节
//	//那指针类型 与指针有什么关系？ 1、指针解引用操作的时候，指针类型影响访问空间   2、指针加+1 指针类型影响指针走的长度 （步长）
//
//	return 0;
//}
//例子
//#include <stdio.h>
//int main(){
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	//现象显示 变量存储在指针的位置与指针类型无关 并且相同
//	return 0;
////}
//#include <stdio.h>
//int main(){
//	int a = 0x112223344;//十六进制表示 两个十六进制表示八个二进制位=一个字节的大小 a刚好由四个字节存放
//	int* pa = &a;
//	*pa == 0;//int指针类型为四个字节  a中的全部值都可以变换成0
//	//char* pc=&a;char指针类型一个字节  a只能变换四分之一的值
//	//*pc=0;
//	指针类型决定了指针进行解引用操作的时候，能访问空间的大小 int* *p能访问四个字节  char* *p能访问一个字节 double* *p能访问八个字节
//
//	return 0;
//}
//指针加1
//#include <stdio.h>
//int main(){
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//指针类型影响指针加1的步长（地址）
//	return 0;
//}//1、int型
//#include <stdio.h>
//int main(){
//	int arr[10] = { 0 };
//	int* p = arr;//数组名表示数组的首元素地址
//	int i = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		//*p = 0;
//		//p++;//改变指针
//		*(p+i)=1;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////2、char*型
////#include <stdio.h>
////int main(){
//	int arr[10] = { 0 };
//	char* p = arr;//数组名表示数组的首元素地址
//	int i = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		//*p = 0;
//		//p++;//改变指针
//		*(p + i) = 1;
//		printf("%d ", arr[i]);//不能把数组所有元素变为1
//	}
//	return 0;
//}
//指针类型决定指针走一步走多远（步长）  int*p p+1->4  char*p p+1->1 double*p p+1->8 距离单位为字节
//野指针 三点
//#include <stdio.h>//1、标准：必须要对局部变量进行初始化 指针的初始化
//int main(){
//	int a;//局部变量不进行初始化，默认是随机值
//	int* p;//局部变量的指针变量，就被初始化随机值
//	*p = 20;//不知道哪一块地址赋值为20
//	printf("%d", a);
//	return 0;
//}
//2、指针的越界访问:指针指向的范围超过了数组的范围
////3、指针指向的空间释放 局部变量在函数执行后 将其所占的内存还给了操作系统
//#include <stdio.h>
//int* test(){//局部变量执行后就自动摧毁了
//	int a = 2;
//	return &a;
//}
//int main(){
//	int* p=test();
//	printf("%p\n", p);//随机地址  函数中局部变量的值发生改变
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}
//tip 如何避免使用野指针 1、指针初始化 2、小心指针越界 3、指针指向空间释放即使置NULL  4、指针使用之前检查有效性
//n的阶乘 函数实现
//#include <stdio.h>
//int Fac(int n){
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++){
//		ret *= i;
//	}
//	return ret;
//}
//int main(){//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d的阶乘为%d\n", n, ret);
//	return 0;
//}Fac()实行n的阶乘的函数
//递归思想  1、 n=1  return 1    2、n>1 return Fac(n-1)*n 
////实现
//#include <stdio.h>
//int Fac(int n){
//	if (n == 1){
//		return 1;
//	}
//	else{
//		return n*Fac(n - 1);//大事化小的思想
//	}
//}
//int main(){
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d的阶乘为%d\n", n, ret);
//	return 0;
//}
//求第n个斐波那契数(不考虑溢出)
//#include <stdio.h>//构思 1、第1 2个斐波那契数都为1  2.、从第三个数开始第n个斐波那契数等于第n-1个斐波那契数+第n-2个斐波那契数之和
//int Fib(int r){
//	if (r < 3){
//		return 1;
//	}
//	else{
//		return Fib(r - 1) + Fib(r - 2);
//	}
//}tdd——测试驱动开发
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("第%d个斐波那契数为%d\n", n, ret);
//	return 0;
//}
//int Fib(int n){
////汉诺塔问题  青蛙跳台阶 n个台阶 一次可以跳一个台阶  一次可以跳两个台阶  问要跳到第n个台阶 有多少种条法[]
//arr[] 数组里必须是常数表达式  初始化
//#include <stdio.h>
//#include <string.h>
//int main(){
//	//创建一个数组-存放整形-10；
//	int arr[10] = { 1, 2, 3 };//剩下元素默认初始化全部是0
//	char ch[5] = { 'a', 98 };//ascMa
//	char ch1[5] = "ab";//ok
//		char arr4[] = "abcdef";//\0作为字符串结束的标志
//	printf("%d\n", sizeof(arr4));//7   7*1（char）
//	//sizeof 计算空间所有元素的大小 
//	int c = strlen(arr4);
//	printf("%d\n",c);// \0之前 6  strlen 长度
//
//	int n = 0;	int arr[n];//erorr
//	return 0;
//}
//1、strlen和sizeof（）没有什么关联
/*2、strlen求的是字符串长度的-只能针对字符串求长度-库函数-使用要用头文件<string.h>
3、si*//*zeof()计算变量 数组 类型 的大小-单位是字节byte-操作符*/
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char ch1[] = { 'a', 'b', 'c' };
//	char ch2[] = "abc";
//	printf("%d\n", sizeof(ch1));//3
//	printf("%d\n",strlen(ch1));//3  随机值 不知道什么时候检测到\0? {'',''};strlen 针对字符串
//	printf("%d\n", sizeof(ch2));//4
//	printf("%d\n", strlen(ch2));//3
//	//数组下标从0开始
//	return 0;
////}
//#include <stdio.h>
//int main(){
//	int arr[10] = { 0 };;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		//arr[i] = i;
//		printf("%d ", arr[i] = i);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);//d
//	//将每一个数都输出
//	int g = strlen(arr);//6
//	int i = 0;
//	for (i = 0; i < g; i++){
//		判断条件 i<(int)strlen(arr)
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//实现 1234 1 2 3 4
#include <stdio.h>
void hhh(int k){
	if (k > 9){
		hhh(k / 10);
	}

		printf("%d ", k % 10);

}
int main(){
	int n = 0;
	scanf("%d", &n);
	hhh(n);
}