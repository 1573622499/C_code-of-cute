#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//测试游戏
void game(){
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//开始下棋
	//玩家走
	while (1){
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢  每走一步就要判断输赢
		// 通过ret返回字符判定 玩家赢‘*’  电脑赢‘#’  平局‘Q’  继续‘C’
		ret = is_Win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = is_Win(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");

	


}
void menu(){
	printf("**********************************************\n");
	printf("*********0.Exit                 1.Play********\n");
	printf("**********************************************\n");

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
			printf("输入错误，请重新输入\n");
			break;
		}

	} while(input);

}
int main(){
	test();

	return 0;
}

