#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//函数定义
void Init_board(char board[ROWS][COLS], int rows, int cols, char set){

	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){

			board[i][j] = set;
		}
	}


}

void Display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;//1~9
	for (j = 0; j <= col; j++){
		printf("%d ", j);

	}
	printf("\n");//自主换行
	for (i = 1; i <= row; i++){
		printf("%d ", i);
		for (j = 1; j <= col; j++){

			printf("%c ", board[i][j]);




		}
		printf("\n");



















	}


}
void Set_mine(char mine[ROWS][COLS], int row, int col){

	int x = 0;
	int y = 0;
	//设置十个雷
	int count = Easy_count;
	while (count){

		x = rand() % row;
		y = rand() % col;
		if (mine[x][y] == '0'){
			mine[x][y] = '1';
			count--;
		}

	}

}
int Get_count(char mine[ROWS][COLS], int x, int y){

	return mine[x - 1][y - 1]
		+ mine[x][y - 1]
		+ mine[x + 1][y - 1]
		+ mine[x + 1][y]
		+ mine[x + 1][y + 1]
		+ mine[x][y + 1]
		+ mine[x - 1][y + 1]
		+ mine[x - 1][y]-8*'0';
	//ASCII码值 字符 -> 数    字符-‘0’   数->字符  数+‘0’




}
void Tip_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col){

	int x = 0;
	int y = 0;
	int win = 0;
	printf("%d个雷已经埋好，请开始扫雷\n", Easy_count);
	while (win<row*col - Easy_count){
		printf("请选择排查雷的坐标:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col){//判断坐标合法性
			if (mine[x][y]=='1'){//判断雷
				printf("很遗憾，你被炸死了\n");
				Display_board(mine, ROW, COL);
				break;
			}
			else{//提示周围雷的个数   一共71个雷（row*col-Easy_count） 每次排一个雷 win+1
				 show[x][y]=Get_count(mine, x, y)+'0';//show[ROWS][COLS]显示雷的个数
				 Display_board(show, ROW, COL);
				 win++;


			}
		
		}
		else{
			printf("输入坐标不合法，请重新输入\n");
		}
	}
	if (win == row*col - Easy_count){

		printf("恭喜你，排雷成功\n");
		Display_board(mine, ROW, COL);
	}




}