#define _CRT_SECURE_NO_WARNINGS 1
//函数：返回值 函数名 （形参）{}
//函数是个独立的子程序 完成相对独立的任务
//函数里面最好不要打印 应用返回值 return >> break[] >> *操作符的优先级、结和性不同
//函数申明：告诉编译器函数返回值类型是什么、函数名是什么、参数是什么 存不存在无关紧要 （如果函数定义在main()函数前面就不需要函数申明）
//函数定义：函数的实现 代码完善  一般放在一个源文件里面
//函数调用：函数名（实参）; 一般放在一个头文件里面 引对应的头文件 #include "xxxx.h"(引自己的头文件用“”)
//计算器分别实现  Add  Sub Mul Div 分别创建(.c / .h文件)
//改变->传址调用  素数（存在于奇数中） return只返回一次 闰年（is_leap_year()）
//送给自己一句话：代码敲烂，年薪百万
//二分查找注意事项：1、左 <= 右 2、mid = (left + right) / 2 中间下标改变（调整） 循环内 3、根据return 进行判断
//int arr[](传参的时候 接收 空间浪费大、数组名 首元素地址{ 除了sizeof() strlen() }) 利用指针 int* p
//函数嵌套使用 有机组合 比如说：printf("%d\n", strlen(abc));//printf()返回值为打印的字符个数
//函数套函数（另外的）
//链式访问：一个函数的返回值作为另一个函数的参数 printf("%d\n", printf("%d", printf("%d\n", 43)))  printf()返回值知识 43(两个字符)2(一个字符)1

//#include <stdio.h>
//int Fibonacci(int n){
//	if (n < 3)
//		return 1;
//	else
//		return Fibonacci (n-2)+ Fibonacci(n - 1);
//}
//int main(){
//	//利用递归 求第n个斐波那契数列    1 1 2 3 5 8 13 21 ...  
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//ret=Fibonacci(n);
//	printf("第%d个斐波那契数为%d\n", n,ret);
//	return 0;
//}
//利用递归求n的阶乘
//int Factor(int n){
//	if (n == 1)
//		return 1;
//	else
//		return n*Factor(n - 1);
//}
//int main(){
//	int n = 5;//求5的阶乘 5！=120
//	int ret = Factor(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//
//

