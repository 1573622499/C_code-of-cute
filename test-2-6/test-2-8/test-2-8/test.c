//#include <stdio.h>
//int main(){
//	/*int a = 10;
//	if (1)
//		printf("%d\n", a);*/
//	int age = 120;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}
//
//判断一个数是否为基数
//
//
//
#define _CRT_SECURE_NO_WARNINGS 1
//
//
//
//求两个数的较大值
//
//巧妙运用函数思想
//
#include <stdio.h>
//int MAX(int x, int y){
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
int sum(int x, int y){
	int z = x + y;
	return z;
}
int main(){
	///*int a = 10;
	//int arr[] = { 1, 2, 2, 3 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof (int));
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));*/
	/*printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long long));*/
	/*int a = 3;
	int b = ~a;
	printf("%d\n", b);*/
	/*int a = 10;
	int b = --a;
	printf("%d %d\n", b, a);*/
//double a =(int) 3.14;
//	printf("%d\n", a);
	/*int a = (int)3.14;
	printf("%d\n", a);*/
	/*int a = (int)3.145;
	printf("%d\n", a);*/
	//int a = 0;
	//int b = 9;
	//int c = a||b;//必须是两者都为真时，输出的结果才为1（真），否则为0（假）
	//printf("%d\n", c);
	//int a = 10;
	//int b = 20;
	//int max = (a > b ? a : b);//条件操作符
	//printf("较大值：%d\n", max);
	//int a = 10;
	//int b = 29;
	///*if (a > b){
	//	printf("较大值:%d\n", a);
	//}
	//else{
	//	printf("较大值：%d\n", b);
	//}*/
	//int max = MAX(a, b);
	//printf("较大值：%d\n", max);
	/*int i = 0;
	int nve = 0;
		int ten = 0;
	int hun = 0;
	for (i = 100; i < 1000; i++){
		nve = i % 10;
		ten = i / 10 % 10;
		hun = i % 100;
		if (i == nve*nve*nve + ten*ten*ten + hun*hun*hun){
			printf("水仙花数: %d\n", i);
		}
	}*/
	int a = 0;
	int b = 0;
	scanf("%d%d", a, b);
	int c = sum(a, b);
	printf("和%d\n", c);
	return 0;
}
