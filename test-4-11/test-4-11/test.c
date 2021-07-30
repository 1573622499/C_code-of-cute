#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////操作符分类：算术(整数和浮点数) 移位 位  赋值 单目 关系 逻辑 条件 逗号 下标引用 函数调用和结构成员
//int main(){
//	int a = 5/2;//商2
//	int b = 5 % 2;//余数1 % 只针对整数
//	printf("a=%d b=%d\n", a, b);
//	double c = 5/ 2.0;//2.500000 double 默认保留六位小数 double /至少有一个数是小数
//	printf("c=%lf\n", c);//double 对应打印数型%lf  float %f 单精度和双精度
//	
//	return 0;
//}
//移位操作符 << >>  * /
////<< 左边抛弃，右边补0
//#include <stdio.h>
//int main(){
//	int a = 16;
//	//a 00000000000000000000000000010000(16)
//	//右移操作符>>  有除2的效果 移动的是二进制位 规则：1，算术右移 右边丢弃 左边补符号位+- 整数符号位为0 负数符号位为-1 （一般用的是算术右移）  2,逻辑右移 右边丢弃左边补0
//	//000000000000000000000000001000(8)
//	int b = a >> 1;
//	printf("b=%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = -1;
//	//整数的二进制表示有：原码（表示，打印） 反码 补码（储存,操作）
//	int b = a >> 1;//从原码到补码（进行二进制移位操作）再到原码（进行打印）
//	//a 10000000000...1  （初始化为原码） 11111111111111111111111110   11111111111111111111111111111111
//	//>>操作 111111111111111111111111111111111111111111->100000000000000000000000000000000001(原码) b=-1;
//	printf("b=%d\n", b);//对-1右边移位任意位都为-1（没有变化）
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 5;
//	int b = a << 1;//b=10
//	printf("b=%d\n", b);
//	return 9;
//}
//位操作符：&按位与（同时为1才为1） |按位或（有一个为1就为1） ^按位取反（相同为0 相异为1）注意：操作数必须为整数 针对二进制位
//#include <stdio.h>
//int main(){
//	int num1 = 1;//001
//	int num2 = 2;//010
//	int a = num1&num2;
//	int b = num1 | num2;
//	int c = num1^num2;
//	printf("a=%d\n", a);//0 0
//	printf("b=%d\n",b );//011 3
//	printf("c=%d\n", c);//011 3
//
////	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 3;//011
//	int b = 5;//101
//	int c = a&b;//001
//	printf("c=%d\n", c);//1
//	int d = a | b;
//	printf("d=%d\n",d);//111  7
//	int e = a^b;
//	printf("e=%d\n", e);//110  
//	return 0;
//}
//实现交换两个数(已回三种方法)
//#include <stdio.h>//1创建变量
//int main(){
//	int a = 3;
//	int b = 5;
//	printf("before:a=%d b=%d\n", a, b);//3 5
//	int tmp = 0;//临时变量 空瓶作用
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("after:a=%d b=%d\n", a, b);//5 3
//	return 0;
//}
//#include <stdio.h>
//int main(){//2 加减法
//	int a = 3;
//	int b = 5;
//	printf("before:a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;//a b开始交换 不过可能存在溢出的情况（该数足够大的时候）
//	a = a - b;
//	printf("after:a=%d b=%d\n", a, b);
//	return 0;
//}
//#include <stdio.h>//来源于一道变态的面试题 ^的使用，实现两个数的交换
//int main(){//3^思想 相同为0 相异为1
//	int a = 3;//011
//	int b = 5;//101
//	printf("before:a=%d b=%d\n", a, b);//称a^b为第三者 与两者另一个^ 为另一个
//	a = a^b;//a 110
//	b = a^b;//b  110 101  011(a) a b开始交换
//	a = a^b;//110 011 101(b)
//	printf("after:a=%d b=%d\n", a, b);
//	return 0;
//}
//practice:求一个整数存储在内存中的二进制中1的个数   思路：>> &1 移位统计
//#include <stdio.h>//针对任意整数（全）
//int main(){
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++){//一开始统计的时候不移动
//		if (((a >> i) & 1) == 1){//&按位与 两者同时为1才为1
//			count++;
//		}
//	}
//	printf("%d这个整数储存在内存中的二进制中一的个数为%d\n", a, count);
//	return 1;
//}
//偏
//#include <stdio.h>
//int main(){//不能统计负数的情况 -1%2= -1
//	int a = 10;
//	int count = 0;//作计数器
//	while (a){//统计a的补码中有几个1？   数%2==1？？
//		if (a % 2 == 1){
//			count++;
//		}
//		a = a / 2;
//	}
//	printf("该数存储在的二进制位数中含1的个数位%d\n",count);
//	return 0;
//}
//针对一切整数 存储的二进制为补码 >>往右边移动
//#include <stdio.h>
//int main(){
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;//创建移动位数
//	int count = 0;//计数器
//	for (i = 0; i < 32; i++){
//		if (1 == ((a >> i) & 1)){
//			count++;
//		}
//	}
//	printf("%d中存储的二进制位中含有1的个数为%d\n", a, count);
//	return 0;
//}
//优化一下 unbelievable！
//#include <stdio.h>//num&法- 很难想到！
//int main(){
//	int num = -1;
//	int i = 0;
//	int count = 0;
//	while (num){
//		count++;
//		num = num&(num - 1);//牛批！按位与
//	}
//	printf("二进制中1的个数=%d\n", count);
//	return 0;
//}
//#include <stdio.h> 法1
//int main(){
//	char ch[] = "abcckjkjkljjcc";
//	char* pch = ch;
//	int count = 0;
//	while (*pch){
//		if (*pch == 'c'){
//			count++;
//		}
//		pch++;
//	}
//	printf("%d\n", count);//4
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char ch[] = "abcjksahkhkccc";
//	int count = 0;
//	int i = 0;
//	int sz = sizeof(ch)-2;//-1!   还有一种 strlen(ch)字符长度-1  (最大下标)
//	  //int sz = strlen(ch)-1 ;
//	for (i = 0; i <= sz; i++){//i<=sz? sz的取值？？？important!
//		if (ch[i] == 'c'){
//			count++;
//		}
//	}
//	printf("含c的个数为%d\n", count);//count=4
//	return 0;
//}
//赋值操作符  很棒 可以给自己一个满意的值
//#include <stdio.h>
//int main(){
//	int weight = 120;
//	weight = 80;//在线减肥 变量改变
//	printf("我的体重是%d\n", weight);//80
//	int salary = 10000;
//	salary = 2000000;//在线升薪
//	printf("我的薪水是%d\n", salary);
//	return 0;
//}//赋值从右边往左边进行交换 赋值操作可以连续操作
//复合操作符 += -= /= *= %= >>= <<= &= |= ^=        复合效果
//单目操作符 !逻辑反操作（真假交换） -负值 +正值  &取地值 sizeof 操作数的类型长度（以字节为单位） ~对一个数的二进制数按位取反 --前后置--  ++前后置 *间接访问操作符（解引用操作符） （类型）强制类型转换
//#include <stdio.h>复合操作符演示
//int main(){
//	int a = 10;
//	a = a + 2;
//	a += 2;//复合操作符
//	a = a >> 1;
//	a >>= 1;
//	a = a & 1;
//	a &= 1;
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 10;//真假交换 非零为真 零为假
//	printf("%d\n", !a);//结果为0
//}
//#include <stdio.h>
//int main(){
//	int a = 10;
//	int* pa = &a;//取地值&  scanf  指针对应变量的地址
//	//指针类型 1，解引用时访问内存个数 2，指针跳跃长度（步长）单位为字节 
//	*pa = 20;//*解引用操作
//	printf("a=%d\n", a);//sizeof(指针) 看平台  32平台4个字节  64平台8个字节
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 10;
//	char c = 'r';
//	char* pc = &c;
//	int arr[10] = { 0 };
//	//sizeof（内型or变量） 计算变量所占内存空间的大小，单目操作符 单位是字节
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int ));//4
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(pc));//4 ->该平台为32平台
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof a);//变量可以省略（）
//	//printf("%d\n", sizeof int );//错误写法
//	return 0;
//}
//for ecample
//#include <stdio.h>
//int main(){
//	int a = -10;
//	//int* p = NULL;
//	printf("%d\n", !2);//0
//	printf("%d\n", !0);//1
//	//mistake sizeof(变量内型)大错特错 sizeof(变量)可以
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int[10]));//40//数组的类型为除了数组名的其他部分（segment/section）
//	return 0;
//}
//sizeof(表达式) 里面的表达式没有真实运算
//#include <stdio.h>
//int main(){
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//short 2(s)  The outcome is 2 
//	printf("%d\n", s);//仍然是0 没有真实运算
//
//	return 0;
//}
//~按位取反（0 1交换）
//#include <stdio.h>
//int main(){
//	int a = 0;
//	//00000000000000000000000000   111111111111111111111111111111  11111111111111111111111111(补码)  111111111111111111111111111111110       100000000000000000000001(原码)-1
//	printf("%d\n", ~a);//-1
//	int b = 3;
//	printf("%d\n", ~b);//00000000000000000000000000000000011   整数原码 反码 补码都相同   11111111111111111111111111111111100（补码） 111111111111111111111111011  1000000000000000000000100（-4）
//	int c = 2;
//	//000000000000000000000010   1111111111111111111111111111111101         1111111111111111111111111111100        1000000000000000000000011(-3)
//	printf("%d\n", ~c);
//	return 0;
//}
//11->15
//#include <stdio.h>
//int main(){
//	int a = 11;
//	int b=a | (1 << 2);//表达式需要接收
//	printf("b=%d\n", b);
//	return 0;
//}
//15->11
//#include <stdio.h>
//int main(){
//	int a = 15;
//	a = a&(~(1 << 2));
//	printf("a=%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 10;
//	//printf("%d\n", ++a);//11
//	printf("a=%d\n", a);//11
//	int b = ++a;//b=10
//	int c = a++;//11
//	printf("c=%d\n", c);
//	printf("b=%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = (int)3.14;//注意是在值的前面（转换类型）
//	printf("a=%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main(){//sizeof(数组名)代表所有元素储存空间大小 函数传实参的时候 传入的是数组首元素地址  形参应该要用指针来接受（地址）
//	void test1(int arr[]);
//	void test2(int arr[]);
//	int arr[10] = { 0 };
//	char ch[10] = { 0 }; 
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//void test1(int arr[]){
//	printf("%d\n", sizeof(arr));
//}
//void test2(int ch[]){
//	printf("%d\n", sizeof(ch));
//}
//关系操作符 > >=  < <= !="用于测试不相等 "  =="用于测试相等" 注意 =赋值  ==判断相不相等
 //逻辑与&&  逻辑或|| &&两者都为真才为真 ||两者有真则真
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 5;
//	int c = a || b;//1 (真)
//	printf("c=%d\n", c);
//	int d = a&&b;//0 &&必须要两者同时为真才为真 或之为假
//	printf("d=%d\n", d);//0
//
//	return 0;
//}
//insert 360面试题
//#include <stdio.h>
//int main(){
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++&&++b&&d++;//0&&=0 其余表达式不用计算的！  1234
//	i=a++||++b||d++;//0||3|| 其余表达式不用算的！  1334
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//	return 0;
//}
//ifa=1?
//#include <stdio.h>
//int main(){
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++&&++b&&d++;2335
//	i = a++||++b||d++;//2234 真||后面的内容不用算了!
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);//
//	return 0;
//	}
//条件操作符 exp1?exp2:exp2;
#include <stdio.h>
//int main(){
//	//求两个数的较大值（包含函数，指针求法）
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b){
//		printf("较大值为%d\n", a);
//	}
//	else{
//		printf("较大值:%d\n", b);
//	
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int d = a > b ? a : b;
//	printf("较大值:%d\n", d);
//	return 0;
//}
//函数实现
//#include <stdio.h>
//int main(){
//	int MAX(int x, int y);//函数申明
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int d = MAX(a, b);
//	printf("较大值：%d\n", d);
//	return 0;
//}
//int MAX(int x, int y){//函数定义
//	return x > y ? x : y;
//}
//指针实现
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//加入输入也没有问题
//	int* pa = &a;
//	int* pb = &b;
//	//int c = *pa > *pb ? *pa : *pb;
//	if (*pa > *pb){
//		printf("较大值：%d\n", *pa);
//	}
//	else{
//		printf("较大值：%d\n", *pb);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	if (a > 5){
//		b = 3;
//	}
//	else{
//		b = -3;
//	}
//	printf("b=%d\n", b);//-3
//	//a>5?b=3:b=-3;
//	return 0;
//}
//逗号表达式
//#include <stdio.h>
//int main(){
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//(,,,,)逗号表达式 执行的最终结果为最后一个逗号后的表达式 假（0），12，12，13 从左往右依次计算
//		printf("c=%d\n", c);//13 仔细观察！！！
//	return 0;
//}