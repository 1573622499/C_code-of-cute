#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

//int main(){
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	/////*int* p=arr;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	////for (int i = 0; i < sz; i++){
	////	printf("%d ", *(p + i));
	////}*/
	////利用数组指针
	//int (*p)[10] = &arr;//数组指针存储数组的地址
	//int i = 0;
	//for (i = 0; i < sz; i++){
	//	printf("%d ",*p[i]);
	//指针数组
	/*int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2 []= { 2, 3, 4, 5, 6 };
	int arr3 []= { 3, 4, 5, 6, 7 };
	int* p[3] = { arr1, arr2, arr3 };
	int i = 0;
	int j = 0;
	for (i=0;i<3;i++){
		for (j = 0; j < 5; j++){
			printf("%d ", );
		}


	}
	return 0;
}*/
void print2(int(*p)[5], int x, int y){

	for (int i = 0; i < x; i++){

		for (int j = 0; j < y; j++){
			//printf("%d ", *(*(p + i) + j));
			//printf("%d ", *p[i]+j);
		//printf("%d ", p[i][j]);
		//三者等价
		}
		printf("\n");
	}



}
void print3(char* str){
	printf("%s", str);
}
void print1(int arr[3][5], int x, int y){

	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	
	}
}
void print(int** str){
	**str = 20;
	printf("%d\n", **str);
}
int Add(int x, int y){
	return (x + y);
}
int Jian(int x, int y){
	return x-y;
}
int Mal(int x, int y){
	return (x*y);
}
int Div(int x, int y){
	return (x / y);
}
//int main(){
	//指针数组
	//int arr1[] = { 1, 2, 3, 4, 5 };
	//int arr2[] = { 2, 3, 4, 5, 6 };
	//int arr3[] = { 3, 4, 5, 6, 7 };
	//int* p[3] = { arr1, arr2, arr3 };
	//for (int i = 0; i < 3; i++){
	//	for (int j = 0; j < 5; j++){
	//		//printf("%d ", *(p[i] + j));
	//		//arr[i]==p[i]==*(p+i)==*(arr+i)  
	//		printf("%d ", p[i][j]);
	//	}printf("\n");
	/*int a = 10;
	int b = 20;
	int c = 30;
	int* p[3] = { &a, &b, &c };
	for (int i = 0;i<3;i++){
		printf("%d ", *(p[i]));





	}
	printf("\n");

*/
	//数组指针
	//int arr[5] = { 1, 2, 3, 4, 5 };
	//int (*p)[5] = &arr;//数组指针 存放数组的地址
	//for (int i = 0; i < 5; i++){
	//	printf("%d ", (*p)[i]);
	//}
	//针对二维数组
	//int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	////print1(arr, 3, 5);//用数组
	//print2(arr, 3, 5);//用地址
	//二级指针
	//int n = 10;
	//int* p = &n;
	//int** pp = &p;
	//print(&p);
	////printf("%d\n", **pp);
	//函数指针与字符指针结合  char* p="abcede"==char arr[]="abcede" +  char* p=arr;  p为一个字符指针 用来存放数组的首元素地址 %s --首元素地址 检测有‘\0’
	/*void(*p)(char*) = print3;
	(*p)("hello bit");
	printf("\n");*/
	//登录
	//char password[20] = { 0 };
	//int k = 0;
	//printf("请输入密码:>");
	//for (int i = 0; i < 3; i++){
	//	scanf("%s", password);
	//	if (0==strcmp(password, "123456")){
	//		printf("登录成功\n");
	//		break;
	//	}
	//	else{
	//		printf("密码错误请重新输入\n");
	//		k++;

	//	}
	//	if (k == 3){
	//		break;
	//	}
	//}


	//printf("hehe\n");//k==3 时退出程序

	//函数指针数组
	//int a = 10;
	//int b = 20;
	////int sum = Add(a, b);
	//printf("%d ", sum);
	//利用函数指针 p=Add 函数名即函数地址 &函数名
	//int(*p)(int, int) = Add;
	//printf("%d ", (*p)(2, 9));//函数指针调用
	//函数指针数组
	//int(*p[4])(int, int) = { Add, Jian, Mal, Div };//加减乘除
	//int i = 0;
	//for (i = 0; i < 4; i++){

	//	printf("%d\n", p[i](a, b));//类是于数组访问 arr[i]  函数指针访问很简单  指针（参数） 可以在指针前面加一颗*
	//}//30 -10 200 0
	//void(*     signal(int, void(*)(int)))    (int);//函数声明   函数指针类型   void(*)() 一个函数指针指向一个无参，返回值为空的函数
	////利用typedef简化
	//typedef void(*fun_t)(int)
	//	void(*signal(int, void(*)(int)))    (int)----->       fun_t signal(int, fun_t);函数声明
	//	//一个函数的成分    返回值类型 函数名 （函参类型）；
	//	*(void(*)())0()    0被强制转换为一个函数指针类型 然后通过*访问函数（）
	//打印 1 2 3 4 5  
	  //   2 3 4 5 6 
 	//     3 4 5 6 7
	//指针数组
	//int arr1[] = { 1, 2, 3, 4, 5 };
	//int arr2[] = { 2, 3, 4, 5, 6 };
	//int arr3[] = { 3, 4, 5, 6, 7 };
	//int* p[3] = { arr1, arr2, arr3 };
	//int i = 0;
	//for (i = 0; i < 3; i++){

	//	for (int j = 0; j < 5; j++){
	//		//printf("%d  ", *(p[i] + j));//因为[]的优先级高于* 所以这里访问不需要地址
	//		printf("%d ", p[i][j]);//也可

	//	}
	//	printf("\n");
	//}使用数组指针
//打印一维数组
//int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//int* p = arr;
//for (int i = 0; i < 10; i++){
//	printf("%d ", *(p + i));
//}
//int (*p1)[10] = &arr1;//数组地址->数组指针
//数组指针访问一维数组
//for (int i = 0; i < 10; i++){
//
//	printf("%d ", (*p)[i]);//这里可以说明[]优先级高于*
//
//}
//数组指针关于访问二维数组
//int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
//int(*p)[5] =arr;
//for (int i = 0; i < 3; i++){
//
//	for (int j = 0; j < 5; j++){
//		printf("%d ", *(*(p + i) + j));
//		/*printf("%d ", *(p[i] + j));
//		printf("%d ", p[i][j]);*/
//
//	}
//	printf("\n");
//






//
//	return 0;
//}
////实现my_strcmp() 自定义字符串拷贝函数
char* my_strcpy(char* dest, const char* source){
	char* str = dest;
	assert(dest != NULL);
	assert(source != NULL);//不满足条件直接报错
	while (*dest++ = *source++){
		;
	}//经过循环 dest内部已经改变 拷贝成功
	return str;
}
int main(){
	/*char* arr1 = "********************************";
	char* arr2 = "hello bit";*/
	char arr1[] = "********************";
	char arr2[] = "hello bit!";
	//业务实现 将arr2的内容转移到arr1里面
	//printf("%s\n", my_strcpy(arr1, arr2));//Debug 指针存放字符串的时候不能实现
	printf("%c\n", *arr1);//*
	return 0;
}
