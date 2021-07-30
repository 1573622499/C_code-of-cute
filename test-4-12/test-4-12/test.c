#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int  main(){
//	//业务处理
//	int a = 0;
//	a = get_val();
//	count_val(a);
//	while (a > 0){
//		a = get_val();
//		count_val(a);
//	}
//	//if使用逗号表达式
//	while (a = get_val(), count_val(a), a > 0){
//		//业务处理
//	}//了解一下就行
//	return 0;
//}

//下标引用 函数调用和结构成员
//[]下标引用操作符 操作数：一个数组名+一个索引值
//int arr[10]={0};
//arr[9]=10;
//[]的两个操作数是arr 9
//()函数调用操作符 接受一个或者多个操作数 第一个操作数是函数名 剩余的是传递的实参
//#include <stdio.h>
//int Getmax(int x, int y){
//	return x > y ? x : y;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int max = Getmax(a, b);//函数调用的时候（）就是函数调用操作符
//	printf("较大值:%d\n", max);
//	return 0;
//}
//例子
//#include <stdio.h>
//void test1(){//函数传参可以不用传入参数
//	printf("hehe\n");
//}
//void test2(const char str){//形参格式：类型加变量名
//	printf("%s\n", str);
//}
//int main(){
//	test1();
//	test2("hello bit.");
//	return 0;
//}
//结构体：用来描述一个事物  比如：姓名 张三 20岁 学号20210412
//#include <stdio.h>
//int main(){
//	struct peo{//struct peo 表示结构体的类型
//		char name[10];
//		int age;
//		char credit[10];
//	};//初始化
//	struct peo s={"张",20,"20210412"};//格式 类型加变量名={元素?};
//	//printf("%s\n", s.name);//访问打印 格式 变量名加.成员
//	///printf("%d\n", s.age);
//	//printf("%s\n", s.credit);
//	//构造结构体指针
//	struct peo* p = &s;
//	printf("%s\n", (*p).name);
//	printf("%d\n", (*p).age);
//	printf("%s\n", (*p).credit);
//	//->  对于结构体指针变量
//	//结构体指针变量=>成员    结构体变量名.成员  *指针.成员
//	printf("%s\n", p->name);
//	printf("%d\n", p->age);
//	printf("%s\n", p->credit);
//
//	return 0;
//}
//表达式求值   表达式求值的顺序一部分是由操作符的优先级和结核性决定 同样，有些表达式的操作数在求值的过程中可能需要转换为其他的类型
//隐式类型转换  c的整形算术运算总是至少缺省整形类型的精度来进行的。
//为了获取这个精度，表达式的字符和短整形操作数在使用之前被转换为普通类型，这种转换称为整形提升
//#include <stdio.h>
//int main(){
//	char a = 3;
//	//0000000000000000000000000000000000000011                   00000011(a)
//	char b = 127;
//	//0000000000000000000000000000000001111111                   01111111(b)       a+b=10000010      整形提升        1111111111111111111111111110000010（补码）
//	//1111111111111111111111111111111111110000001                   10000000000000000000000000000000001111110(原码打印)-126
//	char c = a + b;//整形提升（提升的是符号位0 or1） 都为32bit进行计算
//	printf("c=%d\n", c);
//	//printf("c=%c\n", c);erorr
//	return 0;
//}
//#include <stdio.h>
////int main(){
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0x6000000;
//	if (a == 0xb6){//因为整形提升的原因 a的值会改变的
//		printf("a");
//	}
//	if (b== 0xb600){
//		printf("b");
//	}
//	if (c == 0x600000){
//		printf("c");
//	}
//	return 0;//死程序？？？？outcome 应该输出 b c
//}
//#include <stdio.h>
//int main(){
//	char c = 1;
//	printf("%u\n", sizeof(c));//1 char 
//	printf("%u\n", sizeof(+c));//4 参与运算 int
//	printf("%u\n", sizeof(!c));//1
//
//	return 0;
//}
//算术转换  如果某个操作符的各个操作数属于不同的类型，那么其中一个操作数的转化为另一个操作数的类型，否则操作就无法进行，下面的层次体系称为寻常算术转换
//long double double float unsigned long int long in  unsigned int in
//如果某一个的操作数的类型在上面这个列表中排名比较低，那么首先要转换为另一个操作数的类型后执行运算 警告：但是算术转换要合理，要不然会有一些潜在的问题
//float f=3.14;
//int num=f;//隐形转换，会有精度丢失
//操作符的属性  三个因素 ：1.优先级（顺序order） 2.结合性（执行方向L-R） 3.是否控制求值顺序
//编译器的选择 
//例子
//#include <stdio.h>
//int main(){//非法表达式
//	int i = 10;
//	i = i-- - --i*(i = -3)*i++ + ++i;//4
//	printf("i=%d\n", i);
//	return 0;
//}
#include <stdio.h>
int fun(){
	static int count = 1;
	return ++count;
}
int main(){//有问题的代码 优先次不能锁定
	int answer;
	answer = fun() - fun()*fun();//2 3 4 *号优先？？
	printf("%d\n", answer);//输入多少 估计：-10 函数调用？？
	return 0;//函数的调用先后顺序无法通过操作符的优先级确定
}//复习完