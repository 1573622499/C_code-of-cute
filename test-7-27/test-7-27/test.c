#define _CRT_SECURE_NO_WARNINGS 1


#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////int main(){
//	//输出1~100之间的奇数
//	//for (int i = 1; i <= 100; ++i){//c++风格
//	//	if (1 == i % 2){
//	//		printf("%d ", i);
//	//	}
//	//}
//	/*int i = 1;
//	while (i <= 100){
//		if (1 == i % 2){
//			printf("%d ", i);*/
//		
////}
//
////	i++;//调整 while循环语句
////}
////int count = 0;
////if (10 == count){
////	printf("\n");//每十个换行
////}
////单条语句可以不用代码块{}
////for (int i = 1; i <= 100; i + 2){
////	//奇数加2 = 奇数
////	printf("%d ", i);
////}
////小结
////C语言的三种结构
////选择（分支语句） 循环 顺序
////if / while（表达式 判断真假）如果是只执行一条语句（；） 可以不用{ 代码块 } {}应用于执行多条语句
////分支语句分为：单分支 双分支 多分支（switch语句）
////注意：  int age = 10;  if (18 <= age < 28)   错位写法 表达式执行是(真)从左向右
////if (18<=age && 28<age)  使用逻辑与（两个式子必须同时为真最终结果才为真）
////悬空else:else匹配规则 和离得最近且未被匹配的if进行  如：
//////  
////int a = 6;
////int b = 20;
////if (a == 5)
////{
////	if (b == 20)
////		printf("hh\n");
////	else
////		printf("呵呵\n");
////}
//
////很显然第一个if不能进入（为假）  第二个if else 匹配
////if (){
////	return x;
////}
////return y;//要么返回x 要么返回y   return(出现在函数定义里面) 返回了接下来的都不返回（仅返回一个值）
////= == 区别
////‘ = ’表示的是赋值  ‘ == ’表示的是判断相等
////一个好习惯：判断相等的时候将代码写成这样的格式   常量 == 变量（表达式）
//////思考1~100之间的奇数
////1、取模（%）
////2、因为1为奇数 控制变量取值就可 奇数加2 = 奇数
////3、奇数加1 = 偶数
////int arr[50] = { 0 };
////for (i = 0; i < 50; i++){
////	for (int n = 2; n <= 100; n + 2){
////		arr[i] = n;//初始化数组 存储1~100之间的偶数
////	}
////
////}
////for (int u = 0; u < 50; u++){
////
////	printf("%d ", arr[i]-1);//1~99
////
////}
//
//
////return 0;
////}
//
//int main(){
//	int arr[50] = { 0 };
//	int i = 0;
//	int n = 2;
//	for (i = 0,n=2; i < 50,n<=100; i++,n+2){
//		//for (int n = 2; n <= 100; n + 2){
//		//	arr[i] = n;//初始化数组 存储1~100之间的偶数
//		//}
//
//	}
//	for (int u = 0; u < 50; u++){
//
//		printf("%d ", arr[i] - 1);//1~99
//
//	}
//
//	return 0;
//}
//switch (常量表达式){} case（常量表达式 / 浮点型不来）:为入口 break; 为出口 default(默认情况)
//需要注意的是没有break的时候 继续执行下面的代码 switch语句还可以嵌套使用
//1！ = 1.0   1 = 1 + 0
//好习惯：case / default 后加上 break; case / default 没有严格的顺序而言
//当执行多条语句的时候需要{}代码块
#include <stdio.h>
//int main(){
//	int day = 0;
//	printf("请输入:>");
//	scanf("%d", &day);
//	switch (day){
/*case 1:
printf("星期一\n");
break;
case 2:
printf("星期二\n");
break;
case 3:
printf("星期三\n");
break;
case 4:
printf("星期四\n");
break;
case 5:
printf("星期五\n");
break;
case 6:
printf("星期六\n");
break;
case 7:
printf("星期天\n");
break;*/
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}//break直接跳出switch语句（出来）
//循环语句
//continue 结束本次循环 直接来到下一次循环的判断条件判断是否继续执行
//break 直接终止循环  跳出来
//EOF end of file  文件结束标志 （-1）
int main(){
	//输出1~10
	//int i = 0;
	//while (i <10){
	//	i++;//不打印 打印1~10其他数字
	//	if (i == 5)
	//		continue;//回到循环的判断条件
	//	//continue算作一条语句  结果 1 2 3 4死循环（因为i没有调整i一直为5 continue 继续）
	//	printf("%d ", i);//后置++ 先使用后调整
	//	//i++;

	//}
	//得到一个字符 并打印
	//int ch = 0;//int ch=0;
	///*printf("需要获取一个字符:>");*/
	////ch = getchar();键盘输入一个字符
	////ch = getchar();//ch=getchar() 需要用一个（）括起来 不然意思会变
	//while ((ch = getchar()) != EOF){//每一次输入了之后在判断 同步的 不能写成 ch !=EOF
	//	putchar(ch);//复读机   getchar()里面只能用字符变量
	//	//printf("%c\n", ch);//等价
	//}分支语句 选择结构








	return 0;
}
