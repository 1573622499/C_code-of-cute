#define _CRT_SECURE_NO_WARNINGS 1
//统计一个int的数 二进制位()含有1的个数  掌握两种算法
//对于二进制首先 %2 /2进行调整 计算
//#include <stdio.h>
//int count_bit_one(unsigned int ret){
//	int count = 0;
//	while (ret){
//		if (ret % 2 == 1){
//			count++;
//		}
//		ret /= 2;
//	}
//	return count;
//}
//int main(){
//	int n = 0;
//	printf("请输入一个数，以得到它的二进制位中含有1的个数\n");
//	scanf("%d", &n);
//	int count=count_bit_one(n);
//	printf("%d的二进制位中含有%d个1\n",n,count);
//

//	return 0;
//}
//第二种 &1  &对补码（变量存储）进行操作>>移位调整
//#include <stdio.h>
//#include <stdlib.h>//系统库函数的头文件
//int count_bit_one(int n){
//	int count = 0;
//	for (int i = 0; i < 32; ++i){
//		if (((n >> i) & 1) == 1){
//			count++;
//		}
//	}
//	return count;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("count=%d\n", count);
//	return 0;
//}//system("pause");运行暂停
//最优
//#include <stdio.h>
//int count_bit_one(int s){
//	int count = 0;
//	while(s){
//		s = s&(s - 1);//统计1的个数
//		count++;
//	}
//	return count;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("count=%d\n", count);
//	return 0;
//}
//recover
//写一个函数求a的二进制（补码）表示几个1
//第一种写法 及优化
//#include <stdio.h>
//
//int main(){
//	//函数声明
//	int count_bit_one(int n);
//	int a = 0;
//	printf("请输入一个整数：>");
//	scanf("%d", &a);
//	int count = count_bit_one(a);//函数调用
//	printf("%d二进制位含有1的个数为%d\n", a, count);
//	return 0;
//}
//int count_bit_one(unsigned n){//函数定义  将int 换成unsigned 针对负数 ok
//	int count = 0;
//	while (n){
//		if (n % 2 == 1){
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//第二种写法
//#include <stdio.h>
//int count_one(int s){
//	int count = 0;
//	for (int i = 0; i < 32; ++i){
//		if (((s >> i) & 1) == 1){
//			count++;
//		}
//	}
//	return count;
//}
//int main(){
//	int n = 0;
//	printf("请输入一个整数：>");
//	scanf("%d", &n);
//	int count = count_one(n);
//	printf("%d二进制位中含有1的个数为%d\n", n, count);
//	return 0;
//}
//最牛逼的算法
//#include <stdio.h>
//int count_one(int n){
//	int count = 0;
//	while (n){
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main(){
//	int n = 0;
//	printf("请输入一个整数：>");
//	scanf("%d", &n);
//	int count = count_one(n);
//	printf("%d二进制中含有1的个数为%d\n", n, count);
//	return 0;
//}
//#include <stdlib.h> -> system("pause")(暂停)
//分别打印一个数二进制位的基偶数
#/*include <stdio.h>
void print(int n){
	printf("基数位二进制数为：\n");
	for (int i = 30; i >= 0; i -= 2){
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}
void printt(int n){//基数位和偶数位可以
	printf("偶数位二进制数为：\n");
	for (int i = 31; i >= 0; i -= 2){
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}
int main(){
	int n = 0;
	printf("请输入一个数：>");
	scanf("%d", &n);
	print(n);
	printt(n);
	return 0;
}*/
#include <stdio.h>
int count_diff(int a, int b){
	int tmp = a^b;//即 统计tmp中含有1的个数

}
int main(){
	int a= 0;
	int b = 0;
	printf("请输入两个整数:>");
	//计算两个数不同的个数
	int c = count_diff(int a, int b);
	printf("%d和%d二进制位中不同的个数有%d个\n", a, b, c);
	return 0;
}