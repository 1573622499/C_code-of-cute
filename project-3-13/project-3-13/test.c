#define _CRT_SECURE_NO_WARNINGS 1
//实现任意行菱形
#include <stdio.h>
int main(){
	int n = 0;
	int j = 0;
	int k = 0;
	scanf("%d", &n);
	for (j = 0; j < n; j++){
		if (j <= n / 2){
			for (k = 0; k < n / 2 - j; k++){
				printf(" ");
			}
			for (k = 0; k < 2 *j+ 1; k++){
				printf("*");
			}
		}
		else{
			for (k = 0; k < j - n / 2; k++){
				printf(" ");
			}
			for (k = 0; k <2*(n-j); k++){
				printf("*");

			}
		}
		printf("\n");
	}
	return 0;
}

