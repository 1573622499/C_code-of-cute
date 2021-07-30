#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(){
	char ch1[]= "iloveyoulovelove";
	char ch2[] = "love";
	char* pch1 = ch1;
	char* pch2 = ch2;
	int count = 0;//计数器
	while (*pch1 != '\0'){
		if (*pch1 == 'l'){
			count++;
		}
		pch1++;
	}
	printf("次数：%d\n", count);

	return 0;
}

