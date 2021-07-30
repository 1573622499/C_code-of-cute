#define _CRT_SECURE_NO_WARNINGS 1
//二分查找
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int k = 8;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			printf("找到了！下标为%d\n", mid);
//			break;//及时跳出循环
//		}
//	}
//	if (left>right){
//		printf("很抱歉！没有这个数啊！\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
////int main(){
////	char arr1[] = "welcome to bite!!!";//最终呈现结果
////	char arr2[] = "##################";
//	int left = 0;
//	//int sz = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left <= right){
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		//Sleep(1000);
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//
//	return 0;
//}
//利用函数实现求和
//#include <stdio.h>
//int Add(int x, int y){
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main(){
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1,&num2);
//	int sum = Add(num1, num2);
//	printf("和为%d\n", sum);
//	return 0;
//}
