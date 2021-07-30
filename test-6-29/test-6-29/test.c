#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//定义函数
int Add(int x,int y){
	int z = 0;
	z = x + y;
	return z;
}
void Man(char* str){//char p="kdhkahd";  p存放的是首个字符串的地址 打印 直到识别'\0'
	printf("%s\n", str);//打印字符串是用地址(指针)
}
int main(){

	//char arr[1000];//char   -128~127 范围
	//for (int j = 0; j < 1000; j++){
	//	arr[j] = -1 - j;
	//}
	//printf("%d\n", strlen(arr));//计算字符串长度 ‘\0’作为结束标志 255
	//printf("%d\n", arr[255]);//0
	//函数指针
	/*int a = 20;
	int b = 10;
	int sum = Add(a, b);*/
	//printf("%d\n", sum);
	//定义函数指针
	//printf("%p\n", Add);
	//printf("%p\n", &Add);//函数存在地址      打印函数地址 &函数名==函数名
	//int(*p)(int, int) = Add;
	//printf("%d\n", (*p)(2, 3));//5
	//printf("%d\n", (*p)(85, 123));//208
	void (*p)(char*) = Man;
	(*p)("abcdef");




	return 0;
}

