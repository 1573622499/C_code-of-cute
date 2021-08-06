#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game(){
	printf("欢迎来到猜数字游戏，随机数已经生成，请猜数字\n");
	int guess = 0;
	int ret = rand() % 100 + 1;//生成1~100间的随机数
	while (1){


		scanf("%d", &guess);
		if (guess > ret){
			printf("猜大了\n");
		}
		else if (guess < ret){
			printf("猜小了\n");
		}
		else{
			printf("恭喜你猜对了！随机数为%d\n", ret);
			break;
		}
	}

}
void menu(){
	printf("*****************************************\n");
	printf("**********          0.Exit       ********\n");
	printf("**********          1.Play       ********\n");
	printf("*****************************************\n");
}
void test(){
	int input = 0;
	do{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input){

		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误,请重新输入\n");
			break;
		}

	} while (input);
}
int main(){
	//猜数字游戏--测试
	srand((unsigned int)time(NULL));
	test();
	return 0;
}

