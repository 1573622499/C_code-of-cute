#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(){
//	int ch = 0;
//	while ((ch = getchar()) != EOF){//scanf对应的是getchar
//		putchar(ch);//对应的printf函数-putchar
//	}
//	return 0;
//}
//
//结构体struct
//#include <stdio.h>
//struct book{
//	char name[20];
//	int price;
//};
//int main(){
//	struct book b={ "C语言程序设计",15 };
//	printf("书名：%s\n", b.name);
//	printf("价格：%d\n", b.price);
//	struct book* pb = &b;
//	printf("%p\n", b);
//	printf("书名：%s\n", (*pb).name);
//	printf("书名：%s\n",pb->name);
//		printf("价格：%d\n", pb->price);
//张三18岁 性别男 
//#include <stdio.h>
//struct person {
//	char name[20];
//	int age;
//};
//int main(){
//	struct person b = { "张三", 18 };
//		printf("姓名：%s\n", b.name);
//	printf("年龄：%d\n", b.age);
//	struct person* pb = &b;
//	b.age = 20;
//	printf("姓名：%s\n", (*pb).name);
//	printf("姓名：%s\n", pb->name);
//	printf("年龄:%d\n", pb->age);
//	return 0;
//}//复读机程序
//#include <stdio.h>
//int main(){
//	int ch = 0;
//	while ((ch = getchar()) != EOF){
//		putchar(ch);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	char password[20] = { 0 };
//	int ch = 0;
//	int ret = 0;
//	printf("请输入密码：>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N)：>");
//	while ((ch = getchar()) != '\n'){
//		;
//	}//让\n一直读取，直到\n出现
//	ret = getchar();
//	if (ret == 'Y'){
//		printf("确认成功\n");
//	}
//	else{
//		printf("确认失败\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char arr1[] = "bit";
//	char arr2[] = "##############";
//	char arr3[] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr1);strcpy:拷贝字符串到对应数组
//	strcpy(arr3, "fuck you!");
//	printf("%s\n", arr3);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	char ch[] = "hello world";
//	memset(ch, "*", 5);//memset 可以把字符串进行覆盖，即内存设置
//	printf("%s\n", ch);
//	return 0;
//}
//
//
//get_max;利用函数进行实现
//#include <stdio.h>
//int get_max(int x, int y){
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("较大值：%d\n",max);
//	max = get_max(980, 100);
//	printf("max=%d\n", max);
//	return 0;
//}
//#include <stdio.h>
//get_max(int x, int y){
//	return (x > y ? (x) : (y));
//}
//int main(){
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数用于判断大小:>");
//	scanf("%d%d", &a,& b);
//	int max=get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//利用函数交换两个数（普通方法已知三种）
//#include <stdio.h>
//void Swap(int* pa, int* pb){//why?不能实现交换数字：x,y(形参)与 a,b(实参)无关，所在的地址不同，若要改变a,b的值 需要按值变换
//
//	int tmp = 0;
//		tmp = *pa;
//	*pa= *pb;
//	*pb= tmp;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a,b);
//	return 0;
//}
//利用函数判断一个数是不是素数（100~200）
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n){
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++){
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main(){
//	int i = 0;
//	for (i = 100; i <= 200; i++){
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//利用函数写出闰年（1000~2000）
//#include <stdio.h>
//int is_let_year(int y){
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main(){
//	int year = 0;
//	for (year= 1000; year <= 2000; year++){
//		if (1 == is_let_year(year))
//			printf("%d ", year);
//	}
//	return 0;
//}
//二分查找 利用函数针对有序数组
#include <stdio.h>
int binary_search(int arr[],int k,int sz){
	int left = 0;
	int right = sz - 1;
	while(left<=right){
		int mid = (left + right) / 2;
		if (arr[mid] > k){
			right = mid - 1;
		}
		else if (arr[mid] < k){
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 18;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);
	if (ret == -1){
		printf("没有找到该数字\n");
	}
	else {
		printf("找到了，下标：%d\n", ret);
	}
	return 0;
}