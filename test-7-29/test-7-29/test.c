#define _CRT_SECURE_NO_WARNINGS 1
//static + 局部变量 改变局部变量的生命周期（变长）局部变量在一段时间不销毁
//static + 全局变量 改变全局变量的作用域   当extern的时候无法访问全局变量
//static + 函数 改变函数的链接属性 内部链接属性->外部链接属性
//赋值（非零）->容易死循环
//for（int i = 0; i < 10; i++ ）{
//	if (i = 5)
//	printf("%d\n", i);//打印5死循环
//}
//switch ()语句中case default 顺序没有局限 只要没有break 就继续执行语句
//1、三个数大到小输出 (反面 交换两个数 )
////2、三的倍数
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++){
//		if (i % 3 == 0)//表示数能够被三整数 即是三的倍数
//		{
//			printf("%d ", i);
//			count++;//统计能被三整除数的个数
//		}
//	}
//	printf("\n能被3整除的数有%d个\n", count);
//	return 0;
//}scanf("格式一致")商（/） 余数（%）
//3、最大公约数->辗转相除法
//m 24 n 18 用大的数去%小的数 如果m%n==0 n(除数)就是最大公约数 令r=m%n  交换 m=n n=r 继续% 就可以找到最大公约数 
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;//r用来接收m%n的值
//	printf("请输入两个数:>");
//	scanf("%d%d", &m, &n);
//	while (r = m%n){//如果m%n==0 最大公约数（n）找到 并且结束循环
//	//r = m%n;
//		m = n;
//		n = r;//交换继续 辗转相除法
//		//证明变量和变量可以进行交换
//	}
//	printf("最大公约数为:>%d\n", n);
//
//	return 0;
//}
//4、判断闰年
//两个条件： 1、能被4整除并且不能被100整除 2、能被400整除
//打印1000~2000之间的数 统计闰年个数
//#include <stdio.h>
//int main(){
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++){
		//一般for循环初始化和判断 采用左闭右开原则最好 了解循环次数
		//if (year % 4 == 0 && year % 100 != 0){
		//	printf("%d ", year);
		//	count++;
		//}
		//else if (year % 400 == 0){//这里采用双分支 可以简化合并

		//	printf("%d ", year);
		//	count++;
		//}
//		if (((year%4==0) && (year%100!=0)) || (year % 400 == 0)){//两个条件一起合并
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n1000~2000年份中是闰年的有%d年\n", count);
//
//	return 0;
//}
//5、素数（仅仅能被自己和1整除的数） 试除法（2~i-1）进行% if:全部都不能被整除 即是素数
//推荐：素数求解的n种境界   注意：素数存在在奇数中
//#include <stdio.h>
//int main(){
//	//试除法求解
//	//判断i是否为素数
//	int i = 0;
//	int j = 0;
//	printf("请输入一个数并且判断是否为素数:>");
//	scanf("%d", &i);
//	while(1){
//		for (j = 2; j < i; j++){
//			if (i%j == 0)
//				break;//跳出循环  //两种 第一种：不是素数 第二种（2~i-1）之间的数都不能被整除->因此需要判断
//		}//break直接跳出循环 因此还需要一层循环
//		if (j == i){
//			printf("%d是素数\n");
//			break;//然后跳出循环
//		}
//		if (j < i){
//			printf("%d不是素数\n", i);
//			break;
//		}
//	}
//	return 0;
//}
//判断200~300之间的素数 并且统计素数个数
//#include <stdio.h>
//#include <math.h>
//int main(){
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 201; i <= 300; i+=2){//优化1、素数在奇数中 i+=2  i=i+2 两者的等价
//		for (j = 2; j <= sqrt(i); j++){//优化2、 i=a*b(分解两个数)a/b <=sqrt(i) 这个数开平方<i/2
//			if (i%j == 0)//将i-1换为 sqrt(i)  如果在sqrt()之前都没找到能被整除的数 之后就不会有了
//				break;//优化3、利用数学知识在进行放缩 将上限替换成i/2
//		}
//		if (j>sqrt(i)){//不能被整除 即为素数
//			printf("%d ", i);//天然跳出循环 对立条件
//			count++;
//		}
//	}
//	printf("\n200~300之间含有%d个素数\n", count);
//	return 0;
//}
//i=a*b(拆分两个因式) a/b< sqrt(i) < i / 2放缩
//数九(1~100之间)的个数
//#include <stdio.h>//取%的时候 %10 余数0(整除)~9
//int main(){
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++){
//		if (i % 10 == 9)//九存在的位置 个位 十位
//		{
//			printf("%d ", i);
//			count++;
//		}//统计个位为9的数 
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//			//统计十位为9的数
//		}
//	}
//	//99  ->   个位和十位分别算一次
//	printf("\n1~100之间的数含有9的一共有%d个\n", count);
//	return 0;
//}
//分数求和  1/1+1/2+1/3+...1/100?
//#include <stdio.h>
//int main(){
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++){//加减交错
//		sum +=flag* 1.0 / i;//浮点数分子分母至少有一个为浮点数 结果才为浮点数
//		flag = -flag;//正负交错
//	}
//	//printf("1/1+1/2+1/3+...+1/100=%lf\n", sum);
//	printf("1/1-1/2+1/3+1/4+...-1/100=%lf\n", sum);
//	return 0;
//}
//十个数最大值 循环
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 30, 70, 59 };//求出最大值 70
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int max = arr[0];//为什么不将max初始化为0 因为0可能为最大值 （数组全为负数）
//	for (i = 0; i < sz; i++){
//		if (max < arr[i])
//			max = arr[i];//如果max小于数组的元素 就将那个元素赋给max
//	}
//	printf("最大值为%d\n", max);
//	return 0;
//}
//九九乘法表
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++){//确定九行  n列n行 用行数控制列数
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%-2d ", i, j, i*j);//打印每一行的内容
//		}//%d->打印整数 %2d打印两个位置（没有内容空格补齐）%-2d(打印两个位置并且左对齐)
//		printf("\n");//每一行内容结束后换行
//	}
//
//
//
//
//
//	return 0;
//}
//另一种格式
//1*1 1*2 ......1*9
//2*1  2*2...重复的式子
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++){
//		for (j = 1; j <= 9; j++){
//			printf("%d*%d=%d\t ", i, j, i*j);//\t为转义字符 水平制表符
//		}
//		printf("\n");
//	}
//	return 0;
//}
//二分查找->有序数组
//#include <stdio.h>
//int main(){
//	void BinSearch(int arr[], int sz, int k);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//假设找7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BinSearch(arr, sz,k);//二分查找（折半查找）函数 并且传参
//
//
//	return 0;
//}
//void BinSearch(int arr[], int sz,int k){
//	int left = 0;//确定左下标
//	int right = sz - 1;//确定右下标
//	while (left <= right){
//		int mid = (left + right) / 2;//统计中间下标 准备进行折半查找
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			printf("找到了！下标为%d\n", mid);
//			break;//当找到这个数就利用break跳出循环
//		}
//	}
//	if (left>right){
//		printf("没有发现这个数\n");
//	}
//}
//创建随机数 rand(); -> srand(变化的数)->srand((unsigned int)time(NULL));时间函数 （返回一个整形）time(指针)
//猜数字游戏
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu(){
//	printf("********************************************\n");
//	printf("*******1.Play                  0.Exit*******\n");
//	printf("********************************************\n");
//
//}
//void game(){
//	int guess = 0;//rand() 0~三万多  %100 余下0~99 +1  1~100
//	int ret = rand() % 100 + 1;//1~100
//	printf("随机数已由系统自动生成\n");
//	while (1){
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess>ret){
//			printf("猜大了!\n");
//		}
//		else if (guess < ret){
//			printf("猜小了!\n");
//		}
//		else{
//			printf("恭喜你，猜对了！随机数为%d\n", ret);
//			break;//当猜对随机数时退出循环 继续游戏
//		}
//	}
//}
//int main(){
//	int input = 0;
//	srand((unsigned int)time(NULL));//利用时间戳创建随机数
//	do{
//		menu();//创建菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("即将退出游戏\n");
//			break;
//		default:
//			printf("输入错误 请重新输入\n");
//			break;
//
//		}
//
//	} while (input);//if input为0 结束循环
//
//
//	return 0;
//}
//计算机开始时间 1970年1月1日 00：00：00  时间戳当前时间减去计算机开始时间 （秒）
//goto 语句 一般针对 从循环嵌套中出来 
//goto again://一般不建议使用 容易打乱代码执行顺序 逻辑
//again:
//一个简单的关机程序
#include <stdio.h>
#include <stdlib.h>//system库函数 需要引对应头文件
#include <string.h>
int main(){
	char input[20] = { 0 };
	system("shutdown -s -t 60");//系统命令 计算机将在一分钟后关机
	printf("你的电脑将在一分钟后自动关机，IF：输入“我是猪”则取消关机\n");
	//again:
	//printf("请输入;>");
	//scanf("%s", input);
	//if (strcmp(input, "我是猪") == 0){
	//	system("shutdown -a");//系统指令 取消关机
	//}
	//else{
	//	goto again;
	//}
	//利用循环
	while (1){
		printf("请输入;>");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0){
			system("shutdown -a");//系统指令 取消关机
			break;
		}
	}
	return 0;
}







