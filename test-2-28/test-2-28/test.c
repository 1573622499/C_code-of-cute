#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu(){
	printf("######################################\n");
	printf("#########1.Play        0.Exit#########\n");
	printf("######################################\n");
}
void game(){
	//三子棋
	//创建数组存放走出的棋盘信息
	int ret = 0;
	char board[ROW][COL] = { 0 };//全部空格
	Initboard(board, ROW, COL);//初始化棋盘
	Displayboard(board,ROW, COL);
	while (1){
		//玩家下棋
		playmove(board, ROW, COL);
		Displayboard(board, ROW, COL);
//判断玩家是否赢
		ret = iswin(board,ROW,COL);
		if (ret != 'C'){
			break;
		}
		//电脑下棋
		computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
//判断电脑是否赢
		ret = iswin(board[ROW][COL],ROW,COL);
		if (ret != 'C'){//没有胜负就继续
			break;//相当于退出游戏继续游戏
		}

}
	if (ret == '*'){
		printf("玩家赢\n");
	}
	else if (ret == '#'){
		printf("电脑赢\n");
	}
	else{
		printf("平局\n");
	}

	void test(){
	int input = 0;
	srand((unsigned int)time(NULL);
	do{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
	} while (input);
}
int  main(){
	test();
	return 0;
}

