#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
struct message
{
	char id[20];
	char password[20];
	double balance;
}user[N];
FILE *fp;
int pos = 0;
int k = 0;
void Lnit();
void Welcome();
void Login();
void Display();
void Out();
void Query();
void ChangePwd();
void Transfer();
void Quit();
void Newuser();
void main()
{
	Lnit();
	Welcome();
	Login();
}
void Lnit()
{
	if ((fp = fopen("D:\\stu\\test.txt", "r")) == NULL)
	{
		printf("can not open this file\n");
		exit(0);
	}
	for (int i = 0; i<N; i++)
	{
		fscanf(fp, "%s %s %lf", user[i].id, user[i].password, &user[i].balance);

	}
	fclose(fp);
	printf("loading......");
	system("pause");
}

void Welcome()
{
	printf("欢迎使用ATM取款机\n");
	system("pause");
}
void Login()
{
	int i, act = 0;
	int select;
	char ID[20], pswd[20];
	printf("请选择登录用户或者创建账户:\n");
	printf("1.登录现有账号\n");
	printf("2.创建账户\n");
	scanf("%d", &select);
	if (select == 1)
	{
		do
		{
			printf("请输入您的账号:");
			scanf("%s", ID);
			printf("请输入您的密码:");
			scanf("%s", pswd);
			for (i = 0; i<N; i++)
			{
				if ((strcmp(ID, user[i].id) == 0) && (strcmp(pswd, user[i].password) == 0))
				{
					pos = i;
					break;
				}
			}
			if (++act>2)
			{
				printf("您已三次输入账号或密码错误，系统将自动关闭！\n");
				return;
			}
			if (pos == i)
				break;
		} while (1);
		printf("登录成功！\n");
		system("pause");
		switch (i)
		{
		case 1:{ Display(); break; }
		}
	}
	else if (select == 2)
	{
		for (i = 0; i<N; i++)
		{
			if (user[i].balance == 0)
			{
				pos = i;
				break;
			}
		}
		Newuser();
		Display();
	}
}
void Display()
{
	int j;
	while (1)
	{
		printf("*****   请选择服务   *****\n");
		printf("1.取款\n");
		printf("2.查询余额\n");
		printf("3.修改密码\n");
		printf("4.转账\n");
		printf("5.退出\n");
		scanf("%d", &j);
		switch (j)
		{
		case 1:{Out(); break; }
		case 2:{Query(); break; }
		case 3:{ChangePwd(); break; }
		case 4:{Transfer(); break; }
		case 5:{Quit(); k++; break; }
		}
		if (k != 0)
			break;
	}
}
void Out()
{
	double num;
	printf("请输入您要取款的金额：");
	while (1)
	{

		scanf("%lf", &num);
		if (num <= user[pos].balance)
		{
			user[pos].balance -= num;
			printf("*****正在取钱*****\n");
			printf("你已成功取款%.2lf元！\n", num);
			break;
		}
		else
		{
			Query();
			printf("您的余额不足，请重新输入取款金额：\n");
		}
	}
}
void Query()
{
	printf("您的余额为：%.2lf\n", user[pos].balance);
}
void ChangePwd()
{
	char p[20];
	printf("请输入新密码：");
	scanf("%s", p);
	strcpy(user[pos].password, p);
	system("pause");
}
void Transfer()
{
	int post;
	double x;
	char a[20];
	printf("请输入你要转账的用户账号：");
	scanf("%s", a);
	for (int i = 0; i<N; i++)
	{
		if (strcmp(a, user[i].id) == 0)
		{
			post = i;
			break;
		}
	}
	printf("请输入转账金额：");
	while (1)
	{
		scanf("%lf", &x);
		if (x <= user[pos].balance)
		{
			user[pos].balance -= x;
			user[post].balance += x;
			system("cls");
			printf("***正在转账***\n");
			printf("***请稍等***\n");
			system("pause");
			printf("你已成功转账%.2lf元！\n", x);
			break;
		}
		else
		{
			printf("您的余额不足，请重新输入转账金额：\n");
		}
	}
}

void  Quit()
{
	int k = 0;
	if ((fp = fopen("D:\\stu\\test.txt", "w")) == NULL)
	{
		printf("can not open this file\n");
		exit(0);
	}
	for (int i = 0; i<N; i++)
	{
		fprintf(fp, "%s\t%s\t%.2lf\n", user[i].id, user[i].password, user[i].balance);
	}
	printf("退出成功!\n");
}
void Newuser()
{
	char affirm[20];
	printf("请输入您要新建的账号：");
	scanf("%s", user[pos].id);
	printf("请输入您的密码：");
	scanf("%s", user[pos].password);
	printf("请确认您的密码：");
	while (1)
	{
		scanf("%s", affirm);
		if (strcmp(user[pos].password, affirm) == 0)
		{
			printf("恭喜创建成功！");
			printf("请输入您要存入的金额：");
			scanf("%lf", &user[pos].balance);
			printf("*****   请耐心等待   *****\n");
			getchar('\n');
			printf("恭喜您创建账户成功并存入%.2lf元\n", user[pos].balance);
			system("pause");
			break;
		}
		else
			printf("密码错误，请重新输入密码：");
	}
}
