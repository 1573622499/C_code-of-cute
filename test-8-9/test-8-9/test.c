#define _CRT_SECURE_NO_WARNINGS 1
//操作符复习
//测试  交换两个整形的值
#include <stdio.h>
int main(){
	/*int num1 = 0;
	int num2 = 0;
	printf("请输入两个整数\n");
	scanf("%d%d", &num1, &num2);
	printf("交换前:num1=%d num2=%d\n", num1, num2);*/
	//int tmp = num1;//空瓶思想
	//num1 = num2;
	//num2 = tmp;
	/*num1 = num1^num2;
	num2 = num1^num2;
	num1 = num1^num2/密码思想 c=a^b   a b 交换  a=c^b  b=c^a*/
	//num1 = num1 + num2;
	//num2 = num1 - num2;
	//num1 = num1 - num2;//可能溢出
	//printf("交换后:num1=%d num2=%d\n", num1, num2);
	//统计一个整数 二进制位中（存储中）补码-含'1'的个数
	//1.
	//int n = 0;
	//printf("请输入一个整数:>");
	//scanf("%d", &n);
	//int count = 0;//统计二进制位中‘1’的个数
	//// 十进制  123    1 2 3（0~9） 如何得到% /
	//while (n){
	//	if (n % 2 == 1){
	//		count++;
	//		n /= 2;
	//	}
	//}
	//printf("%d的补码中含有%d个‘1’\n", n, count);
	//2.
	//int n = 0;
	//scanf("%d", &n);
	//int i = 0;
	//int count = 0;
	//for (i = 0; i < 32; i++){
	//	//& 两个整数同时为‘1’才为1 否则为0
	//	if (((n >> i) & 1) == 1){
	//		count++;
	//	}

	//}
	//printf("%d\n", count);
	//补充常识：补码全为1 -  -1
	//3.
	/*int n = 0;
	int count = 0;
	scanf("%d", &n);
	while (n){
		count++;
		n=n&(n - 1);//  巧
		// 3(011)    3(011)&2(010)=010(2) 1    (010)&(001)=000 1   n=0 结束 精妙之处     

	}
	printf("%d\n", count);*/

	//操作符：算术 移位 位 赋值 单目 关系 逻辑 条件 逗号 下标引用 函数调用 结构成员
	//   /（商）   %(对整数)余数
	//>>一般使用(算术【右边丢弃，左边补符号位（0/1）】/逻辑（右边丢弃，左边取0）)  <<（左边丢弃，右边补0）  >>/2   <<*2
	/*int a = 16;
	a >>= 1;*/
	//printf("a=%d\n", a);//8  左右 */
	//int b = -1;
	//b >>=90;//-1右移无数位 始终为-1 算术移位（左边补符号位）
	//printf("%d\n", b);//-1
	//int a = 5;
	//101  左移  1010（10）
	/*printf("%d\n", a <<= 1);
	整数的二进制位表示有：原码、反码、补码 （其中整数原反补相同、负数不同）  存储到内存是补码
		移位运算符 ，不要移动负数为  如：a >> -1(未定义)*/
//位操作符:& | ^
	//int a = 3;//011
	//int b = 5;//101
	//printf("%d\n", a&b);//001  1 
	//printf("%d\n", a|b);//111  7
	//printf("%d\n", a^b);//110  6
	//=赋值操作符 重新赋值给变量
	//int a = 0;
	//if (!a){//！的使用场景
	//	printf("hello\n");
	//}
	int a = 0;
	int* p=&a;
	*p = 20;//*解引用操作符  间接访问操作符
//*p通过a的地址  找到a改变它的值
	//单目操作符：！ - + & sizeof()[计算变量在内存中所占空间大小（单位是字节）]   ~ -- ++ * ()类型强制转换
	//sizeof（数组名）没有不为实参 表示数组
	return 0;
}

