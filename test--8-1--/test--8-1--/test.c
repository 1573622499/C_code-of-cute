#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "sum.h"//引自己的头文件使用“” 会将头文件中的全部内容拷贝
//int main(){
//	printf("hehe\n");
//	main();//一个简单的递归
//	//递归：函数自己调用自己  把大事化小
//	//两个必要条件：1、存在限制条件，当不满足条件的时候 递归停止 2、每次递归调用之后越来越接近这个限制条件
//	return 0;
//}
//一次打印一个整数 如：1234 1 2 3 4
//int main(){
//	void print(int);//函数申明可以在main（）函数里面也可以在外面
//	int n = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &n);
//	print(n);
//	//1234%10=4  1234/10=123 %...
//
//	return 0;
//}
//void print(int i){//1234
//	if (i > 9)
//		print(i / 10);// print(1234) print(123)  print(12) print(1) 打印1 返回上一次递归调用的地方继续执行下面的代码
//		printf("%d ", i % 10);//先递归再执行后面的代码
//注意上面没有else 递归完了之后回到上一个递归 继续执行下面的代码
//strlen() 求字符串长度 不允许创建临时变量 自定义函数
/*int My_strlen(char* str){
int count = 0;
while (*str != '\0'){
count++;
str++;
}
return count;
}*/
//不允许创建临时变量 递归
//int My_strlen(char* p){//My_strlen(abc)   1+My_strlen(bc)  1+1+My_strlen(c) 1+1+1+My_strlen('\0')
//	if (*p == '\0')
//		return 0;
//	else
//		return 1 + My_strlen(p + 1);//指针往后 直至出现'\0'
//
//}
//int My_strlen(char* p){
//	if (*p == '\0')
//		return 0;
//	else
//	{
//		p++;//指针往后值+1
//		return 1 + My_strlen(p);
//	}
//}
void print(int n){
	if (n > 9)
		print(n / 10);//递归结束后会出到递归调用这里
	printf("%d ", n);
}
int My_strlen(char* p){
	if (*p != '\0')
		return 1 + My_strlen(p + 1);
	else
		return 0;
}//递归结束后会反回返回值到上一次递归的位置

//阶乘 n！ n*(n-1)*...2*1
int Factor(int n){
	if (n == 1)
		return 1;
	else
		return n*(n - 1)
}//斐波那契数列 后一个数等于前一个数+前两个数之和
int Fibonq(int n){
	if (n < 3)
		return 1;
	else
		return Fibonq(n - 1) + Fibonq(n - 2);

}
int main(){
	char arr[] = "hello bit";
	int len = 0;
	len = My_strlen(arr);
	printf("%d\n", len);
	return 0;
}







