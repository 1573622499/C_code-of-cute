#define _CRT_SECURE_NO_WARNINGS 1
//指针函数作业
//1.输入两个数，按照从大到小输出(指针实现)
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int* pa = &a;
//	int* pb = &b;
//	if (*pa > *pb){
//		printf("%d ", *pa);
//		printf("%d", *pb);
//	}
//	else
//		printf("%d ", *pb);
//	printf("%d ", *pa);
//	return 0;
//}
//2.输入一个字符串，统计其中包含字符c的个数
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char ch []= "djkadjkacccccc";//""省略\0哦 size of() 计算要加\0
//	 //例如例子ch【】 c的个数为6
//	int count = 0;//构建计数器
//	int sz = strlen(ch);
//	int i = 0;
//	for (i=0;i<sz;i++){
//		if (ch[i] == 'c'){
//			count++;
//		}
//	}
//	printf("含c的个数有%d个\n", count);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int cube(int n);
//	int m = 0;
//	scanf("%d", &m);//假设输入数为5  理想结果：125
//	int s = cube(m);//cube()表示 创建一个立方函数
//	printf("n的立方为%d\n", s);
//	return 0;
//}
//int cube(int n){
//	return n*n*n;
//}
//求1~100内的素数，判断素数部分代码写成函数实现
#include <stdio.h>//这里使用 试除法 何为素数 只有能被1和本身整除的数
#include <math.h>
int fun(int x){
	int i = 0;
	for (i = 2; i <= sqrt(x); i++){
		if (x%i == 0)//不是素数
			return 0;
	}
	if (i > sqrt(x)){//是素数
		return 1;
	}
}
int main(){
	int num = 0;
	for (num = 2; num <= 100; num++){
		if (fun(num) == 1){//判断是否为素数
			printf("%d ", num);
		}
	}

	return 0;
}