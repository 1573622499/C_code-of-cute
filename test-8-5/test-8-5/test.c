#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game(){
	//利用二维数组创棋盘
	char board[ROW][COL] = {0};
	//初始化棋盘
	IninBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);




}
void menu(){
	printf("*******************************************\n");
	printf("**********1.Play            0.Exit*********\n");
	printf("*******************************************\n");


}
void  test(){
	int input = 0;
	do{//构建菜单
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input){
		case 0:
			printf("即将退出游戏\n");
			break;
		case 1:
			//printf("三子棋游戏\n");
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

