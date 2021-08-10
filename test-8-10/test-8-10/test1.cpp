#define _CRT_SECURE_NO_WARNINGS 1
//操作符复习
#include <stdio.h>
void test1(int arr[]){
	printf("&d\n", sizeof(arr));//4
}
void test2(char ch[]){
	printf("%d\n", sizeof(ch));//4
}
struct stu{
	char name[20];
	short age;

	//创建结构体类型
};
//int main(){
//	int a = 0;
//	//~ 按位取反
//	//11111111111
//	printf("%d\n", ~a);//对补码进行改变
//	return 0;
//}
//11--15
int main(){
	//int a = 11;
	////1011   1111
	//int b = a | (1 << 2);
	//printf("%d\n", b);

	//int a = 15;
	////1111   1011    
	//int b = a&~(1 << 2);
	//printf("%d\n", b);
	//去掉数组名 即数组的类型
	//sizeof(不进行表达式的结果) 计算变量名/（变量）数据类型
	//int a = 0;
	//short b = 0;
	//printf("%d\n", sizeof(b = a + 5));//2
	//printf("%d\n", a);//0

	//int arr[10] = { 0 };
	//char ch[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40
	//printf("%d\n", sizeof(ch));//10
	//test1(arr);
	//test2(ch);
	//&& 遇到假 后面的表达式都不执行   ||遇到真 后面的表达式都不执行
	//条件表达式 三目操作符
	/*int a = 0;
	int b = 0;
	if (a > 5)
		b = 3;
	else
		b = -3;*/
	//b=(a>5 3:-3);
	//较大值：max=(a>b a:b;)
	//逗号表达式
	//从左往右开始执行  最终的结果为最后一个表达式为主  之前的表达式都要执行（有效）
	//调用函数的时候 （） 为函数调用符  []（下标引用操作符） 操作数：数组名+[数]

	struct stu s1 = { "张三", 16 };//使用一个结构体类型 创建一个s1的学生对象 并且初始化
	printf("%d\n", s1.age);
	printf("%s\n", s1.name);
	struct stu* p = &s1;
	printf("%s\n", p->name);
	printf("%d\n", p->age);
	//结构体变量.成员名
	//结构体指针->成员名










}

