#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main(){
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++){
//		for (j = 0; j < 4; j++){
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++){
//		for (j = 0; j < 4; j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//0~N之间的数 寻找缺失的数 0~9 假如少5
//int XOR_Search(int* p,int sz){
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	for ( i = 0; i <sz+1 ; i++){
//		x ^= i;//x与0~N的数异或
//
//	}
//	for (j = 0; j < sz; j++){
//		x ^= p[j];//x和arr数组的每一个元素异或
//	}
//	return x;
//
//}
//int main(){
//	int arr[] = { 0,1,2,9,7,8,4,3,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//寻找缺失的数
//	int need = XOR_Search(arr,sz);
//	printf("缺少的数为%d\n", need);
////	return 0;
//}
//冒泡排序
//void Bbu_sort(int arr[], int sz){
//	//1、确定躺数 十个数 很明显九趟
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++){
//		//确定比较次数 每搬运一个数就少一次比较
//		int flog = 1;// flog优化每次进循环的时候都初始赋值为1 表示不交换的状态
//		for (j = 0; j< sz - 1 - i; j++){
//			if (arr[j]>arr[j + 1]){
//				int tmp = arr[j];//为什么是j<sz-1-i 后面的j(arr[j+1])-则是sz先-1
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flog = 0;//如果交换数字，则证明已经交换 表示交换的状态
//			}
//		}
//		if (flog == 1){//如果没有进入交换状态，则直接退出循环-（每个数都满足升序）
//			break;//终止循环
//		}
//	}
//
//}
//int main(){
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };//进行升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Bbu_sort(arr,sz);
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);// 0 1 2 3 4 5 6 7 8 9
//	}
//
//	return 0;
//}
//int main(){
//	int arr[3][4] = { 0 };
//	for (int i = 0; i < 3; i++){
//		for (int j = 0; j < 4; j++){
//			printf("&arr[%d][%d]===%p\n", i, j, &arr[i][j]);//不难发现 二维数也满足连续存储的规则
//		}
//	}
//	return 0;
//}


//bubble_sort()-冒泡排序
//当数组传参的时候数组名为首元素地址  sizeof(arr)=(根据品台确认) 所以数组元素个数必须要传参，不能在函数里面求（error）
//数组名是什么？两种其他情况-字符串strlen(arr)求的是字符串的长度 sizeof(arr)-求的是数组arr所占空间的大小
//其他的数组名皆为首元素地址（指针接收）
//&arr 取的是整个数组的地址(数组指针接收int(*p)[数组]=arr)
int main(){
	int arr[] = { 12, 343, 3 };
	printf("%p\n", &arr[0]);
	printf("%p\n", arr);
	printf("%d\n", *arr);//12
	return 0;
}
