#define _CRT_SECURE_NO_WARNINGS 1


//
//
//int cheak_sy(){
//	int i = 1;
//	return *(char*)&i;//强制转换  指针类型  *  访问字节个数  +1 移动的步长
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
//	//确认大端 小端
//	int str=cheak_sy();
//	if (str == 1){
//		printf("小端\n");
//	}
//
//	else{
//		printf("大端\n");
//	}
//	return 0;
//}
//指针类型 区别  1.指针访问字节个数 char* 1  int* 4  2.指针加一移动的步长 char* 1  int* 4
//#include <stdio.h>
//int main(){

	//int arr[10] = { 0 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (int i = 0; i < sz; i++){
	//	arr[i] = i + 1;//重新赋值 1~10；
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

	//登录模拟
//#include <stdio.h>
//#include <string.h>
//	int main(){
//		char password[20];
//		int i = 0;
//		printf("欢迎来到登录系统\n");
//		for ( i = 0; i < 3; i++){
//			printf("请输入密码:>");
//			scanf("%s", password);
//			if (strcmp(password,"123456") == 0){//假如密码为“123456”
//				printf("登录成功\n");
//				break;
//			}
//			else{
//				printf("输入密码错误，请重新输入\n");
//			}
//
//		}
//		if (i == 3){
//			printf("三次机会已使用，即将退出登录系统\n");
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
//	int ret = rand() % 100 + 1;//自动生成1~100之间的随机数
//	int guess = 0;
//	printf("随机数已经生成，请猜数字\n");
//	while (1){
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("猜大了\n");
//		}
//		else if (guess < ret){
//			printf("猜小了\n");
//		}
//		else{
//			printf("恭喜你！猜对了 随机数为：%d", ret);
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
//	printf("欢迎来到猜数字游戏\n");
//	menu();
//	srand((unsigned int)time(NULL));//生成随机数
//	do{
//		//printf("欢迎来到猜数字游戏\n");
//		//menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input){
//		case 0:
//			printf("即将退出游戏\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("输出数字错误，请重新输入\n");
//			k++;
//			break;
//		}
//		if (k == 3){
//			printf("即将返回菜单页面\n");
//			menu();//允许输入错误三次  定义一个变量 然后运用if（）语句进行实现
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
//int pos = 0;//寻找用户				  
//int k = 0;	//退出程序				 
//void Lnit();//初始化			  
//void Welcome();	//显示登陆页面		
//void Login();//登录		  
//void Display();	//显示菜单项			 
//void Out();	//取款				 
//void Query();//查询余额				 
//void ChangePwd();//修改密码			 
//void Transfer();//转账			 
//void Quit();//退出	
//
//void Newuser();	//创建新用户
//void NewuserQu();
//void main()  //主函数
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
//	printf("----------欢迎使用ATM取款机-----------\n");
//	printf("--------------------------------------\n");
//	system("pause");
//}
//void Login()
//{
//	int i, R, act = 0;
//	int select;
//	char ID[20], pswd[20];
//	printf("请选择登录用户或者创建账户:\n");
//	printf("1.登录现有账号\n");
//	printf("2.创建账户\n");
//	scanf("%d", &select);
//	if (select == 1)
//	{
//		do
//		{
//			printf("请输入您的账号:");
//			scanf("%s", ID);
//			printf("请输入您的密码:");
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
//				printf("账号或密码错误一次!\n");
//			}
//
//			if (act == 2 && R != 0)
//
//			{
//				printf("账号或密码错误二次!\n");
//			}
//			if (act == 3 && R != 0)
//
//			{
//				printf("账号或密码错误三次，系统将自动返回!\n");
//				Welcome();
//				Login();
//			}
//			if (pos == i)
//				break;
//		} while (1);
//		printf("登录成功!\n");
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
//		printf("*****   请选择服务   *****\n");
//		printf("0.继续创建\n");
//		printf("1.取款\n");
//		printf("2.查询余额\n");
//		printf("3.修改密码\n");
//		printf("4.转账\n");
//		printf("5.退出\n");
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
//	printf("请输入您要取款的金额：");
//	while (1)
//	{
//
//		scanf("%lf", &num);
//		if (num <= user[pos].balance)
//		{
//			user[pos].balance -= num;
//			printf("*****正在取钱*****\n");
//			printf("你已成功取款%.2lf元!\n", num);
//			break;
//		}
//		else
//		{
//			Query();
//			printf("您的余额不足，请重新输入取款金额：\n");
//		}
//	}
//}
//void Query()
//{
//	printf("您的余额为：%.2lf\n", user[pos].balance);
//}
//void ChangePwd()
//{
//	char p[20];
//	printf("请输入新密码：");
//	scanf("%s", p);
//	strcpy(user[pos].password, p);
//	system("pause");
//}
//void Transfer()
//{
//	int post;
//	double x;
//	char a[20];
//	printf("请输入你要转账的用户账号：");
//	scanf("%s", a);
//	for (int i = 0; i<6; i++)
//	{
//		if (strcmp(a, user[i].id) == 0)
//		{
//			post = i;
//			break;
//		}
//	}
//	printf("请输入转账金额：");
//	while (1)
//	{
//		scanf("%lf", &x);
//		if (x <= user[pos].balance)
//		{
//			user[pos].balance -= x;
//			user[post].balance += x;
//			system("cls");
//			printf("***正在转账***\n");
//			printf("***请稍等***\n");
//			system("pause");
//			printf("你已成功转账%.2lf元！\n", x);
//			break;
//		}
//		else
//		{
//			printf("您的余额不足，请重新输入转账金额：\n");
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
//	printf("退出成功!请取出银行卡!\n");
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
//		printf("每次可以创建两个用户\n请输入第%d位用户\n", i + 1);
//		char affirm[20];
//		printf("请输入您要新建的账号：");
//		scanf("%s", user[i].id);
//		printf("请输入您的密码：");
//		scanf("%s", user[i].password);
//		printf("请确认您的密码：");
//		while (1)
//		{
//			scanf("%s", affirm);
//			if (strcmp(user[i].password, affirm) == 0)
//			{
//				printf("创建成功！");
//				printf("请输入您要存入的金额：");
//				scanf("%lf", &user[i].balance);
//				printf("*****   请耐心等待   *****\n");
//				getchar('\n');
//				printf("恭喜您创建账户成功并存入%.2lf元\n", user[i].balance);
//				system("pause");
//				break;
//			}
//			else
//				printf("密码错误，请重新输入密码：");
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







































