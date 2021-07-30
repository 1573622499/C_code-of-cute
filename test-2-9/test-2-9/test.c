#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(){
	char password[20] = { 0 };
	int ch = 0;
		int ret = 0;
	printf("请输入密码:>");
	scanf("%s", password);
	printf("请确认密码(Y/N):>");
	while ((ch = getchar()) != '\n'){
		;
	}
	ret = getchar();
	if (ret == 'Y'){
		printf("确定成功\n");
	}
	else {
		printf("确认失败\n");
	}
	return 0;
}
