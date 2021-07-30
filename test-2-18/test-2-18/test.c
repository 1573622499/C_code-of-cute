#define _CRT_SECURE_NO_WARNINGS 1
//将两个数交换
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	t = a;
//	a = b;
//	b = t;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}//构造函数
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//求打印1000~2000是闰年的年份
//#include <stdio.h>
//int main(){
//	int year = 0;
//	int count = 0;//计数
//	for (year = 1000; year <= 2000; year++){
//		if (year % 4 == 0 && year % 100 != 0){
//			count++;
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0){
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}//一步搞定&& || 手法 熟悉 逻辑与&&  逻辑或||
//#include <stdio.h>
//int main(){
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++){
//		if ((year % 4 == 0 && year % 400 != 0) || year % 400 == 0){
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//1！+2！+......10!
//#include <stdio.h>
//int main(){
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++){
//		ret = ret*n;
//		sum = sum + ret;
//	}
//	printf("1!+2!+3!+.....=%d\n", sum);
//	return 0;
//}
//#include <stdio.h>//所谓素数：仅仅被自身和1整除的数
//int main(){
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++){
//		//构造2~99；
//		for (j = 2; j < i; j++){
//			if (i%j == 0){
//				break;//能被整除，不是素数。
//			}
//		}
//		if (j == i){
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//若不是素数，就可分成i=a*b这种格式  且 a和bzhi至少有一个小于等于根号i；则代码如下：
//#include <stdio.h>
//#include <math.h>
//int main(){
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 1; i<= 100; i++){
//		for (j = 2; j <= i/2; j++){
//			if (i%j == 0){
//				break;
//			}
//		}
//		if (j>i/2){
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}