#define _CRT_SECURE_NO_WARNINGS 1
//
//
//n！
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++){
//		ret = ret*i;
//	}
//	printf("结果：%d\n", ret);
//	return 0;
//}
#include <stdio.h>
int main(){
	int ret = 1;
	int n = 0;
	int sum= 0;
	for (n= 1; n<= 10;n++){
		ret = ret*n;
		sum = sum + ret;
	}
	printf("结果：%d\n", sum);
	return 0;
}