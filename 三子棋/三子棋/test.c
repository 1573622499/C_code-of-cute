#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game(){
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化' '
	Init_Board(board, ROW, COL);
	//打印棋盘
	while (1){

		Display_Board(board, ROW, COL);
		//玩家先
		Player_Move(board, ROW, COL);
		Display_Board(board, ROW, COL);
		//判断输赢
		ret = Is_win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		Computer_Move(board, ROW, COL);
		Display_Board(board, ROW, COL);
		//判断输赢
		ret = Is_win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else if (ret=='Q')
		printf("平局\n");//Q

}
void menu(){
	printf("***************************************\n");
	printf("*******0.Exit               1.Play*****\n");
	printf("***************************************\n");

}
void test(){
	//生成随机数
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
		printf("请选择;>");
		scanf("%d", &input);
		switch (input){
		case 0:
			printf("即将退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误,请重新输入\n");
		}

	} while (input);


}
int main(){

	test();


	return 0;
}

