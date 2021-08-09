#define _CRT_SECURE_NO_WARNINGS 1
//测试
#include "game.h"
void game(){
	char board[ROW][COL] = { 0 };
	//初始化
	Init_board(board, ROW,COL);
	//打印棋盘
	Display_board(board, ROW, COL);


}
void menu(){
	printf("**************************\n");
	printf("*****      0.EXIT     ****\n");
	printf("*****      1.Play     ****\n");
	printf("**************************\n");
}
void test(){
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input){
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}

	} while (input);

}
int main(){

	test();
	return 0;
}

