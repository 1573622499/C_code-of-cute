#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//void menu(){
//	printf("*****************************************\n");
//	printf("********0.EXIT            1.PLAY*********\n");
//	printf("*****************************************\n");
//}
//void game(){
//	int ret = rand() % 100 + 1;//创建1~100的随机数
//	int guess = 0;
//	while (1){
//		printf("随机数已经生成，请猜数字:>");
//		scanf("%d", &guess);
//		if (ret > guess){
//			printf("猜小了！\n");
//		}
//		
//		else if (ret < guess){
//			printf("猜大了！\n");
//		}
//		else{
//			printf("恭喜你，猜对了！随机数为%d\n", ret);
//			break;//当猜对了的时候，break 退出循环
//		}
//		
//	
//	}
//
//}
//int count_binine(unsigned int s){//接受无符号数
//	int count = 0;
//	while (s){
//		if (s % 2 == 1){
//			count++;
//			s /= 2;//s=s/2
//		}
//	}
//	return count;
//}
////int main(){
////	/*for (int i = 0; i < 100; i++){
////		printf("%d ", i + 1);
////	}
////	system("pause");*/
////	//猜数字游戏实现
////	//时间戳 随机数的创建 srand((unsigned int )time(NULL));        srand((unsigned int)time(NULL));
////
////	//int input= 0;
////	//srand((unsigned int)time(NULL));//创建随机数
////	//do{
////	//	menu();
////	//	printf("请选择:>");
////	//	scanf("%d",&input);
////	//	switch (input){
////	//	case 0:
////	//	printf("即将退出游戏\n");
////	//		break;
////	//	case 1:
////	//		printf("欢迎来到猜数字游戏！\n");
////	//		game();
////	//		break;
////	//	default :
////	//		printf("输入错误，请重新输入\n");
////	//		break;
////	//	}
////
////
////
////
////
////
////	//}while(input);
////	//统计二进制位中含1的个数  补码内存储
////	int n = 0;
////	printf("请输入一个数：>");
////	scanf("%d", &n);
////	int count=count_binine(n);
////	printf("%d二进制中含有1的个数为%d\n", n, count);
////
////	return 0;
////} 
////
////int count_ll(int input){
////	int count = 0;
////	for (int i = 0; i < 32; i++){
////		if ((input >> i) & 1 == 1){
////			count++;
////		}
////	}
////	return count;
////}
////int count_lll(int n){
////	int count = 0;
////	while(n){
////		n=n&(n - 1);
////		count++;
////	}
////	return count;
////}
////int main(){
////	int input = 0;
////	printf("请输入一个数：>");
////	scanf("%d", &input);
////	int count = count_lll(input);
////	printf("%d的二进制数中含有1的个数为%d\n",input,count);
////}
////结构体数组应用
//struct stu{
//	char name[10];
//	int  id;
//	char nat[30];
//	int idnum[50];
//	int old;
//	char sex[3];
//	int number;
//
//};
//void input(struct stu s){
//	s = {"小王", 123456, "重庆市北碚区", "520131985", 16, "女", 123456487 };
//}
//void print(struct stu s){
//	printf("姓名：%s\n",s.name);
//	printf("学号：%d\n",s.id);
//	printf("籍贯：%s\n",s.nat);
//	printf("身份证号：%s\n",s.idnum);
//	printf("年龄：%d\n", s.old);
//	printf("性别：%s\n",s.sex); 
//	printf("电话号码：%d\n",s.number); 
//}
//int main(){
//	struct stu s;
//	input(s);//输入（a）
//	print(s);//打印(b)
//	search(s); //检索（c）
//	return 0;
////}//(d)  结构体 “.” 结构体变量.成员名  “->” 结构体指针->成员名
////struct stu{
////	int age;
////	char name[10];
////};
////int main(){
////	struct stu s;
////	s = { 18, "小王" };
////	printf("%d\n", s.age);
////	printf("%s\n", s.name);
////	return 0;
////}
//#include <stdio.h>
//typedef struct stu{
//	int id;
//	char name[10];
//}sss;
//int main(){
//sss a = { 1, "张三" };
//	printf("%d\n", a.id);
//	printf("%s\n", a.name);
//
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void menu(){
	printf("*****************************************\n");
	printf("***********0.EXIT             1.PLAY*****\n");
	printf("*****************************************\n");
}
void game(){
	int guess = 0;
	int ret = rand() % 100 + 1;
	printf("随机数已经为你生成，请输入你要猜的数:>");
	while (1){
		scanf("%d", &guess);
		if (guess > ret){
			printf("猜大了！\n");
		}
		else if (guess < ret){
			printf("猜小了！\n");
		}
		else{
			printf("恭喜你猜对了！这个数是%d\n", ret);
			break;

		}
	}
}
int main(){
	int input = 0;
	srand((unsigned int)time(NULL));
	printf("欢迎来到猜数字游戏！\n");
	do{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input){
		case 1:game(); break;
		case 0:printf("即将退出游戏！\n");
			break;
		default:printf("输入数字错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}