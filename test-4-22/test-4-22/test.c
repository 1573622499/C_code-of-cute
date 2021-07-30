#define _CRT_SECURE_NO_WARNINGS 1
//指针减指针 求字符个数（长度）
//#include <stdio.h>
//int my_strlen(char* str){
//	char* start = str;
//	char* end = str;
//	while (*end != '\0'){
//		end++;
//	}
//	return end - start;
//}
//int main(){
//	char ch[] = "jdlkjda";//7  注意数组的创建
//	int len =my_strlen(ch);
//	printf("该字符的长度为%d\n", len);
//	return 0;
//}
//一点点的结构体
//#include <stdio.h>
//int main(){
//	struct stu{
//		char name[20];
//		int age;
//		int length;
//		char code[20];
//	};
//	struct stu s = { "张三", 18, 180, "209030323"};
//	printf("%s\n", s.name);
//	printf("%s\n", s.code);
//	printf("%d\n", s.age);
//	printf("%d\n", s.length);
//	struct stu* p = &s;
//	printf("%s\n", p->name);
//	printf("%s\n", p->code );
//	printf("%d\n", p->age);
//	printf("%d\n", p->length);
//	printf("%s\n", (*p).name);
//	printf("%s\n", (*p).code);
//	printf("%d\n", (*p).age);
//	printf("%d\n", (*p).length);
//	return 0;
//}
//
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4 };
//	int* pa = arr;
//	for (pa = &arr[4]; pa >&arr[0];){//初始值为最大的下标 与最大的标作比较
//		//*pa-- = 0;//[4]  元素个数 下标从0开始访问
//		*--pa = 0;
//	}
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);//全部初始化为0
//	}
//	return 0;
//}
//#include <stdio.h>//&arr 表示取的是整个数组的地址
//int main(){
//	int arr[10] = { 0 };
//	printf("%p\n", arr+1);//一般单独的数组名为他的首元素地址
//	printf("%p\n", &arr[0]+1);//地址可以加减 算法
//	printf("%p\n",&arr);
//	printf("%p\n", &arr + 1);//指针每加一  40  四十个字节
//	return 0;//&arr &数组名 数组名不是首元素地址 数组名表示的是整个数组 &数组名 取出的是整个数组的地址  sizeof(arr)-sizeof(数组名)数组名表示整个数组 sizeof(数组名) 计算的是整个数组的大小
//}
//#include <stdio.h>
//int main(){
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		printf("%p===============%p\n", p + i, &arr[i]);
//
//	}//sum p+i ==  &arr[i]
//	return 0;
//} 0变1 2.....9
//#include <stdio.h>
//int main(){
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		*(p + i) = i; //0~9
//	}
//	for (i = 0; i < sz; i++){
//		printf("%d ", *(p + i));//指针位置变换
//	}
//	return 0;
//}
//#include <stdio.h>//指针访问数组
//int main(){
//	int arr[] = { 1, 4324, 4234, 54 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", *(p + i));
//	}
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);//数组下标访问
//	}
//	return 0;
//}
//二级指针
//#include <stdio.h>
//int main(){
//	int a = 9;
//	int* p = &a;
//	int** pp = &p;//二级指针
//	int*** ppp = &pp;//三级指针  类推  n级指针
//	*p = 20;
//	printf("%d\n", **pp);
//	return 0;//a的指针地址存放在p中 p的地址存放在pp里面  *的charm
//}
#include <stdio.h>
int main(){
	//指针数组  是数组  存放的是指针
	int a = 10;
	int b = 2;
	int c = 98;
	/*int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	printf("%p %p %p\n", pa, pb, pc);*///接下来利用指针数组进行操作
	int* p[] = { &a, &b, &c };//0~2 p[i] 值的是地址
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("%d\n", *p[i]);//* 后面接地址 访问
	}//整形数组  字符数组  指针数组
	return 0;
}