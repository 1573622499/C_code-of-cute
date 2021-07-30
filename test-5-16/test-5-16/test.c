#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void bbsort(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		for (int o = 1; o < sz - i; o++){
//			if (arr[i]>arr[o]){
//				int tmp = arr[i];
//				arr[i] = arr[o];
//				arr[o] = arr[i];
//				
//			}
//		}
//	}
//}
//int main(){
//	int arr[] = { 45, 21, 78, 458, 4 };//实现4 21 45 78 458
//	//冒泡排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bbsort(arr, sz);
//	for (int i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
////	}
//	return 0;
//}
//
//二分查找
#include <stdio.h>
void binnary(int arr[], int sz){
	int left = 0;
	int k = 55;
	int right = sz - 1;
	while (right >= left){
		int mid = (left + right) / 2;
		if (arr[mid] > k){
			right = mid - 1;
		}
		else if (arr[mid] < k){
			left = mid + 1;
		}
		else{
			printf("找到了！%d 下标为%d\n", k, mid);
			break;
		}
	}
	if (right < left){
		printf("没有找到这个数哦\n");
	}
}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	//判断有没有k这个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	binnary(arr, sz);
	return 0;
}