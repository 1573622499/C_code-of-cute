#define _CRT_SECURE_NO_WARNINGS 1
//��n�Ľ׳˺�
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int  ret = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++){
//		//ret = 1;//����
//		for (int j = 1; j <= i; j++){
//			ret= ret*j;
//		}
//		sum += ret;
//	}
//	printf("%d�Ľ׳˺�Ϊ%d\n", n, sum);
//	return 0;
//}
//
//��n�Ľ׳�
#include <stdio.h>
int main(){
	int sum = 0;
	int ret = 1;
	printf("������һ������>");
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		ret=ret*i;//ret=ret*i
	}
	printf("%d�Ľ׳�Ϊ%d\n", n, ret);
	return 0;
}