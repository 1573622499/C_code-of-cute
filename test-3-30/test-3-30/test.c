#define _CRT_SECURE_NO_WARNINGS 1
//整形提升
#include <stdio.h>
int main(){
	char a = 3;//3为整形  二进制位应该为32个bit位 00000000000000000000000000000011   存放在char里八个bit位  00000011截取最小单元
	char b = 127;// 01111111
	char c = a + b;//二进制进行运算  10000010 整形提升以符号位  11111111111111...10000010补码 存储 1111....10000001   1000...01111110 原码打印  -126
	printf("c=%d\n", c);//c为整形打印 
	return 0;
}

