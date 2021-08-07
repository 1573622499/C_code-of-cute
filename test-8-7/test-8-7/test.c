//#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu(){
	printf("*****************************************************\n");
	printf("*****************       0.EXIT          *************\n");
	printf("*****************       1.PLAY          *************\n");
	printf("*****************************************************\n");


}
void game()
{
	char ret = 0;

	char board[ROW][COL] = { 0 };
	//初始化
	Init_board(board, ROW, COL);
	//打印棋盘
	Display_board(board, ROW, COL);
	while (1){
		//玩家走
		Play_Move(board, ROW, COL);
		Display_board(board, ROW, COL);
		//每走一步，判断输赢
		ret = Is_win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}

		Computer_Move(board, ROW, COL);
		Display_board(board, ROW, COL);
		//每走一步，判断输赢

		ret = Is_win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else if (ret == 'Q')
		printf("平局\n");

}



void test(){
	srand((unsigned int)time(NULL));
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
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);


}
int main(){
	test();
	return 0;
}



