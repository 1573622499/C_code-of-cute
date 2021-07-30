#define _CRT_SECURE_NO_WARNINGS 1
//n的阶乘
//#include <stdio.h>
//int main(){
//	int sum = 0;
//	int s = 1;
//	printf("请输入一个整数,计算它的阶乘：>");
//	scanf("%d", &sum);
//	for (int i = 1; i <= sum; i++){
//		s = s*i;
//	}
//	printf("%d的阶乘为：%d\n", sum, s);
//	return 0;
//}
//递归写法
#include <stdio.h>
int Product(int n){
	if (n == 1){
		return 1;
	}
	else {
		return n* Product(n -1);
	}
}
int main(){
	int n = 0;
	printf("请输入一个整数,计算它的阶乘：>");
	scanf("%d", &n);
	int sum = Product(n);
	printf("%d的阶乘为%d\n", n, sum);
	return 0;
}