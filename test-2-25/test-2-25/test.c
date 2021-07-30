#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include "ADD.h"//引用对应头文件（自己创建）
//int main(){
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//
//1234—>1 2 3 4递归 % / 理解对应含义1234%10=4（个位） 1234/10(除了个位，剩下来的数)
//#include <stdio.h>
//void print(int n){
//	if (n > 9){
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main(){
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);//没有返回值
//	return 0;
//}
//求字符串的长度
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char arr[] = "abc";
//		int len=strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
// 函数实现
#include <stdio.h>
 //int my_strlen(char* p){//记得函数的返回值？
	//int count = 0;
	//while(*p != '\0'){//字符串以\0结束为标志
	//	count++;
	//	p++;
	//}
	/*return count;
}*/
//递归的写法
//int my_strlen(char* p){
//	if (*p != '\0')
//		return 1 + my_strlen(p + 1);
//	else
//		return 0;
//}
//int main(){
//	char arr[] = "abc";
//	int len = my_strlen(arr);//实参 数组对应的是首元素的地址 应该用指针变量来接收
//	printf("len=%d\n", len);
//	return 0;
//}
//n的阶乘
//#include <stdio.h>
//int FAC(int n){
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++){
//		
//		ret *= i;
//	}
//	return ret;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = FAC(n);
//	printf("ret=%d\n",ret);
//	return 0;
//}
//递归算法
#/*include <stdio.h>
FAC(int n){
	if (n > 1){
		return n*FAC(n - 1);
	}
	else
		return 1;
}
int main(){
	int n = 0;
	scanf("%d", &n);
	int ret = FAC(n);
	printf("ret=%d", ret);
	return 0;
}*/
//斐波那契数列  1 1 2 3 5 8 13 21 34 55
#include <stdio.h>
//int FIB(int n){//循环写法
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2){//重复n-2次
//		c = a + b;
//		a = b;
//		b = c;
//			n--;
//	}
//	return c;
//}
//
//递归写法
int FIB(int n){
	if (n > 2){
		return FIB(n - 1) + FIB(n - 2);
	}
	else return 1;
}
int main(){
	int n = 0;
	scanf("%d", &n);
	int ret = FIB(n);
	printf("ret=%d\n", ret);
	return 0;
}