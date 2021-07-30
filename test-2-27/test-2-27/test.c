#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main(){
//	int ret = 9;
//	int arr5[ret] = { 0 };//此处的ret不是常量表达式
//	int arr1[10] = { 0 };
//	char arr2[] = "abc";//""确定\0 {}这种不能确定\0的位置
//	char arr3[] = { 'a', 'b' };
//	printf("%d\n", sizeof(arr2) / sizeof(arr2[0]));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", sizeof(arr3) / sizeof(arr3[0]));
//	printf("%d\n", strlen(arr3));//未知后面的\0;
//	
//		return 0;
//}
//int main(){
//	char arr1[] = "abcdef";
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//int len=strlen(arr1);
//	for (i = 0; i < sz; i++){//i<(int)strlen(arr1)这样也ok   i<len;
//		printf("%c ", arr1[i]);//打印数组中的元素
//	}
//}
//
//打印1 2 3 4 5 6 7 8 9 0
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//回顾猜数字游戏
//#include <time.h>
//void menu(){
//	printf("######################################\n");
//	printf("#######1.Play        0.Exit###########\n");
//	printf("######################################\n");
//}
//void game(){
//	int guess = 0;
//	int ret = 0;
//	ret = rand() % 100 + 1;
//	while (1){
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("猜大了\n");
//		}
//		else if (guess < ret){
//			printf("猜小了\n");
//		}
//		else
//			printf("恭喜你，猜对了！\n");
//	}
//}
//int main(){
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default :
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < len; i++){
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf(" &arr[%d]=%p\n",i, &arr[i]);//在一个数组中，各元素地址有序排列,连续.
//	}
//	return 0;
//}
//int main(){
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++){//行
//		int j = 0;
//		for (j = 0; j < 4; j++){//列
//			//printf("%d ", arr[i][j]);
//			printf(" &arr[%d][%d]=%p\n",i,j ,&arr[i][j]);//二维数组照样连续存放
//		}
//		//printf("\n");
//	}
//	return 0;
//}
//冒泡排序 例如9 8 7 6 5 4 3 2 1->1,2,3,4,5,6,7,8,9  代码实现 10个元素 9趟 比较8对
//
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	printf("%d\n", arr[0]);//此例说明arr 代表首元素地址。除了sizeof(arr)数组整个元素的空间 以及strlen(arr)关注于字符串长度。&arr表示取的整个数组的地址
//	printf("%d\n", arr[0] + 1);
//	printf("%d\n", *arr + 1);
//	printf("%p\n", &arr);//&arr取得的地址为整个数组的地址
//	printf("%p\n", &arr + 1);
//	return 0;//break出现在switch 以及for循环里面
//
//}
//三子棋
#include "game.h"
void menu(){
	printf("***************************\n");
	printf("*******1.Play     0.Exit***\n");
	printf("***************************\n");
}

void test(){
	int input=0
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
		default :
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}
int main(){
	test();
	return;
}