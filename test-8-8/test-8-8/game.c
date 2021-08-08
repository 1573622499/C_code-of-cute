#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void Init_board(char board[ROWS][COLS], int rows, int cols,char set){

	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){

			board[i][j] = set;
		}
	}


}
void Display_board(char board[ROWS][COLS], int row, int col){
	int i = 0;
	int j = 0;
	for (j = 0; j <= row; j++){
		printf("%d ",j);
	}
	printf("\n");
	for (i = 1; i <= row; i++){
		printf("%d ", i);
		for(j = 1; j <= col; j++){

			printf("%c ", board[i][j]);
		}
		printf("\n");
	}


}
void Set_board(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count=Easy_count; //十个雷
	while (count){
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;//细节
		}


	}
}
void Tip_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col){
	int x = 0;
	int y = 0;
	int win = 0;//无雷的个数
	while (win<row*col-10){//还有71个雷没有排

		printf("请选择下标:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col){
			if (mine[x][y] == '1'){//坐标合法？  可以排雷？
				printf("很遗憾，你被炸死了 排雷失败\n");
				Display_board(mine, ROW, COL);
				break;
			}
			else{//统计雷的个数
				//认真排雷
				show[x][y]=get_mine_count(mine, x, y)+'0';//提示排雷者 信息
				if (get_mine_count(mine, x, y) == 0){//mine[x][y]周围一个雷都没有 打印' ' 
					show[x - 1][y - 1] = ' ';
					show[x][y - 1] = ' ';
							show[x + 1][y - 1] = ' ';
						show[x + 1][y] = ' ';
						show[x + 1][y + 1] = ' ';
						show[x][y + 1] = ' ';
						show[x - 1][y + 1] = ' ';
						show[x - 1][y] = ' ';
				}
				Display_board(show,ROW,COL);
				win++;
			}


		}
		else{
			printf("输入下标错误，请重新输入\n");


		}
	}


	if (win == row*col - 10){//排查好71个雷->排雷成功
		printf("恭喜你，扫雷成功\n");
		Display_board(mine, ROW, COL);
	}



}
int get_mine_count(char mine[ROWS][COLS], int x, int y){
	//字符减字符等于数  如 '2'-'0'=2  2+'0'=2

	return mine[x - 1][y - 1]
		+ mine[x][y - 1]
		+ mine[x + 1][y - 1]
		+ mine[x + 1][y]
		+ mine[x + 1][y + 1]
		+ mine[x][y + 1]
		+ mine[x - 1][y + 1]
		+ mine[x - 1][y] + 8 * '0';//mine[x][y] 周围的数字加起来 即是雷的个数
	//注意：mine[x][y]周围是字符 需要+'0'






}
