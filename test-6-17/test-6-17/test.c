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
	printf("��ӭʹ��ATMȡ���\n");
	system("pause");
}
void Login()
{
	int i, act = 0;
	int select;
	char ID[20], pswd[20];
	printf("��ѡ���¼�û����ߴ����˻�:\n");
	printf("1.��¼�����˺�\n");
	printf("2.�����˻�\n");
	scanf("%d", &select);
	if (select == 1)
	{
		do
		{
			printf("�����������˺�:");
			scanf("%s", ID);
			printf("��������������:");
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
				printf("�������������˺Ż��������ϵͳ���Զ��رգ�\n");
				return;
			}
			if (pos == i)
				break;
		} while (1);
		printf("��¼�ɹ���\n");
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
		printf("*****   ��ѡ�����   *****\n");
		printf("1.ȡ��\n");
		printf("2.��ѯ���\n");
		printf("3.�޸�����\n");
		printf("4.ת��\n");
		printf("5.�˳�\n");
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
	printf("��������Ҫȡ��Ľ�");
	while (1)
	{

		scanf("%lf", &num);
		if (num <= user[pos].balance)
		{
			user[pos].balance -= num;
			printf("*****����ȡǮ*****\n");
			printf("���ѳɹ�ȡ��%.2lfԪ��\n", num);
			break;
		}
		else
		{
			Query();
			printf("�������㣬����������ȡ���\n");
		}
	}
}
void Query()
{
	printf("�������Ϊ��%.2lf\n", user[pos].balance);
}
void ChangePwd()
{
	char p[20];
	printf("�����������룺");
	scanf("%s", p);
	strcpy(user[pos].password, p);
	system("pause");
}
void Transfer()
{
	int post;
	double x;
	char a[20];
	printf("��������Ҫת�˵��û��˺ţ�");
	scanf("%s", a);
	for (int i = 0; i<N; i++)
	{
		if (strcmp(a, user[i].id) == 0)
		{
			post = i;
			break;
		}
	}
	printf("������ת�˽�");
	while (1)
	{
		scanf("%lf", &x);
		if (x <= user[pos].balance)
		{
			user[pos].balance -= x;
			user[post].balance += x;
			system("cls");
			printf("***����ת��***\n");
			printf("***���Ե�***\n");
			system("pause");
			printf("���ѳɹ�ת��%.2lfԪ��\n", x);
			break;
		}
		else
		{
			printf("�������㣬����������ת�˽�\n");
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
	printf("�˳��ɹ�!\n");
}
void Newuser()
{
	char affirm[20];
	printf("��������Ҫ�½����˺ţ�");
	scanf("%s", user[pos].id);
	printf("�������������룺");
	scanf("%s", user[pos].password);
	printf("��ȷ���������룺");
	while (1)
	{
		scanf("%s", affirm);
		if (strcmp(user[pos].password, affirm) == 0)
		{
			printf("��ϲ�����ɹ���");
			printf("��������Ҫ����Ľ�");
			scanf("%lf", &user[pos].balance);
			printf("*****   �����ĵȴ�   *****\n");
			getchar('\n');
			printf("��ϲ�������˻��ɹ�������%.2lfԪ\n", user[pos].balance);
			system("pause");
			break;
		}
		else
			printf("��������������������룺");
	}
}
