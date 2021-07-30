#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//利用函数判断一个数是否为素数
//#include <stdio.h>
//int  is_prime(int n){
//	if (n % 2 == 0)
//		return 0;//因为素数存在偶数中  默认1不是素数（不满足条件）
//	int i = 0;
//	for (i = 2; i <=n/2; i++){//注意return 只返回一次 函数就结束
//		if (n%i == 0)
//			return 0;//不是素数
//	}
//	if (i>n/2)
//		return 1;
//
//}
//int main(){
//	int n = 0;
//	printf("请输入一个数:>");
//		scanf("%d", &n);
//	if (is_prime(n) == 1){
//		printf("%d是素数\n", n);
//	}
//	else{
//		printf("%d不是素数\n", n);
//	}
//
//	return 0;
//}
//函数->子程序 相对独立 执行特定任务 
//函数分为：自定义函数 库函数  函数格式  返回值 函数名（参数）{代码}
//strcpy(destination,source );
//memset(char*, 替代字符, 个数); sqrt()-> <math.h>
//int ch = 0;
//while ((ch = getchar()) != EOF){
//	putchar(ch);
//}
//while ((ch = getchar()) != '\0'){
//	;//接收至\0结束
//}
//strcpy(, ); 拷贝字符串 是要将'\0'一起拷贝
//char arr1[] = "hello world";
//char arr2[] = "#############";
//strcpy(arr2, arr1);
//printf("%s\n", arr2)；//arr2 hello world
//memset(arr1, '*'int (char 利用ASCII码值), 5);
//printf("%s\n", arr1);//##### world
////传值调用 传址调用（改变值）必须借助地址（指针）* 进行改变 
//实参类型：变量 常量 函数 表达式 
//形参是实参的一份临时拷贝  形参同样有临时的地址 对形参的改变不能影响实参
//1.判断素数
int Is_prime(int n){
	if (n / 2 == 0)//试除法
		return 0;//返回0表示不是素数
	int i = 0;
	for (i = 2; i <= n / 2; i++){//i/2 sqrt(n)  n-1
		if (n%i == 0)
			return 0;//n能被整除为素数

	}
	if (i > n / 2)
		return 1;//n为素数
	
}
//int main(){
//	int n = 0;
//	printf("请输入一个整数:>");
//	scanf("%d", &n);
//	if (Is_prime(n) == 1)
//		printf("%d为素数\n", n);
//	else
//		printf("%d不是素数\n", n);
//
//	return 0;
//}
//判断一年份是否为闰年
int Is_runin(int year){
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;//返回值为1为闰年
	else
		return 0;
}
////函数二分查找（折半查找）
//void BinSearch(int arr[],int sz,int k){
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("恭喜你找到了！这个数的下标是%d\n", mid);
//			break;//找到这个数立即退出循环  return 1; 循环中断 也能跳出函数 有结果
//		}
//
//		
//	}
//	if (left>right)
//		printf("找不到这个数!\n");
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	BinSearch(arr, sz, k);
//	return 0;
//}
//每调用一次 num+1
void test(int* pn){
	(*pn)++;//num++ * + 涉及优先级 结和性
}
int main(){
	int num=0;
//利用循环调用test()十次
	int i = 0;
	for (i = 0; i < 10; i++){
		test(&num);//利用指针（存放num的地址进行改变num的值）
	}

	printf("num=%d\n", num);//调用后的num 2

	return 0;
}
