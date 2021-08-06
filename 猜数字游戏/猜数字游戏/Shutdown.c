#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int main(){
	char input[20] = { 0 };
	system("shutdown -s -t 60");//执行关机程序
	printf("您的电脑将在1分钟之内关机，如果输入“我是猪”，则停止关机\n");
	again:
	printf("请输入:>");
	scanf("%s", input);
	if (0 == strcmp(input, "我是猪")){
		system("shutdown -a");//取消关机
	}
	else
	{
		printf("输入信息错误，请重新输入，电脑即将关机\n");
		goto again;
	}
	return 0;
}
