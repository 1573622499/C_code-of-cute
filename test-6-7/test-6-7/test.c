#define _CRT_SECURE_NO_WARNINGS 1
//求n的阶乘和
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int  ret = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++){
//		//ret = 1;//调整
//		for (int j = 1; j <= i; j++){
//			ret= ret*j;
//		}
//		sum += ret;
//	}
//	printf("%d的阶乘和为%d\n", n, sum);
//	return 0;
//}
//
//求n的阶乘
#include <stdio.h>
int main(){
	int sum = 0;
	int ret = 1;
	printf("请输入一个数：>");
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		ret=ret*i;//ret=ret*i
	}
	printf("%d的阶乘为%d\n", n, ret);
	return 0;
}