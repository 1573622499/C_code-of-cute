#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 54, 6545, 545 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		//printf("%d ", arr[i]);//数组采用下标进行访问，下标是从0开始的  数组的大小可以通过计算得到  sizeof（）
//		printf("arr[%d]=%p\n", i, &arr[i]);//数组在内存中是连续存放的 根据类型来进行合理存放 随着下标的增加 元素的地址也在增加
//	}
//	int arr[3][4] = {1,2,3,4,5}// 1 2 3 4                 5 0 0 0  下标同样是从0开始进行访问的
//	int arr1[3][4] = { { 1, 2, 3, 4 }, { 4, 5 } };
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int arr[3][4] = { { 1, 2, 3, 4 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++){// i控制行
//		int j = 0;
//		for (j = 0; j < 4; j++){//j控制列
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");//int arr[]={1,2,3,4};  int arr[][4]={{1,2,3,4},{5,6,7,8}};
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int arr[][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++){//i最大为2
//		int j = 0;
//		for (j = 0; j < 4; j++){//j最大为3
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);//同样的，我们不难发现二维数组可以省略行标 它在内存中的存放也是连续的
//		}
//	}
//	return 0;
//}//结论：数组在内存中是连续存放的
//数组作为函数参数  数组做实参传入函数 例如冒泡排序 （算法思想）函数将一个整型数组排序
//10 9 8 7 6 5 4 3 2 1     ...9 8 7 6 5 4 3 2 1 10  n个元素n-1趟冒泡排序 排成升序  bubble_sort();
//#include <stdio.h>
//void bubble_sort(int arr[],int sz){//传入数组 int* str
//	int i = 0;//确定趟数
//	for (i = 0; i < sz - 1; i++){
//		int flag = 1;//假设有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++){//针对每一趟进行排序
//			int tmp = 0;
//			if (arr[j]>arr[j + 1]){
//				tmp = arr[j];
//				arr[j] = arr[j+1]; //大小交换 进行升序
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1){//未进行一次冒泡 flag的值是不变的 
//			break;//进行下一趟 
//		}
//
//	}
//	
//
//
//}
//int main(){
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序 排成升序  arr是数组 我们对数组arr进行传参 实际传的是数组arr首元素的地址 &arr[0]
//	bubble_sort(arr,sz);//冒泡排序函数  bubble_sort();  //相当于把每个元素都移动
//	int n = 0;
//	for (n = 0; n < sz; n++){
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}//break 只能在循环里面使用 包含在循环里的情况 
//自己实现冒泡排序（升序）
//#include <stdio.h>
//void bubble_sort(int arr[], int sz){
//	int i = 0;
//	int flag = 1;
//	for (i=0;i<sz;i++){
//		int j = 0;
//		for (j = 0; j < sz - i; j++){
//			if (arr[j]>arr[j + 1]){
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1){
//			break;
//		}
//	}
//
//}
//int main(){
//	int arr[] = { 9, 8, 7, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int n = 0;
//	for (n = 0; n < sz; n++){
//		printf("%d ", arr[n]);// 6 7 8 9
//	}
//	return 0;
//}
//数组名是什么
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);//通过首元素地址找到该值
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//数组内含元素个数 3 单位是字节 sizeof(数组名) 该数组名表示的是整个数组 &数组名  其他均为首个元素的地址
//	return 0;
//}//&数组名 取的是整个数组的地址
