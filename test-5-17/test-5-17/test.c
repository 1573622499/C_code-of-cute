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
	printf("                      ***************��ӭʹ��ATM***************\n");
	printf("                      *****************************************\n");
	printf("�������������ţ�����\n");
	int x;
	bankuser bankuser;
	bankuser.name = (char*)malloc(sizeof(50));
	printf("�����û�-1 ��½�û�-0\n");
	scanf("%d", &x);
	while (x == 1){
		FILE *p1 = fopen("information.txt", "w");
		printf("������������\n");
		scanf(" %s", bankuser.name);
		printf("�����뿨��\n");
		scanf("%d", &bankuser.id);
		fprintf(p1, "%d %s ", bankuser.id, bankuser.name);
		system("cls");
		printf("��Ŀ���Ϊ��%d\n", bankuser.id);
		printf("���������룺\n");
		do{
			scanf("%d", &bankuser.pwd);
			if (bankuser.pwd>999999)
				printf("������6λ��������\n");
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
		printf("�����뿨�ţ�\n");
		scanf("%d", &id);
		if (id == bankuser.id)
		{
			printf("���������룺\n");
			do{
				scanf("%d", &powrd);
				if (powrd != bankuser.pwd)
					printf("������� ����������\n");
			} while (powrd != bankuser.pwd);
			if (powrd == bankuser.pwd)
			{
				printf("��½�ɹ�\n");
				printf("**��ӭ����������**\n");
				printf("��ѡ����Ҫ�����ҵ��\n");
				printf("\t\t\t|-------------------------------------|\t\t\t\n");
				printf("\t\t\t|------------ȡ��------1--------------|\t\t\t\n");
				printf("\t\t\t|------------����------2--------------|\t\t\t\n");
				printf("\t\t\t|------------�˳�------3--------------|\t\t\t\n");
				printf("\t\t\t|-------------------------------------|\t\t\t\n");
			}
		}
		break;
	}
}

