#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct bankuser{
	char *name;
	int id;
	int pwd;
	int money;
};
void main(){
	system("color f4");
	printf("                      *****************************************\n");
	printf("                      ***************欢迎使用ATM***************\n");
	printf("                      *****************************************\n");
	printf("输入姓名、卡号，密码\n");
	int x;
	bankuser bankuser;
	bankuser.name = (char*)malloc(sizeof(50));
	printf("创建用户-1 登陆用户-0\n");
	scanf("%d", &x);
	while (x == 1){
		FILE *p1 = fopen("information.txt", "w");
		printf("请输入姓名：\n");
		scanf(" %s", bankuser.name);
		printf("请输入卡号\n");
		scanf("%d", &bankuser.id);
		fprintf(p1, "%d %s ", bankuser.id, bankuser.name);
		system("cls");
		printf("你的卡号为：%d\n", bankuser.id);
		printf("请设置密码：\n");
		do{
			scanf("%d", &bankuser.pwd);
			if (bankuser.pwd>999999)
				printf("请输入6位数的密码\n");
		} while (bankuser.pwd>999999);
		fprintf(p1, "%d", bankuser.pwd);
		fclose(p1);
		system("cls");
		break;
	}
	while (x == 0){
		FILE *p2 = fopen("information.txt", "r");
		fscanf(p2, "%d %s %d", &bankuser.id, bankuser.name, &bankuser.pwd);

		int powrd;
		int id;
		printf("请输入卡号：\n");
		scanf("%d", &id);
		if (id == bankuser.id)
		{
			printf("请输入密码：\n");
			do{
				scanf("%d", &powrd);
				if (powrd != bankuser.pwd)
					printf("密码错误 请重新输入\n");
			} while (powrd != bankuser.pwd);
			if (powrd == bankuser.pwd)
			{
				printf("登陆成功\n");
				printf("**欢迎来到本银行**\n");
				printf("请选择你要办理的业务\n");
				printf("\t\t\t|-------------------------------------|\t\t\t\n");
				printf("\t\t\t|------------取款------1--------------|\t\t\t\n");
				printf("\t\t\t|------------存入------2--------------|\t\t\t\n");
				printf("\t\t\t|------------退出------3--------------|\t\t\t\n");
				printf("\t\t\t|-------------------------------------|\t\t\t\n");
			}
		}
		break;
	}
}

