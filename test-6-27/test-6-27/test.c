#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <assert.h>
#include <time.h>
void test(int arr[]){//arr 此时为首元素地址   不同的两种情况  &arr取数组的地址  strlen()计算字符串长度的时候
	int sz = sizeof(arr) / sizeof(arr[0]);// sizeof(arr)一个地址的大小  sizeof(arr[0])计算一个整形元素的大小 显然为4  4or8/4=2or1 指针类型大小与仅仅平台有关 4 or 8  
	printf("%d\n", sz);//1 or 2
	 
}
//int main()
//{
//	////1091567616
	//int n = 9;
	//float* pFLOAT = (float*)&n;//&n int* ()类型强制转换
	//printf("%d\n", n);//9
	//printf("%f\n", *pFLOAT);//0.000000  *pFLOAT - 取
	//*pFLOAT = 9.0;//存
	//printf("%d\n", n);//直接将FLOAT的源码当成int的源码进行打印  结果  1091567616
	//printf("%f\n", *pFLOAT);//9.000000  浮点型 小数点后默认打印六位数
	//所以 整形类型和浮点型类型数据在内存中的存储方式不同


	//char a[1000];
	//int i = 0;
	//for (i = 0; i <1000; i++){

	//	a[i] = -1 - i;
	//}

	//printf("a[1000]的长度为%d\n", strlen(a));//寻找\0->"0" 字符串结束标志 char[-128,127] 默认有符号数-128-1=127...255

	//return 0;
	//指针数组 int arr[20]={0}; 整形数组  int* parr[10] 整形指针数组
	/*int a = 10;
	int b = 20;
	int c = 30;
	int* p[3] = { &a, &b, &c };
	for (int i = 0; i < 3; i++){
		printf("%d ", *p[i]);
	}
	printf("\n");


*/
	//指针数组的基本使用
	/*int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 2, 3, 4, 5, 6 };
	int arr3[] = { 3,4,5,6,7};
		int* parr[3] = { arr1, arr2, arr3 };
	for (int i = 0; i < 3; i++){
	
		for (int j = 0; j < 5; j++){
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
*/
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	////int (*p)[10]=&arr;//&arr 数组的地址 应该用数组指针来存放  该形式表示指针指向一个含有十个元素（整形）的数组
	//int i = 0;
	//int* parr = arr;//parr 和 arr 等价
	//int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
	//for (i = 0; i < sz; i++){
	//	printf("%d ", arr[i]);
	//	printf("\n");
	//	printf("%d ", parr[i]);
	//	printf("\n");
	//	printf("%d ", *(parr+ i));
	//	printf("\n");
	////	printf("%d ", *(arr + i));
	////	printf("\n");
	//}
	//指针进阶篇
//字符指针 数组指针 指针数组 数组传参和指针传参  函数指针 函数指针数组 指向函数指针数组的指针 回调函数 指针和数组面试题
	/*int arr[10] = { 0 };
	test(arr);
	return 0;
	*/
//int main(){
//
//	//char arr[] = "abcdef";
//	//char* parr = arr;
//	//printf("%s\n", arr);
//	//printf("%s\n", parr);//从指向首元素地址开始打印 字符串结束标志 ‘\0’==0
//
//	//另一种写法 区别  
//	//const char* const parr = "abcdef";//其实可以拆分为两个部分 char arr[]="abcedf"  char* parr=arr; parr所指向的都是字符串的第一个元素的地址 "abcdef"为一个常量字符串 原则上不能被改变的
//	//*parr = 'e';//32平台有误 64平台ok 区别 应该在最前面加上const 常属性 不变的性质 限制*parr访问
//	//printf("%s\n", parr);//地址->字符串
//	char* pa = "abcdef";pa为一个字符指针 指向的是字符串第一个元素的地址（首元素地址）
//	//printf("%c\n", *pa);//a
//
//
//	return 0;
//}
//
//
//
//


//int main(){
//	char arr1[] = "abcdef";
//	char arr2[] = "abcede";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";//p1 p2 所指向（存放）的地址相同 “abcdef”但是p1 p2 没有关系   “abcdef”带有常属性 在内存中只有一份
//	//if (arr1 == arr2){//显然arr1 arr2 的地址截然不同 故在这里打印haha
//	//	printf("hehe\n");
//	//}
//	//else{
//	//	printf("haha\n");
//	//}
//	if (p1 == p2){
//		printf("hehe\n");
//
//	}
//	else{
//		printf("haha\n");//p1 p2 指向的都是首元素的地址 所以二者相等 打印的是hehe
//	}
//
//	return 0;
//}
//int main(){
//	//指针数组 是数组 用来存放指针
	//int arr[10] = { 0 };//整形数组 用来存放整形
	//char ch[5] = { 0 };//字符数组 用来存放字符
	//int* arr1[10];//整形 指针数组 所存指针类型为 整形
	//char* ch1[4];//字符 指针数组 所存指针类型为 字符
	//粗略运用
	/*int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int* p[4] = { &a, &b, &c, &d };
	for (int i = 0; i < 4; i++){
		printf("%d ", *(p[i]));
	}
	printf("\n");

*/
	  //基本运用
	//int arr1[] = { 1, 2, 3, 4, 5 };
	//int arr2[] = { 2, 3, 4, 5, 6 };
	//int arr3[] = { 3, 4, 5, 6, 7 };
	//int* p[3] = { arr1, arr2, arr3 };//p作为一个指针数组含有三个指针 分别指向每个的首元素地址
	//int i = 0;
	//for (i = 0; i < 3; i++){
	//	int j = 0;
	//	for (j = 0; j < 5; j++){
	//		//printf("%d ", *(p[i]+j));
	//		printf("%d ", p[i][j]);
	//		//printf("%d ", *(p[i]+j));//+ j == [j]
	//	}
	//	printf("\n");
	//} //指针+ -代表的是步长   指针类型 影响访问空间的大小
//数组指针  pointer
	//int *p = NULL;//p是整形指针 指向整形的指针 可以存放整形的地址
	//char* pc = NULL;//pc是字符指针 指向字符的指针 可以存放字符的地址
	////数组指针 存放数组的地址 指向数组的指针 &arr数组地址要用数组指针来存放
	//int arr[10] = { 0 };
	//arr------&arr[0]首元素的地址
	//	&arr - 整个数组的地址
	//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int （*p)[10] = &arr;//存放数组地址  （*p）代表指针 用来存放地址  *p指向一个含有十个整形元素的数组 即p为数组指针 int为指向数组元素的类型
	////优先级问题 [] >> *

//
//	return 0;
//}字符数组 存放字符串  char ch[20];  字符指针数组 存放指针 char* ch[20]  char (*p)[20]=&arr字符数组指针
 

//int main(){
//	/*char ch[] = "abc";
//	printf("%s\n", ch);
//	char* p = ch;
//	printf("%s\n", p);
//	*/
//	//char* p= "abceef";//p指向首元素的地址
//	//printf("%s\n", p);
//	//
//	/*char* arr[5];
//	char* (*pa)[5] = &arr; 数组指针
//		int arr2[10] = &arr;
//	int(*pa2)[10] = &arr2;
//
//*/
//	//比较arr &arr
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr);//打印的皆为首元素地址
//	////printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);//byte
//	//printf("%p\n", &arr+1);//跨越的为一个数组的大小 40个字节 
//	//int (*p)[10]=&arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++){//p=&arr   *p==arr  找回数组 代表首元素地址
//	//	printf("%d ", (*p)[i]);//模仿数组访问 arr[i]
//	//int* p = arr;
//	int (*p)[10] = &arr;
//	for (int i=0;i<10;i++){
//		//printf("%d ", *(p + i));
//		//printf("\n");
//		//printf("%d ", p[i]);  //*(p + i) == p[i]
//		printf("%d ", *(*p + i));//通过指针的访问方式
//	}
//	return 0;
//}
void print1(int arr[3][5], int x, int y){//注意实参传入形参对应的类型
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			
			printf("%d ", arr[i][j]);
		}
		printf("\n");

	}

}
void print2(int(*p)[5] , int x, int y){
	//一行一元素
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			//printf("%d ", *(*(p + i) + j));
			printf("%d ", *(*(p + i) + j));//*p表示每行的首元素地址
			//printf("%d ", *(*(p + i)[j]));//arr[j] 相当于二维数组拆分成一维数组


		}
		printf("\n");
	}


}
int main(){
	int arr[3][5] = { { 1, 2, 3, 4, 5 },{ 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };//思考一下这里的arr 也是首元素地址
	//print1(arr, 3, 5);
	//print2(arr, 3, 5);//arr为首元素地址 可以用数组指针





	return 0;
}
