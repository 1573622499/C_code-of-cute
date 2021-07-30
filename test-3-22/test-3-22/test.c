#define _CRT_SECURE_NO_WARNINGS 1
////求一个数存储在内存里二进制位含有1的个数 例如5（101） count=2 且针对所有的整数   %时 二者只能为整数
////int main(){
////	int num = 0;
////	int count = 0;
////	int i = 0;
////	scanf("%d", &num);
////	for (i = 0; i < 32; i++){
////		if (num >> i & 1){
////			count++;//&:用处是确定右移位含1的个数  &按位与  两者同时为1才为1 1 0000001 用于判断最后一位是否为1
////		}
////	}
////	printf("%d储存在内存里的二进制位含1有%d个\n", num, count);
////	return 0;
////}
////#include <stdio.h>
////int main(){
//////判断闰年
////	int year = 0;
////	scanf("%d", &year);
////	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
////		printf("%d为闰年\n",year);
////	}
////	return 0;
////}
////求1000到2000年之间为闰年年份的个数
////#include <stdio.h>
////int main(){
////	int year = 0;
////	int count = 0;
////	for (year = 1000; year <= 2000; year++){
////		if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0)){
////			printf("%d ", year);
////			count++;
////		}
////	}
////	printf("一共有%d个闰年\n", count);
////	return 0;
////}//&&同时满足 ||只要一个满足就行
//#include <stdio.h>
//int main(){
//	//打印100~1000整除6的整数 10个数一行
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 1000; i++){
//		if (i % 6 == 0){
//			printf("%d ", i);
//			count++;
//		}
//		if (count % 10 == 0)
//		{
//			printf("\n");
//		}
//	}
//	printf("一共有%d个数能被6整除\n",count);
//	return 0;
//}
//二分法秒杀顺序查找数字 顺序数组可以 其他找数字下标也行
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,21,23 };
//	//例如寻找数字7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = sz-1;//确定右边下标
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if(arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			printf("找到了!下标%d\n", mid);
//			break;
//		}
//		if (left>right){//对立情况
//			printf("找不到\n");
//		}
//
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main(){//判断任意数组中是否有对应的元素
//	int arr[] = { 1, 23, 4, 5, 67, 8 ,8};
//	int se = sizeof(arr) / sizeof(arr[0]);
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < se; i++){
//		if (arr[i] == num){
//			printf("该数组中有%d,它的下标为%d\n", num, i);
//		}
//	}
//	return 0;
//}
