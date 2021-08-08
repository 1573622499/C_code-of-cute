#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game(){
	//扫雷游戏
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘  mine-'0'   show-'*'
	Init_board(mine, ROWS, COLS,'0');
	Init_board(show, ROWS, COLS,'*');
	//打印棋盘
	//Display_board(mine, ROW, COL);
	Display_board(show, ROW, COL);
	//设置雷
	Set_board(mine, ROW, COL);//'0'---'1'
	//提示雷
	//Display_board(mine, ROW, COL);显示雷的位置
	//递归展开
	//mine[x][y] 周围都没有雷 全部展开
	Tip_mine(mine, show, ROW, COL);
	






}
void menu(){
	printf("***********************************************\n");
	printf("***************        0.EXIT        **********\n");
	printf("***************        1.PLAY        **********\n");
	printf("***********************************************\n");


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
			printf("选择错误，重新选择\n");
			break;

		}
	} while (input);

}
int main(){
	test();
	return 0;
}

