#define _CRT_SECURE_NO_WARNINGS 1


//
//
//int cheak_sy(){
//	int i = 1;
//	return *(char*)&i;//ǿ��ת��  ָ������  *  �����ֽڸ���  +1 �ƶ��Ĳ���
//	/*if (*p == 1){
//		return 1;
//	}
//	else{
//		return 0;
//	}*/
//	/*return *p;*/
//
//}
//int main(){
//
//	//ȷ�ϴ�� С��
//	int str=cheak_sy();
//	if (str == 1){
//		printf("С��\n");
//	}
//
//	else{
//		printf("���\n");
//	}
//	return 0;
//}
//ָ������ ����  1.ָ������ֽڸ��� char* 1  int* 4  2.ָ���һ�ƶ��Ĳ��� char* 1  int* 4
//#include <stdio.h>
//int main(){

	//int arr[10] = { 0 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (int i = 0; i < sz; i++){
	//	arr[i] = i + 1;//���¸�ֵ 1~10��
	//}
	//char* p = (char*)arr;
	////int* p = arr;
	//while (*p!=10){
	//	printf("%d\n", *p++);
	//}

	//char a = -1;
	//signed char b = -1;
	//unsigned char c = -1;
	//printf("%d\n", a);//-1
	//printf("%d\n", b);//-1
	//printf("%d\n", c);//255
	//char a = -128;
	//char b = 128;//127 + 1  = 128
	//printf("%u\n", a);
	//printf("%u\n", b);

	//��¼ģ��
//#include <stdio.h>
//#include <string.h>
//	int main(){
//		char password[20];
//		int i = 0;
//		printf("��ӭ������¼ϵͳ\n");
//		for ( i = 0; i < 3; i++){
//			printf("����������:>");
//			scanf("%s", password);
//			if (strcmp(password,"123456") == 0){//��������Ϊ��123456��
//				printf("��¼�ɹ�\n");
//				break;
//			}
//			else{
//				printf("���������������������\n");
//			}
//
//		}
//		if (i == 3){
//			printf("���λ�����ʹ�ã������˳���¼ϵͳ\n");
//		}
//
//
//		return 0;
//	}
//
//
//#include <stdio.h>
//#include <time.h>
//void menu(){
//	printf("************************************************************\n");
//	printf("**********0.EXIT                        1.PLAY**************\n");
//	printf("************************************************************\n");
//}
//void game(){
//	int ret = rand() % 100 + 1;//�Զ�����1~100֮��������
//	int guess = 0;
//	printf("������Ѿ����ɣ��������\n");
//	while (1){
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("�´���\n");
//		}
//		else if (guess < ret){
//			printf("��С��\n");
//		}
//		else{
//			printf("��ϲ�㣡�¶��� �����Ϊ��%d", ret);
//			break;
//		}
//	}
//
//
//}
//
//int main(){
//	int input = 0;
//	int k = 0;
//	printf("��ӭ������������Ϸ\n");
//	menu();
//	srand((unsigned int)time(NULL));//���������
//	do{
//		//printf("��ӭ������������Ϸ\n");
//		//menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input){
//		case 0:
//			printf("�����˳���Ϸ\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("������ִ�������������\n");
//			k++;
//			break;
//		}
//		if (k == 3){
//			printf("�������ز˵�ҳ��\n");
//			menu();//���������������  ����һ������ Ȼ������if����������ʵ��
//		}
//	
//	
//	} while (input);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////#define N 6
//struct message
//{
//	char id[20];
//	char password[20];
//	double balance;
//}user[6];
//FILE *fp;
//int pos = 0;//Ѱ���û�				  
//int k = 0;	//�˳�����				 
//void Lnit();//��ʼ��			  
//void Welcome();	//��ʾ��½ҳ��		
//void Login();//��¼		  
//void Display();	//��ʾ�˵���			 
//void Out();	//ȡ��				 
//void Query();//��ѯ���				 
//void ChangePwd();//�޸�����			 
//void Transfer();//ת��			 
//void Quit();//�˳�	
//
//void Newuser();	//�������û�
//void NewuserQu();
//void main()  //������
//
//{
//	Lnit();
//	Welcome();
//	Login();
//}
//void Lnit()
//{
//	if ((fp = fopen("D:\\stu\\test.txt", "r")) == NULL)
//	{
//		printf("can not open this file\n");
//		exit(0);
//	}
//	for (int i = 0; i<6; i++)
//	{
//		fscanf(fp, "%s %s %lf", user[i].id, user[i].password, &user[i].balance);
//	}
//	fclose(fp);
//	printf("Loading......");
//	system("pause");
//}
//void Welcome()
//{
//	printf("--------------------------------------\n");
//	printf("----------��ӭʹ��ATMȡ���-----------\n");
//	printf("--------------------------------------\n");
//	system("pause");
//}
//void Login()
//{
//	int i, R, act = 0;
//	int select;
//	char ID[20], pswd[20];
//	printf("��ѡ���¼�û����ߴ����˻�:\n");
//	printf("1.��¼�����˺�\n");
//	printf("2.�����˻�\n");
//	scanf("%d", &select);
//	if (select == 1)
//	{
//		do
//		{
//			printf("�����������˺�:");
//			scanf("%s", ID);
//			printf("��������������:");
//			scanf("%s", pswd);
//			act++;
//			for (i = 0; i<6; i++)
//			{
//				if ((strcmp(ID, user[i].id) == 0) && (strcmp(pswd, user[i].password) == 0))
//				{
//					pos = i;
//					R = (strcmp(pswd, user[i].password) == 0) ? 0 : 1;
//					break;
//				}
//			}
//
//			if (act == 1 && R != 0)
//
//			{
//				printf("�˺Ż��������һ��!\n");
//			}
//
//			if (act == 2 && R != 0)
//
//			{
//				printf("�˺Ż�����������!\n");
//			}
//			if (act == 3 && R != 0)
//
//			{
//				printf("�˺Ż�����������Σ�ϵͳ���Զ�����!\n");
//				Welcome();
//				Login();
//			}
//			if (pos == i)
//				break;
//		} while (1);
//		printf("��¼�ɹ�!\n");
//		system("pause");
//		switch (0)
//		{
//		case 0:{Display(); break; }
//		}
//	}
//	else if (select == 2)
//	{
//		for (i = 0; i<6; i++)
//		{
//			if (user[i].balance == 0)
//			{
//				pos = i;
//				break;
//			}
//		}
//		NewuserQu();
//		Display();
//	}
//}
//void Display()
//{
//	int j;
//	while (1)
//	{
//		printf("*****   ��ѡ�����   *****\n");
//		printf("0.��������\n");
//		printf("1.ȡ��\n");
//		printf("2.��ѯ���\n");
//		printf("3.�޸�����\n");
//		printf("4.ת��\n");
//		printf("5.�˳�\n");
//		scanf("%d", &j);
//		switch (j)
//		{
//		case 0:{NewuserQu(); break; }
//		case 1:{Out(); break; }
//		case 2:{Query(); break; }
//		case 3:{ChangePwd(); break; }
//		case 4:{Transfer(); break; }
//		case 5:{Quit(); k++; break; }
//		}
//		if (k != 0)
//			break;
//	}
//}
//void Out()
//{
//	double num;
//	printf("��������Ҫȡ��Ľ�");
//	while (1)
//	{
//
//		scanf("%lf", &num);
//		if (num <= user[pos].balance)
//		{
//			user[pos].balance -= num;
//			printf("*****����ȡǮ*****\n");
//			printf("���ѳɹ�ȡ��%.2lfԪ!\n", num);
//			break;
//		}
//		else
//		{
//			Query();
//			printf("�������㣬����������ȡ���\n");
//		}
//	}
//}
//void Query()
//{
//	printf("�������Ϊ��%.2lf\n", user[pos].balance);
//}
//void ChangePwd()
//{
//	char p[20];
//	printf("�����������룺");
//	scanf("%s", p);
//	strcpy(user[pos].password, p);
//	system("pause");
//}
//void Transfer()
//{
//	int post;
//	double x;
//	char a[20];
//	printf("��������Ҫת�˵��û��˺ţ�");
//	scanf("%s", a);
//	for (int i = 0; i<6; i++)
//	{
//		if (strcmp(a, user[i].id) == 0)
//		{
//			post = i;
//			break;
//		}
//	}
//	printf("������ת�˽�");
//	while (1)
//	{
//		scanf("%lf", &x);
//		if (x <= user[pos].balance)
//		{
//			user[pos].balance -= x;
//			user[post].balance += x;
//			system("cls");
//			printf("***����ת��***\n");
//			printf("***���Ե�***\n");
//			system("pause");
//			printf("���ѳɹ�ת��%.2lfԪ��\n", x);
//			break;
//		}
//		else
//		{
//			printf("�������㣬����������ת�˽�\n");
//		}
//	}
//}
//
//void  Quit()
//{
//	int k = 0;
//	if ((fp = fopen("D:\\stu\\test.txt", "w")) == NULL)
//	{
//		printf("can not open this file\n");
//		exit(0);
//	}
//	for (int i = 0; i<6; i++)
//	{
//		fprintf(fp, "%s\t%s\t%.2lf\n", user[i].id, user[i].password, user[i].balance);
//	}
//	printf("�˳��ɹ�!��ȡ�����п�!\n");
//}
//void NewuserQu()
//{
//	if ((fp = fopen("D:\\stu\\test.txt", "w")) == NULL)
//	{
//		printf("can not open this file\n");
//		exit(0);
//	}
//	for (int i = 0; i<2; i++)
//	{
//		printf("ÿ�ο��Դ��������û�\n�������%dλ�û�\n", i + 1);
//		char affirm[20];
//		printf("��������Ҫ�½����˺ţ�");
//		scanf("%s", user[i].id);
//		printf("�������������룺");
//		scanf("%s", user[i].password);
//		printf("��ȷ���������룺");
//		while (1)
//		{
//			scanf("%s", affirm);
//			if (strcmp(user[i].password, affirm) == 0)
//			{
//				printf("�����ɹ���");
//				printf("��������Ҫ����Ľ�");
//				scanf("%lf", &user[i].balance);
//				printf("*****   �����ĵȴ�   *****\n");
//				getchar('\n');
//				printf("��ϲ�������˻��ɹ�������%.2lfԪ\n", user[i].balance);
//				system("pause");
//				break;
//			}
//			else
//				printf("��������������������룺");
//		}
//
//
//		fprintf(fp, "\n%s\t%s\t%.2lf\n", user[i].id, user[i].password, user[i].balance);
//	}
//}
//
//
//
//
//
//
//
//
//
//







































