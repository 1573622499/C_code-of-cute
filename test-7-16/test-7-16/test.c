#define _CRT_SECURE_NO_WARNINGS 1
//2021-7-16 C语言
//学习语言（编程）加学习系统 网络 Linux+系统编程+网络基础+网络编程
//初识C语言
//什么是C语言
//一门计算机语言 ->人与计算机交流的语言
//Such as ：java C C++
//语言的发展：二进制语言（仅含0 1）
//计算机——硬件 通电 电信号 正电/负电 1 0
//科学家以前写代码通过查二进制手册进行编程 
//100011001 -Add（助记符）【汇编语言】 ——执行加法
//B语言->C语言——高级语言 
//由低级逐渐走向高级
//其编译器：Gcc Msvc
//#include <stdio.h>//std-标准的  i-input  o-output 包含一个标准的输入输出函数 别人的东西需要打一个招呼
//int main(){//main主函数-程序的入口-main函数有且只有一个
////	//函数定义： 返回值+函数名（形参）{
//这里完成任务-写代码
//在频幕上输入hello world 
//函数=printf function-printf-打印函数
//
////}printf(库函数)-C语言本身提供给我们的函数 直接用
//	printf("hello world!\n");
//	return 0;
//}
//int - 整形（变量的类型）
//main 前面的int表示main函数调用（执行）返回一个整形值
//char - 字符类型
//char ch = 'A';//在内存中开辟一块一个字节大小的空间来存放‘A’
//printf("ch=%c\n", ch);//%c 打印字符
//%d(打印一个十进制的数) %p %lf %f(打印浮点型数字-小数)%x %o
//short int -短整型 
//sizeof()//计算变量类型的大小（在内存中存储）（里面的东西并不执行）-表达式 变量名 变量类型......
//sizeof(int) 4 <= sizeof(long) 4 8
//计算机中储存单位 
//最小的单位:bit（比特）
//	  byte基本单位（字节）一个字节的大小相当于八个字节-字节跳动（Byte Dance）软件：今日头条 tiktok 西瓜视频
//	  单位：bit：byte=8：1      kb mb gb tb pb 1024进制
//123  3*10^0+2*10^1+1*10^2 
//10001(B)  1 * 2 ^ 0 + 1 * 2 ^ 4 == 17(D)
//每个位置两种可能 2*n次方种可能
//生命周期与作用域
//全局变量 局部变量

//#include <stdio.h>
//int b = 290;//b为一个局部变量main{}之外  作用域（整个工程） 生命周期（整个程序） if要使用or应用其他源文件里的变量 必须用Extern+变量类型+变量名;  的方式
//int main(){//一般来说全局变量和局部变量的名字不应该相同（容易产生bug）  但是二者其实是可以相同的    在{}里使用局部变量而不是用全局变量
//	int a = 101;//这里的a为一个局部变量只能作用在{代码块} 生命周期（变量存在意义） 人的生命周期（由生到死）
//	/*printf("%d\n", a);*/
//	return 0;
//}
//
//
//#include <stdio.h>
//int Add(int x, int y){
////	return (x + y);
//}
//void print(int n){//形参
//	printf("sum=%d\n",n);//这里的sum 与主函数里的sum不同 可见 sum的作用域在{}作用周期 进{}出{}自动销毁
//}
//int main(){
//	//输入两个整数并且计算和的大小
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个整数:>");
//	scanf("%d%d", &num1, &num2);//&为取地值符   内存中的编号好似房间 通过（地址）&找到变量进行操作 
//	//c语言用法规定 变量必须先定义后使用
//	 //sum= num1 + num2;// = -> 赋值  == -> 等于
//	 //printf("sum=%d\n", sum);
//	sum = Add(num1, num2);
//	print(sum);//传入实参 ->利用一个函数进行打印（功能）
//	return 0;
////}
//#include <stdio.h>
//int Add(int x, int y){
//	return (x + y);
//}
//int Dub(int x, int y){
//	return (x - y);
//}
//int Mal(int x, int y){
//	return (x * y);
//}
//int Div(int x, int y){
//	return (x / y);
//}
//int main(){
//	//利用函数数组指针实现计算器
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数\n");
//	scanf("%d%d", &a, &b);
//	int(*p[4])(int, int) = { Add, Dub, Mal, Div };//函数指针数组   （函数返回值类型）（*p[]）(参数类型)={} *p表示为一个指针 优先级: []>>*
//	for (int i = 0; i < 4; i++){
//		printf("%d\n", p[i](a,b));
//	}
//	return 0;
//}

