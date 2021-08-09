#define _CRT_SECURE_NO_WARNINGS 1
//扫雷
#include "game.h"

void game(){
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化
	Init_board(mine, ROWS, COLS, '0');
	Init_board(show, ROWS, COLS, '*');
	//打印棋盘
	Display_board(show, ROW, COL);
	//Display_board(mine, ROW, COL);  打印结果 雷的位置
	//设置雷
	Set_mine(mine, ROW, COL);
//提示雷
	Tip_mine(mine, show, ROW, COL);



}

void menu(){

	printf("*****************************************\n");
	printf("*************      0.EXIT      **********\n");
	printf("*************      1.PLAY      **********\n");
	printf("*****************************************\n");


}

void test(){
	int input = 0;
	srand((unsigned int)time(NULL));
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
			printf("输入错误,重新输入\n");
			break;

		}

	} while (input);

}
int main(){
	test();
	return 0;
}

