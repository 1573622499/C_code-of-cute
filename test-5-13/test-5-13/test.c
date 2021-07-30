#define _CRT_SECURE_NO_WARNINGS 1
//结构体基础复习
//试写atm自动取款机
//#include <stdio.h>
//typedef struct banker{
//	int id;//账户
//	char name[10];//姓名
//	char password[20];//密码
//	int belance;//余额
//}bank;
//int main(){
//	bank s[3];
//	int i = 0;
//	for (i = 0; i < 3; ++i){//&变量名
//		printf("请依次输入账户 姓名 密码 余额：>");
//		scanf("%d %s %s %d", &s[i].id, &s[i].name, &s[i].password, &s[i].belance);
//	}
//	return 0;
//}

//结构体（值的集合）类型的申明 初始化 结构体成员访问 传参
//例如描述一个学生
//struct stu{
//	char name[10];//姓名
//	int age;//年龄
//	char sex[3];//性别
//	char id[10];//学号
//};//;不能丢
//#include <stdio.h>
////创建结构体(一种特殊的类型 并不占内存)
//typedef struct stu{//struct-结构体关键字 stu-结构体标签 +  =结构体类型   typedef 可以将变量类型简化 方便使用
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[3];//以上为成员变量
//}stu;//;前面可以接变量名 -全局变量 变量可以直接在这里定义
//int main(){
//	//创建一个结构体变量 并没有初始化  局部变量
//	stu s = { "张三", 18, "1567686868", "女" };
//		//printf("%s\n", s.name);
//	//结构体套结构体
//
//	return 0;
//}
//#include <stdio.h>
//struct s1{
//	int age;
//	char ch;
//	char arr[20];
//	float a;
//}m;
//struct s2{
//	double f;
//	struct s1 m;//创建变量啊！！！
//	int s;
//};
//int main(){
//	char arr[] = "hello bit";
//	struct s2 n = { 3.14, { 18, 's',"hello bit" ,2.3 }, 100 };//对结构体变量进行初始化
//	printf("%d\n",n.m.age);
//	printf("%c\n", n.m.ch);
//	printf("%lf\n",n.m.a);
//	printf("%d\n",n.s);
//
//
//	return 0;
//}
//使用结构体指针
//#include <stdio.h>
//struct per{
//	char name[10];
//	int age;
//};
//void pprintf(struct per str){
//	printf("%s\n", str.name);
//	printf("%d\n", str.age);
//}
//void ppprintf(struct per* str){
//	printf("%s\n", (*str).name);
//	printf("%d\n", (*str).age);
//	printf("%s\n", str->name);
//	printf("%d\n", str->age);
//}
//int main(){
//	struct per t = { "张三", 20 };
//	pprintf(t);//传参传的是结构体变量
//	struct per* pp = &t;
//	ppprintf(pp);
//	//printf("%s\n", pp->name);
//	//printf("%d\n", pp->age);//注意实参不用写类型 形参必须要写类型
//
//	return 0;
//}
//选择ppprint（）这个函数要更好  不用在创建空间 
//数据结构 线性数据结构  顺序表 链表 栈（先进后出，后进先出） 队列   树形数据结构 二叉树 图