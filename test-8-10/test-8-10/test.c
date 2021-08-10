#define _CRT_SECURE_NO_WARNINGS 1
//三子棋+操作符复习
#include "game.h"
void game(){
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化
	Init_board(board, ROW, COL);
	Display_board(board, ROW, COL);
	//开始游戏
	while (1){

		Player_Move(board, ROW, COL);
		Display_board(board, ROW, COL);
		//每走一步，判断一次
		ret = Is_win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		Computer_Move(board, ROW, COL);
		Display_board(board, ROW, COL);
		ret = Is_win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢\n");
	if (ret == '#')
		printf("电脑赢\n");
	if (ret == 'Q')
		printf("平局\n");



}

void menu(){
	printf("******************************************************\n");
	printf("************            0.EXIT           *************\n");
	printf("************            1.PLAY           *************\n");
	printf("******************************************************\n");

}

void test(){
	typedef unsigned int u_int;
	int input = 0;
	srand((u_int)time(NULL));
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
			printf("输入错误，重新输入\n");
			break;


		}
	} while (input);


}
//int main(){
//	test();
//	return 0;
//}
//
//
