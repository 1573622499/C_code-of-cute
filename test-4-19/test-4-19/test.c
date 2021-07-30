#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(){
//	int a;//局部变量未初始化,里面放的是一个随机值
//	int* pa=&a;//称为野指针（未初始化的指针 指针越界  函数调用指针位置不明）
//	*pa = 20;
//	return 0;
//
//}
//#include <stdio.h>
//int main(){
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 12; i++){
//		//*(p++) = i;
//		*p = i;
//		p++
//		printf("%d", *p);
//	}
//	return 0;
//}
//#include <stdio.h>
// int* test(){
//	int a = 10;
//	return &a;//a 这个出函数的时候局部变量已经被销毁 返回的地址已经不存在 
//}
//int main(){
//	int* p=test();
//	printf("%d\n", *p);//*p 无法找到这个地址
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 10;
//	int* pa = &a;//初始化
//	*pa = 20;
//	pa=NULL;//用初始化的，给指针赋值 暂时不用该指针
//	if (pa != NULL){
//		*pa = 29;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	/*int* p = arr;*/
//	int* p = &arr[9];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++){
//	//	/*printf("%d ", *p);
//	//	p++;*///另一种
//	//	printf("%d ", *p++);++优先级较高
//	//}
//	//for (i = 0; i < 5; i++){
//	//	printf("%d ", *p);
//	//	p += 2;//p=p+2;
//	//}
//	for (i = 0; i < 5; i++){
//		printf("%d ", *p);
//		p -= 2;
//	}
//	return 0;
//}
//利用指针减指针求字节长度my_strlen  递归 计数器方式
//#include <stdio.h>
//int my_strlen(char *str){
// char* start = str;//开始和结束都先为首元素地址   看好类型！对应思想
//	char* end=str;
//	while (*end != '\0'){
//		end++;//往后指
//	}
//	return end - start; //(指针减指针即为字符串长度) 大减小
//}
//int main(){
//	char ch []= "abknsdj";//7
//	int len = my_strlen(ch);
//	printf("该字符串的长度为%d\n", len);
//	return 0;
//}//指针减指针即为元素个数
//#include <stdio.h>
//int main(){
//	int arrr[] = { 1, 2, 3, 4, 5, 6,7, 8, 9, 10 };//指前面
//	printf("%d\n", &arrr[9] - &arrr[0]);
//	printf("%d\n", &arrr[0] - &arrr[9]);
//	return 0;
//}1、
//#include <stdio.h>
//int my_strlen(char* str){
//	char* s = str;
//	char* e = str;
//	while (*e != '\0'){
//		e++;
//	}
//	return e - s;
//}
//int main(){
//	char ch[] = "ndkxnskldnksd";
//	int len = my_strlen(ch);
//	printf("该字符串的长度为%d\n", len);
//	return 0;
//}
//#include <stdio.h>
//int my_strlen(char* str){
//	int count = 0;
//	while (*str != '\0'){
//		count++;
//		str++;//仔细思量 考虑
//	}
//	return count;
//}
//int main(){
//	char ch[] = "dkjhdk";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}
//#include <stdio.h>
//int my_strlen(char* s){
//	if (*s != '\0'){
//		return 1 + my_strlen(s + 1);//\0是核心 s+1为调整
//	}
//	return 0;
//}
//int main(){
//	char ch[] = "jkadj";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}
//指针接受地址
#include <stdio.h>
int main(){
	int arr[] = { 1, 2, 3, 4, 5 };
	int* pa = arr;
	for (pa = arr; pa < &arr[5]; ){
		*pa++ = 0;
	}//使该数组元素全为0
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++){
		printf("%d ",arr[i]);
	}

	return 0;
}