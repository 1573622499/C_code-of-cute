#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(){//整形提升
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	//计算一个数以二进制形式含1的个数
//
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++){
//		if (1 == ((a >>i) & 1)){//移动哪边就丢弃哪边
//			count++;
//		}
//	}
//	printf("%d以二进制位含有1的个数有%d个\n", a, count);
//	return 0;
//}
//猜数字游戏
#include <stdio.h>
void menu(){
	printf("*******************************************\n");
	printf("*************0.EXIT     1.PLAY*************\n");
	printf("*******************************************\n");
}
int main(){
	void game();
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input){
		case 0:printf("即将退出游戏\n");
			break;
		case 1:game();
		default: printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}
void game(){
	int guess = 0;
	int ret = rand() % 100 + 1;//1~100之间的随机数
while (1){
	printf("请猜数字\n");
	scanf("%d", &guess);
	if (guess > ret){
		printf("猜大了!\n");
	}
	else if (guess < ret){
		printf("猜小了！\n");
	}
	else{
		printf("猜对了！这个数为%d", ret);
		break;
	}

	}
}