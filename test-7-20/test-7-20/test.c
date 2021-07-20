#define _CRT_SECURE_NO_WARNINGS 1
//局部变量在{}里面，局部变量出了在main函数里 在其他函数（自定义）{}定义用 出{}生命周期就结束了
//全局变量在{}外面
//常量（四种）
//1.字面常量
//12 33 值  2 = 3（不能这样写）常量就是不能变的量   变量 = 常量 （ok）
//2.const 变量->带有常数性质的变量 实际上还是变量 但是 变量不变
//const int a = 10//这里的a不能在变化了 不让就会报错
//3.#define Max 10 (后边不需要跟； Max代表的是常量 在常量用的地方就可以使用 如 数组[])
//4.枚举常量
//enmu SEX{
//	Male;
//	Female;
//	Secret
//};
//
//使用格式 enum SEX s = 枚举常量;
//#include <stdio.h>
//#include <string.h>
//int Seach(int arr[], int arrsize){//注意看个数  因为是从0开始的 就可以不用等于
//	int x = 0;
//	for (int i = 0; i < arrsize; i++){//将x与数组每个元素异或
//		x ^= arr[i];
//	}
//	for (int j = 0; j < arrsize + 1; j++){//将x又与0~N异或
//		x ^= j;
//
//	}
//	return x;//ret再接收x
//
//
//}
//int main(){
	//字符串
	/*char ch[] = "abjajdh";*/
	//ch就是字符串首元素的地址  打印字符串的时候利用首元素地址进行打印  注意字符串以\0结束 '\0'不算字符串的内容
	//还有一种存字符串的方法 利用字符指针 char* p="hakdh";   p相当于字符串首元素的地址
	/*char* p = "hakdh";
	printf("%s\n", ch);
	printf("%s\n", p);*\? 阻断形成三字母符
	//打印？？（可以组合成为三字母符） ‘  ”
	//''->字符  ""->字符串/	//printf("%c\n", '\'');//   \转义序列符
	//printf("%c\n", '\"');
	//printf("%c\n", '\\');
	//转移字符  \t \n \a \ddd   \xdd 先转换成十进制的Ascii码值对应的字符  */
	/*printf("%c\n", '\x61');*///61(H)->6*16^1+1*16^0=97(D)  对应 a     0(48)  A(65) a(97)  大小写字母相差32
	//注释的作用：解释代码 帮助人理解
	//选择语句
	/*int input = 0;
	printf("加入比特学习\n");
	printf("是否好好学习（1/0）:>");
	scanf("%d", &input);
	if (1 == input){
		printf("好offer\n");
	}
	else{
		printf("回家卖红薯吧！\n");
	}
	*/
	//循环语句->敲20000行代码有好offer
	//int line = 0;
	//while(line<20000){
	//	printf("敲一行代码:%d\n,", line);
	//	line++;//每敲一行代码行数加一
	//
	//}
	//if (line >= 2000){
	//	printf("好offer\n");
	//}
	//寻找一个数（0~N）中缺少的数

	//int arr[] = { 5, 6, 8, 9, 4, 3, 0, 2, 1 };//9个数   实际上是10个数（0~9）
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int ret=Seach(arr, sz);
	//printf("%d\n", ret);//再将这个数打印在显示台上










//	
//	return 0;
//}
#include <stdio.h>
//#include <stdlib.h>
//Sum:
//满足O（N）复杂度
int XorSeach(int* p, int psize){//传入数组和数组元素个数
	int x = 0;
	for (int i = 0; i < psize; i++){
		x ^= p[i];//让x与数组每个元素异或
	}
	for (int j = 0; j < psize + 1; j++){//因为包含0 所以最大为9
		
		x ^= j;//继续与0~N的数字异或
	}

	return x;//ret再接收

}
int main(){
	//找0~N中少的那个数 Approach（1.排序（捞）   2.求和-求和    3.异或）
	int arr[] = { 5, 6, 2, 8, 9, 7, 0, 1, 4 };//默认缺少数字是3  数组一共9个数   实际共十个数（0~9） 包含零
	int sz = sizeof(arr) / sizeof(arr[0]);//统计数组元素个数
	int ret = XorSeach(arr, sz);
	printf("%d\n", ret);//打印缺少的数字  3
	//system("pause");//暂停
	return 0;
}