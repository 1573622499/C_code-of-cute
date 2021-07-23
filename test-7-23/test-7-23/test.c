//#define _CRT_SECURE_NO_WARNINGS 1
////C语言基础知识梳理
//原码->反码->补码（整数在内存中存储） 二进制序列
//正数 / 无符号数  原反补相同
//负数    原->(符号位不变，~)反码->(加一)补码
//局部变量前面省略了auto
//int a = 10; (auto省略了)
//auto int a = 10; 
//extern 外部访问需要加
//存储数据的四个地方   速度由低到高 空间由多到少   硬盘（500G）->内存（4 / 8G）->高速缓冲器->寄存器（register）
//cpu(中央处理器) 运算
//register int a = 10;//建议把a放在寄存器里面
//signed int  int  不写unsigned默认为有符号数
//union - 联合 共同体
//	typedef - 类型重定义
//	unsigned int a = 10;
//typedef unsigned int u_int 对类型进行简化
//u_int num = 20; unsigned int num = 20; 一样
//static(静态)
//1.static+局部变量 局部变量的生命周期变长，且一段时间内不会被销毁
//2.static+全局变量 全局变量作用域改变（属于自己源文件内部）将不会被访问到
//3.static+函数名 函数的链接属性被改变 外部链接属性受限->内部连接属性可以用
//变量名及其他名不能由关键字命名
//extern申明外部符号 类型加名
//#define MAX 10(#define 定义的常量)
//#define 宏(含参)  和 函数
//int Add(int x, int y){
//	return (x + y);
//}
//#define Max(x,y) (x>y ? x:y)
//int max = Max(a, b);
//指针（pointer）
//用来存放地址
//int a = 10;
//int* p=&a;//p来存放a的地址 p指向a
//*p = 20;//*解引用操作符/间接操作符 p通过a的地址来找到a并对他进行值的改变
//地址（32bit 64bit） 两根地址线
//电脑通电产生电信号 正（1）负（0）
//形成二进制序列
//分别有 2^32  2^64 种可能
//指针变量的大小取决于电脑平台 w32（4）X64（8）
//一个内存单元大小为一个字节
//内存随机分配
//进制转换8421法
//struct 用来描述复杂对象 例如人 书 动物
//struct book{
//	char name[20];
//	int price;
//};//;为结束标志
//struct book b1 = { "平凡的世界", 55 };//对结构体变量进行初始化
//struct book* p=&b1;//结构体指针
//可以打印 可以重新赋值
//b1.price = 20;
//(p).price = 30;
//p->price = 40;
//p->name = "c++";//这种写法是错误的
//需要用到字符串拷贝的知识
//strcpy(p->name/b1.name, "c++");
//函数指针 函数名就是函数的地址
//假如 void test(){}
//void *p() = test; 定义一个函数指针 p指向test()这个函数
//
//
//
//
//
//
//
