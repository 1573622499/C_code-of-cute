#define _CRT_SECURE_NO_WARNINGS 1
//模拟登录
//#include <stdio.h>
//#include <string.h>
//int main(){
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++){
//		printf("请输入密码,一共有三次机会:>");
//		scanf("%s", &password);
//		if (0 == strcmp(password, "123456")){
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (i == 3){
//		printf("三次机会已经用完，即将退出程序\n");
//	}
//	return 0;
//}
//
//To be continue
//#include <stdio.h>
//int main(){
//	//实现函数加法
//	int ADD(int x, int y);//函数的申明
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);//sum=30
//	printf("sum=%d\n",sum);//注意变量对应
//	return 0;
//}
//int ADD(int x, int y){
//	//int z = x + y;
//	//return z;
//	//return x + y;
//	return (x + y);
//}
//函数是什么？数学中我们常见到函数的概念，但是你了解c语言中的函数嘛？维基百科的定义（definition）:子程序
//c语言中的函数分类：1、库函数 2、自定义函数
//为什么会有库函数？ 1、我们知道在我们学习c语言编程的时候，总是在一个代码编写完成后迫不及待的想知道结果，想把这个结果打印到我们屏幕上来看看。这个时候我们会频繁的使用一个功能：将信息按照一定的格式打印到频幕上（printf）;
//2、在编程的过程中我们会频繁的做一些字符串拷贝的工作（strcpy）
//3、在编程的时候我们也计算，总是会计算n的k次方这样的运算（pow)
//像上面我们描述的基础功能，它们不是业务性代码。我们在开发的过程中每个程序员都可能用的到，为了支持可移植性和提高程序的效率，所以c语言的基础提供了一系列类似的库函数，方便程序员进行软件开发。
//学习库函数  web  www.cplusplus.com
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char arr1[] = "bit";
//	char arr2[] = "#############";
//	//bit\0 \0也被拷贝了！
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy-string copy-字符串拷贝
//	//strlen-string length-字符串长度有关
//	char str[20] = { 0 };
//	//strcpy(str, "723897");
//	strcpy(str,"woxihuanni");
//	printf("%s\n", str);
//	return 0;
//}
//strcpy
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char ch1[] = "qiusen";
//	char ch2[] = "******";
//	strcpy(ch2, ch1);
//	printf("%s\n", ch2);
//	return 0;
//}
//memset memory-内存 set设置  以替换  格式  memset(数组名,‘符号’,个数)
//#include <stdio.h>
//int main(){
//	char arr[] = "hello world";
//	memset(arr, '#', 5);
//	printf("%s\n", arr);
//	//##### world
//	return 0;
//}
//两个网站 关于学习c语言库函数  www.cplusplus.com   http://en.cppreference.com
//自定义函数 都有函数名、返回值、函数参数。但是不一样的是这些都是我们自己来设定的：
//例子：写出一个比较两个整数中的较大值
//#include <stdio.h>
//int Getmax(int x, int y){
//	return x > y ? x : y;
//}
//int main(){
//	int a = 3;
//	int b = 5;//可增加输入再进行比较
//	int c = Getmax(a, b);
//	printf("较大值：%d\n", c);
//	return 0;//函数体交代的是函数的实现
//}
//#include <stdio.h>
//int get_max(int x, int y){//函数定义
//	if (x > y){
//		return x;
//	}
//	else return y;
//	//return x>y?x:y;//利用三目操作符
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//函数的使用
//	printf("max=%d\n", max);
//	max = get_max(122, get_max(2,7));
//	printf("max=%d\n", max);
//	return 0;
//}
//比较三个数的大小并且求出较大值 不用数组
//#include <stdio.h>
//int get_max(int x, int y, int z){
//	if (x > y&&x > z){
//		return x;
//	}
//	else if (y > x&&y > z){
//		return y;
//	}
//	else if (z > x&&z > y){
//		return z;
//	}
//		
//	
//}
//int main(){
//	int a = 2;
//	int b = 7;
//	int c = 8;
//	int max = get_max(a, b, c);
//	printf("max=%d\n",max);
//	return 0;
//}
//交换两个数的值（三种 1、加减法 2、^ 3、创建变量进行交换） 加用函数实现 指针
//#include <stdio.h>
//void Swap(int* x, int* y){
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;//成功交换
//}
//int main(){
//	int a = 3;
//	int b = 5;
//	printf("before:a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("after:a=%d b=%d\n", a, b);
//	return 0;
//}
//#include <stdio.h>//最基础的指针思想
//int main(){
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作符（*）
//	printf("a=%d\n", *pa);
//	return 0;
//}
//互相对应 函数参数的传递  从实参（确定的值）到形参[形式上的参数]（对应形参参数 仅在函数中生效  当函数调用完成之后就自动销毁） 常量、变量、表达式、函数
//注意：当实参传给形参的时候
//形参其实是实参的一份临时拷贝（copy）
//函数调用：传值调用:对形参的更改不会影响实参    传址调用（改变值）用指针：传地址 这种传参方式可以让函数的函数外边的变量建立起真的联系，也就是函数内部可以直接操作函数外的变量
//  利用函数实现判断一个数是不是素数   判断一个数是不是闰年  实现整形有序数组二分查找    每次调用这个函数，num将+1;
//100~200素数
//#include <stdio.h>
//int is_prime(int n){
//	int c = 0;
//	for (c = 2; c < n; c++){//c<=sqrt(n)(条件交换)
//		if (n%c == 0){
//			return 0;//对应思想
//		}
//	}
//	return 1;
//}
//int main(){
//	int i=0;
//	for (i = 100; i <= 200; i++){
//		//判断i是否为素数
//		if (is_prime == 1){//利用返回值进行判断
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//利用函数打印1000~2000之间的闰年年份
//#include <stdio.h>
//int is_runnian(int n){//The code is real
//	if ((n % 4 == 0) && (n % 100 != 0) || n % 400 == 0)
//		return 1;
//	else return 0;
//}
//int main(){
//	int i = 0;
//	for (i = 1000; i <= 2000; i++){
//		if (1 == is_runnian(i)){
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//num每次都增加1
//#include <stdio.h>
//void get1(int n){
//	while (1){//一般用for循环 考虑一下while  再者对于游戏操作用do while 循环
//		n = n + 1;
//		printf("num=%d\n", n);
//	}
//}
//int main(){
//	int num = 0;
//	get1(num);
//	return 0;
//}
//#include <stdio.h>
//void ppp(int n){
//	if (n > 9){
//		ppp(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//int main(){//1234  1  2  3  4
//	int num = 0;
//	scanf("%d", &num);
//	ppp(num);
//	return 0;
//}
//不允许创建变量，求字符串的长度
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char aa[] = "abc";
//	int len = strlen(aa);
//	printf("%d\n", len);
//	return 0;
//}
//#include <stdio.h>//利用指针移动进行计算(以\0为标志)    str
//int my_strlen(char* pa){
//	int count = 0;
//	while (*pa!='\0'){
//		count++;
//		pa++;
//	}
//	return count;
//}
//int main(){
//	char ch[] = "kdjlka";//6
//	int len = my_strlen(ch);//数组名 除了sizeof()  strlen() 都表示首元素地址
//	printf("个数：%d\n", len);
//	printf("%d\n", strlen(ch));
//	return 0;
//}
//递归的方法
//#include <stdio.h>
//int my_strlen(char* parr){
//	if(*parr!='\0'){ // 依次指向 b i t \0
//		return 1 + my_strlen(parr+1);//指针移动一步
//	}//my_strlen("bit")    1+my_strlen("it")  1+1+my_strlen("i")  1+1+1+my_strlen("(\0)")  1+1+1+0=3
//	else 
//		return 0;
//}
//int main(){
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("该字符串的长度:%d\n", len);
//	return 0;
//}
//n的阶乘
//#include <stdio.h>//递归思想
//int mil(int s){
//	if (s == 1){
//		return 1;
//	}
//	else return s*mil(s - 1);
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int sum = mil(n);
//	printf("sum=%d\n", sum);
//}
//#include <stdio.h>
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int s = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++){
//		s *= i;
//	}
//	printf("%d的阶乘为：%d\n", n,s);
//	return 0;
//}