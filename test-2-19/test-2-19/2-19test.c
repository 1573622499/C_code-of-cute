//#define _CRT_SECURE_NO_WARNINGS 1
////猜数字游戏
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void menu(){
//	printf("##############################\n");
//	printf("######1.Play   0.Exit#########\n");
//	printf("##############################\n");
//}
//void game(){
//	int ret;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1){
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("猜大了\n");
//		}
//		else if (guess < ret){
//			printf("猜小了！\n");
//		}
//		else{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//int main(){
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			game();
//			break;
//		case 0:
//				printf("即将退出游戏\n");
//				break;
//			default:
//				printf("输入错误，请重新输入\n");//这些break是switch里的。break直接退出分支语句
//					break;
//
//		}
//
//	} while (input);
//	return 0;
//}
////九九乘法表
//#include <stdio.h>
//int main(){
//	int i = 0;//i控制行
//	for (i = 1; i <= 9; i++){
//		int j = 0;
//		for (j = 1; j <= i; j++){//j控制列
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");//必须换行
//
//	}
//	return 0;
//}
//
//
#include <stdio.h>
int main(){
	int i = 0;
	for (i = 1; i <= 6; i++){//i控制行
		int j = 0;
		for (j = 1; j <= 4; j++){//控制列
			printf("*** ");
		}
		printf("\n");
	}
	return 0;
}