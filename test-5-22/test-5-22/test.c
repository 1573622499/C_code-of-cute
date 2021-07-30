#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void bubblesort(int arr[], int sz){
//	for (int i = 0; i < sz; i++){//确定趟数
//		for (int j = 1; j < sz - i; ++j){
//			int tmp = 0;
//			if (arr[i]>arr[j]){
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;//交换位置 从左往右 
//			}
//		}
//		
//	}
//} 
//int main(){
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubblesort(arr,sz);
//	for (int k = 0; k < sz; k++){
//		printf("%d ", arr[k]);
//	}
//	return 0;
//}
//
//全0
//#include <stdio.h>
//void intl(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		arr[i] = 0;//元素全部初始化为0
//	}
//}
//void print(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
//	int arr[10000] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	intl(arr, sz);//初始化
//	print(arr, sz);//打印
//	return 0;//函数实现
//}
//#include <stdio.h>
//void lllo(int arr[], int sz){
//	for (int i = 0; i < sz; ++i){
//		arr[i] = i + 1;
//	}
//}
//void print(int arr[], int sz){
//	for (int u = 0; u < sz; ++u){
//		printf("%d ", arr[u]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz){
//	int left = 0;
//	int right = sz-1;
//	while (left < right){//必须是先定义后使用
//		
//		//进行交换
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] =tmp;
//		left++;
//		right--;
//	}
//}
//int main(){
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	lllo(arr, sz);//初始化为1~10；
//	print(arr, sz);//打印
//	Reverse(arr, sz);//逆置
//	print(arr, sz);//打印
//	return 0;
//}
//利用指针进行交换 容易出错
//#include <stdio.h>
//void mend(int arr[], int m){
//	for (int i = 0; i < m; i++){
//		arr[i] = i + 1;
//	}
//}
//void print(int arr[], int sz){
//	for (int g = 0; g < sz; ++g){
//		printf("%d ", arr[g]);
//	}
//	printf("\n");
//}
//void Reverse(int* str, int sz){
//	int* start = str;
//	int* end = str;
//	while ((*end) != '\0'){
//		end++;
//	}
//	int tmp = 0;
//	while ((*start) != (*end)){
//		tmp = *start;
//		*start = *end;
//		*end = *start;
//		start++;
//		end--;
//
//	}
//}
//int main(){
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	mend(arr, sz);//初始化1~10
//	print(arr, sz);//打印
//	Reverse(arr, sz);//逆置
//	print(arr, sz);
//	return 0;
//}
//2021 5/23 复习
//将数组初始化为0 然后打印出来
//#include <stdio.h>
//void Init(int arr[], int n){
//	for (int y = 0; y < n; ++y){
//		arr[y] = 0;
//	}
//}
//void print(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
//	int arr[10] = { 5445, 45, 455, 4645, 12, 7880 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//交换两个数组的对应元素
//#include <stdio.h>
//void EXii(int arr1[], int arr2[], int sz, int right, int left){
//	while (left < right){
//		int tmp = arr1[left];
//		arr1[left] = arr2[left];
//		arr2[left] = tmp;
//		int tm0 = arr1[right];
//		arr1[right] = arr2[right];
//		arr2[right] = tmp;
//		right--;
//		left++;
//	}
//}
//void print(int arr2[], int sz){
//	for (int y = 0; y < sz; y++){
//		printf("%d ", arr2[y]);
//	}
//}
//int main(){
//	int arr1[] = { 1,3,5,7,9};
//	int arr2[] = { 2, 4, 6, 8, 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = sz - 1;
//	EXii(arr1, arr2, sz, right, left);
//	//print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}
//#include <stdio.h>
//void print(int arr[], int sz){
//	for (int y = 0; y < sz; y++){
//		printf("%d ", arr[y]);
//	}printf("\n");
//}
//int main(){
//	int arr[] = { 1, 3, 5, 7, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int arrr[] = { 2, 4, 6, 8, 0 };
//	for (int i = 0; i < sz; i++){
//		int tmp = arr[i];
//		arr[i] = arrr[i];
//		arrr[i] = tmp;//对应交换元素就可以 没有那么复杂的 left right 二分查找 逆置Reverse
//
//	}
//	print(arr, sz);
//	print(arrr, sz);
//	return 0;
//}
//实现逆转 1~10  ->   10~1
//#include <stdio.h>
//void Init(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		arr[i] = i + 1;
//	}
//}
//void Reverse(int arr[], int sz){
//	int left = 0;
//	int right = sz - 1;
//	while (left < right){
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//}
//void print(int arr[], int sz){
//	for (int u = 0; u < sz; ++u){
//		printf("%d ", arr[u]);
//	}
//	printf("\n");
//}
//int main(){
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);//初始化
//	print(arr, sz);//打印
//	Reverse(arr, sz);//逆转操作
//	print(arr, sz);//打印
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int i = 1;
//	int ret = 0;
//	ret = (++i) + (++i) + (++i);//3+4+5=12
//	printf("ret=%d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short* p = (short*)arr;//指针对应地址 (强制转换类型) 这里定义的是short类型
//	for(int i = 0; i < 4; i++){
//		*(p + i) = 0;//short*  每走一步为两个字节 int 是四个字节   走四次 每次两个字节 一共走八个字节 就改变两个int的元素
//	} 
//	for (int i = 0; i < 5; i++){
//		printf("%d ", arr[i]);//打印
//	}
//	return 0;
//}
//%x为打印十六进制
//#include <stdio.h>
//int main(){
//	int a = 0x11223344;//存储为 44332211
//	char* p = (char*)&a;
//	*p = 0;
//	printf("%x\n", a);//0x112223300
//	return 0;
//}
//#include <stdio.h>
//int i;//全局变量不初始化默认初始化为0
//int main(){
//	--i;//-1
//	if (i > sizeof(i)){//sizeof()- 计算变量 类型内存大小 >=0 这里必须将和他比较的i （-1）换成无符号数 100000000...1   1111111111111111..0   111111111111111111111(对补码进行操作) 转换现在的1不是符号位 是一个很大的数
//		printf(">\n");
//	}
//	else{
//		printf("<\n");
//	}
//	return 0;
//}//最终打印>  sizeof()和有符号数（负数）比较的时候  需要将无符号数进行转换 变成无符号数（正数）
#include <stdio.h>
int main(){
	int a, b, c;
	a = 5;
	c = ++a;//c=6 a=6
	b = ++c, c++, ++a, a++;//注释 ,为逗号表达式 执行结果为最后一个表达式的结果   但是在这里的c语言语句 由于赋值的优先级高于逗号表达式
	b += a++ + c;//+的优先级要高于+=的   b=7  c=7 c=8 a=7 a=8
	 printf("a=%d b=%d c=%d\n", a, b, c);//a=9 b=7+8+8=23 c= 8   so the outcome   9  23 8
	return 0;
}