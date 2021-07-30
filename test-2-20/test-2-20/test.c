#define _CRT_SECURE_NO_WARNINGS 1
//1~100含有9的数（打印出有具体几个）
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int count = 0;
//	for(i = 1; i <= 100; i++){
//		if (i % 10 == 9){//针对个位上的9
//			printf("%d ", i);
//			count++;
//		}
//		 if (i / 10 == 9){//针对十位的9
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n含有9的数有%d个\n",count);
//	return 0;
//}
//猜数字游戏
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void menu(){
//	printf("############################\n");
//	printf("####1.Play   0.Exit#########\n");
//	printf("############################\n");
//}
//void game(){
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1){
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("猜大了！\n");
//		}
//		else if (guess < ret){
//			printf("猜小了！\n");
//		}
//		else{
//			printf("恭喜你，猜对了！\n");
//		}
//	}
//}
//int main(){
//	srand((unsigned int)time(NULL));//时间戳
//	int input = 0;//选择输入数字，对应选择功能
//	do{
//		menu();//进入菜单
//		scanf("%d", &input);//取地址
//		switch (input){
//		case 1:
//			game();//进入游戏
//			break;
//		case 0:
//			printf("即将退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//
//	} while (input);//inout为1 or 大于1的整数 即可继续执行程序；如果input为0 立即推终止程序。
//	return 0;

//打印一个随机数
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main(){
//	srand((unsigned int)time(NULL));
//	int ret = 0;
//	ret = rand() % 100 + 1;
//		printf("随机数：%d\n", ret);
//	
//	return 0;
//}

//#include <stdio.h>
////#include <stdio.h>
////int main(){
////	int i = 0;
////	int flag = 1;
////	double sum = 0.0;
////	for (i = 1; i <= 100; i++){
////		sum +=flag* 1.0 / i;//至少要一个数为浮点数，除法所得到的结果才为浮点数！
////		flag = -flag;
////	}
////	printf("%lf\n", sum);
////	return 0;
////}//int main(){
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++){
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//
//}
//求十个数中最大的数！
#include <stdio.h>
int main(){
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 94554, 1065 };
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++){
		if (arr[i]>max){
			max = arr[i];//格外注意
		}

	}printf("最大值：%d\n", max);
	return 0;
}