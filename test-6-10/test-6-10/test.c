#define _CRT_SECURE_NO_WARNINGS 1//忽略警告
////////猜数字游戏
//////#include <stdio.h>
//////#include <time.h>
//////void menu(){
//////	printf("*******************************************************************\n");
//////	printf("************0.EXIT                     1.PLAY**********************\n");
//////	printf("*******************************************************************\n");
//////}
//////void game(){
//////	int guess = 0;
//////	int ret = rand() % 100 + 1;
//////	//ret = rand() % 100 + 1;
//////	printf("随机数已经生成,请猜数字\n");
//////	while (1){
//////		scanf("%d", &guess);
//////		if (guess > ret){
//////			printf("猜大了!\n");
//////
//////		}
//////		else if (guess < ret){
//////			printf("猜小了!\n");
//////
//////		}
//////		else{
//////			printf("恭喜你猜对了！且随机数为%d\n", ret);
//////			break;
//////		}
//////	}
//////}
//////int main(){
//////	int input = 0;
//////	srand((unsigned int)time(NULL));
//////	printf("欢迎来到猜数字游戏!\n");
//////	do{
//////		menu();
//////		printf("请选择:>");
//////		scanf("%d", &input);
//////		switch (input){
//////		case 0 :
//////			printf("即将退出游戏\n");
//////			break;
//////		case 1:
//////			game();
//////			break;
//////		default:
//////			printf("输入错误，请重新输入\n");
//////			break;
//////		}
//////	} while (input);
//////	return 0;
//////}
//////
//////n的阶乘 求和
//////#include <stdio.h>
//////int main(){
//////	int n = 0;
//////	int sum = 0;
//////	printf("请输入一个正数:>");
//////	scanf("%d", &n);
//////	for (int i = 1; i <= n; ++i){
//////		int ret = 1;
//////		for (int j = 1; j <= i; ++j){
//////			ret *= j;//计算n每一次变化阶乘的值
//////		}
//////		sum += ret;//累计求和
//////	}
//////	printf("%d的阶乘 和为%d\n", n, sum);
//////	return 0;
//////}
////#include <stdio.h>
////int SUM_sort(int n){
////	if (n == 1){
////		return 1;
////	}
////	else{
////		return n*SUM_sort(n - 1);//递归思想
////	}
////}
////int s_sort(int n){
////	int ret = 1;
////	for (int i = 1; i <= n; ++i){
////		ret *= i;
////	}
////	return ret;
////}
////int main(){
////	int n = 0;
////	printf("请输入一个整数:>");
////	scanf("%d", &n);
////	int s = SUM_sort(n);
////	int m = s_sort(n);
////	//printf("%d的阶乘为%d\n", n, s);
////	printf("%d的阶乘为%d\n", n, m);
////	return 0;
////}
////字符串拷贝 strcpy
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//#include <assert.h>
//
//
//
////void my_strcpy(char* dest, char* sour){
////	//1.
////	while (*sour != '\n'){
////		*dest = *sour;
////		dest++;
////		sour++;
////
////	}//循环结束的时候 *sour='\n'
////	*dest = *sour;
////
////}
////void my_strcpy(char* dest, char* sour){
////	while (*dest++ = *sour++){
////		;
////	}
////}
////void my_strcpy(char* dest, char* sour){
////	assert(dest != NULL);
////	assert(sour != NULL);
////	while (*dest++ = *sour++){
////		;
////	}
////}
////int main(){
////	char arr1[] = "***********";
////	char arr2[] = "bit";
////	//strcpy(arr1, arr2);
////	my_strcpy(arr1, arr2);
////	printf("%s\n", arr1);
////
////
////	return 0;
////}
//#include <assert.h>
//void my_strcpy(char* dest,char* sour){
//	assert(dest != NULL);
//	assert(sour != NULL);//指针之间的比较
//	while (*dest++=*sour++){
//		;
//	}
//
//}
//int main(){
//	//字符串交换 strcpy()
//	/*char arr1[] = "************";
//	char arr2[] = "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);*/
//
//
//
//	return 0;
//}
//strcpy strlen    替换 my_strcpy  my_strlen()
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

void my_strcpy1(char* dest, char* sour){
	while (*sour != '\0'){
		*dest = *sour;
		dest++;
		sour++;
	}
	*dest = *sour;
}
void my_strcpy2(char* dest,char* sour){
	while (*dest++ = *sour++){
		;
	}
}
void my_strcpy3(char* dest, const char* sour){//const 
	assert(dest != NULL);//断言
	assert(sour != NULL);//断言
	while (*dest++ = *sour++){
		;
	}
}
//strcpy 自定义函数最优形式
char* my_strcpy4(char* dest, const char* sour){
	char* ret = dest;
	assert(dest != NULL);
	assert(sour != NULL);
	while (*dest++ = *sour++)
	{
		;
	}
		return ret;
}
int my_strlen(const int* str){
	int count = 0;
	assert(str != NULL);
	while (*str != '\0'){
		count++;
		str++;
	}
	return count;
}
int main(){
	//char arr1[] = "***********";
	//char arr2[] = "bitbit";
	////my_strcpy1(arr1, arr2);
	////my_strcpy2(arr1, arr2);
	////my_strcpy3(arr1, arr2);
	//my_strcpy4(arr1, arr2);
	////printf("%s\n", arr1);
	//printf("%s\n", my_strcpy4(arr1, arr2));

	//strlen()函数
	/*char arr[] ="jldjaslcjkhdkashdila";
	int len = my_strlen(arr);
	printf("%d\n", len);*/
	//数据的存储
	//打印随机数
	//srand((unsigned int)time(NULL));
	//while (1){//生成随机数 技能已经学会
	//	int len = rand() % 100 + 1;
	//	printf("%d\n", len);
	//}











	return 0;
}
