#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(){//二分法针对顺序数组 寻找元素
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//k=7
//	int left = 0;
//	int k = 7;//寻找目标
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
//			printf("找到了！下标为：%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}
//一般的找数字
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 23, 2342, 656, };
//	int guess = 0;
//	printf("你要查找的数字为:>");
//	scanf("%d", &guess);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		if (arr[i] == guess){
//			printf("找到了！数字%d\n", arr[i]);
//			break;//找到了就直接退
//		}
//	}
//	if (i==sz||i>sz){
//		printf("对不起，真的没找到!\n");
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <windows.h>
//int main(){
//	char ch1[]="welcome to chongqing";
//	char ch2[] = "####################";
//	int left = 0;
//	//int sz = sizeof(ch1) / sizeof(ch1[0]);
//	int right=strlen(ch1)-1;
//	//int right = sz - 2;
//	while (left <= right){
//		ch2[left] = ch1[left];
//		ch2[right] = ch1[right];
//		printf("%s\n", ch2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//清空屏幕 执行系统命令
//		left++;
//		right--;
//	}
//
//	return 0;
//}
#include <stdio.h>
#include <string.h>
int main(){
	char password[] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("请输入密码:>");
		scanf("%s", &password);
		if (0 == strcmp(password, "123456")){
			printf("登录成功\n");
			break;
		}
		else {
			printf("输入错误,请重新输入\n");
		}
	}
	if (i == 3){
		printf("即将退出程序\n");
	}
	return 0;
}