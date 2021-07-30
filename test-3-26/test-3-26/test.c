#define _CRT_SECURE_NO_WARNINGS 1
//二分查找
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int h = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > h){
//			right = mid - 1;
//		}
//		else if (arr[mid] < h){
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了！下标为%d\n", mid);
//			break;//找到了就可以马上跳出循环
//		}
//	}
//	if (left>right){
//		printf("未能找到这个数\n");
//	}
//	return;
//}
//
//应用递归实现1+2+...100=5050
//#include <stdio.h>
//int main(){
//	int add(int i);//函数声明
//	int n = 100;
//	int sum = add(n);//传入 实参  函数调用
//	printf("1+2+...100=%d\n", sum);
//	return 0;
//}
//int add(int i){//接收 形参
//	if (i == 1){//函数实现
//		return 1;
//	}
//	else{
//		return add(i - 1) + i;//前一个数到1的和等于他后一个数到1的和加上他自身 实现递归
//	}//实参->形参
//}
//  斐波那契数列 1 1 2 3 5 8 13 21 34 55.....
//#include <stdio.h>
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int sum = FEI(n);
//	printf("第%d个斐波那契数列项为%d\n", n, sum);
//	return 0;
//}
//int FEI(int n){
//	if (n < 3){//确定下限 及时返回值进行运算
//		return 1;
//	}
//	else{
//		return FEI(n - 1) + FEI(n - 2);//一个数等于他后两个数之和
//	}
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main(){
//	char ch1[] = "welcome to CQ of engineering";
//	char ch2[] = "############################";
//	int left = 0;
//	int sz = sizeof(ch1) / sizeof(ch1[0]);
//	int right = sz - 2;
//	while (left <= right){
//		ch2[left] = ch1[left];
//		ch2[right] = ch1[right];
//		left++;
//		right--;
//		//Sleep(1000);
//		printf("%s\n", ch2);//换行很关键 答应后会出现在scree上面显示
//		system("cls");//清空屏幕
//	}
//	//printf("%s\n", ch2); 错误写法
//	return 0;
//}
//设计一个登录系统提示
//#include <stdio.h>
//#include <string.h>
//int main(){
//	int i = 0;//控制登录次数
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++){
//		printf("请输入密码，以验证你的身份\n");//正确密码为5201314
//		scanf("%s", &password);//字符串的比较 strcmp string compare
//		if (0 == strcmp(password, "5201314"))//字符串比较形式 if(0==strcmp(?,?))
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else {
//			printf("密码错误！请重新输入\n");
//		}
//	}
//	if (i == 3){
//		printf("即将退出程序\n");
//	}
//	return 0;
//}#define n 10 符号常量
//#include <stdio.h>
//int main(){
//	int sum(int , int );//变量可以省略
//	int num1 = 10;
//	int num2 = 20;
//	int and = sum(num1,num2);
//	printf("这两个数的和为%d\n", and);
//	return 0;
//}
//int sum(int x, int y){
//	int z = 0;
//	z = x + y;
//	return z;
//}
//两个数交换用函数实现
////#include <stdio.h>
////void swap(int x, int y){//a,b 交换?
////	//仅仅是交换两个数
////	x = x^y;
////	y = x^y;
////	x = x^y;
////}
////int main(){
////	int a = 3;
////	int b = 5;
////	printf("before %d %d\n", a, b);
////	swap(a, b);
////	printf("after %d %d\n", a, b);
////	return 0;
////}
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char arr1[] = "bit";//省略\0作为字符串结束标志 包含
//	char arr2[] = "***********";
//	printf("%s\n", arr2);
//	strcpy(arr2, arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
