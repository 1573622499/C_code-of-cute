#define _CRT_SECURE_NO_WARNINGS 1
//三子棋游戏
#include <stdio.h>
#include "game.h"
void menu(){
	printf("######################################\n");
	printf("#######1.Play              0.Exit#####\n");
	printf("######################################\n");
	
}
void game(){
	char ret = 0;
	char board[ROW][COL] = { 0 };
	INITboard(board,ROW,COL);
	Displayboard(board, ROW, COL);
	while (1){
		Playermove(board,ROW,COL);
		Displayboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断输赢
		ret=Iswin(board,ROW,COL);
		if (ret != 'C'){
			break;
		}
	}//一场游戏的进程
	if (ret == '*'){
		printf("玩家赢\n");
	}
	else if (ret == '#'){
		printf("电脑赢\n");
	}
	else{
		printf("平局\n");
	}
}
void test(){
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();//printf("三子棋\n");
			break;
		case 0:
			printf("即将退出游戏\n");
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


