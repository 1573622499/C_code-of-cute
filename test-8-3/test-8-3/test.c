#define _CRT_SECURE_NO_WARNINGS 1
//数组
#include <string.h>
#include <stdio.h>
void print(int n){
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);


}
//统计字符串长度
int My_strlen(char* p){

	if (*p != '\0')
		return 1 + My_strlen(p + 1);
	else
		return 0;
}
int main(){
	//创建一个数组存放整形-十个
	//int arr[10] = { 0 };
	//int n = 10;
	////int arr1[n] = { 0 };error [常量表达式]
	//char str[] = "abcdef";//6  'a''b''c  'd'e'f'\0'
	//printf("%d\n", strlen(str));//字符串长度   6 '\0'表示字符串结束标志 strlen主要来识别它 统计该字符串'\0'之前的字符个数==字符串长度
	//printf("%d\n", sizeof(str));//计算数据存储空间大小   7
	//char arr2[] = { 'a', 98, 48 };
	//return 0;
	//strlen() 和sizeof()没有关联
	//strlen() 是求字符串长度的-一个库函数-只针对字符串求长度
	//sizeof()-一个单目操作符 计算变量、数组、类型的大小--单位是字节--操作符
	//讨论存储地址
	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) /sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++){

		printf("&arr[%d]--%p\n", i, &arr[i]);
	}*/
//	//数组在内存中是连续存储的 由低地址到高地址二维数组也是这样的  数组访问都是从下标为0开始的
	//二位数组“行”可以省略
	//int arr[][3] = { { 1, 2, 3 },{ 4, 5, 6 },{7, 8, 9} };
	//int i = 0;//[] [] [] (arr[0])  [] [] [](arr[1])   [] [] [](arr[2])   
	//int j = 0;//
	//for (i = 0; i < 3; i++){
	//	for (j = 0; j < 3; j++){

	//		//printf("%d ", arr[i][j]);
	//		printf("&arr[%d][%d]---%p\n", i, j, &arr[i][j]);
	//	}
	//	printf("\n");
	//}
	//1234  1  2  3  4
	/*int n = 0;
	scanf("%d", &n);
	print(n);*/
	char ch[] = "ahdkajkd";
	printf("%d\n", My_strlen(ch));



















	return 0;
}

