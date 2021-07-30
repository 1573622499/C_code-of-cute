#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include "add.h"
//int main(){
//	int a = 10;
//	int b = 30;
//	int sum=add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//й╣ож1234->1 2 3 4
#include <stdio.h>
void printf(int n){
	if (n > 9){
		printf(n / 10);
	}
	printf("%d ", n % 10);
}
int main(){
	unsigned int num = 0;
	scanf("%d", &num);
	printf(num);
	return 0;
}
