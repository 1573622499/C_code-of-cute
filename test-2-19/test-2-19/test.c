//#define _CRT_SECURE_NO_WARNINGS 1
////猜数字游戏(规定1~100)，代码实现。
////#include <stdio.h>
////#include <stdlib.h>
////#include <time.h>
////void menu(){
////	printf("############################\n");
////	printf("######1.play   0.exit#######\n");
////	printf("############################\n");
////}
////void game(){
////	int ret = 0;
////	int guess = 0;
////	ret = rand() % 100 + 1;
////	while (1){
////		printf("请猜数字:>");
////		scanf("%d", &guess);
////		if (guess > ret){
////			printf("猜大了！\n");
////		}
////		else if (guess < ret){
////			printf("猜小了\n");
////		}
////		else{
////			printf("恭喜你,猜对了！\n");
////			break;
////		}
////	}
////
////}
////
////int main(){
////	int input = 0;
////	srand((unsigned int)time(NULL));//创造时间戳
////	
////	do{
////		menu();
////		printf("请选择:>");
////		scanf("%d", &input);
////		switch (input){
////		case 1:
////			game();
////			break;
////		case 0:
////				printf("退出游戏\n");
////				break;
////			default :
////				printf("输入错误\n");
////		}
////		
////	} while (input);
////	return 0;
////}
////
////
////二分查找
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int h = 11;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while(left<=right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > h){
//			right = mid - 1;
//		}
//		else if (arr[mid] < h){
//			left = mid + 1;
//		}
//		else{
//			printf("找到了！ 下标：%d\n", mid);
//			break;
//		}
//
//	}
//	if (left>right){
//		printf("找不到！\n");
//	}
//	return 0;
//}