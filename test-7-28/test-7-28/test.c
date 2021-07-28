#define _CRT_SECURE_NO_WARNINGS 1
     /* =    赋值从右边到左边
	  if ()  while ()  (表达式)为真就执行语句 为假就跳跃*/
		  //得到一个字符然后打印出来 输出
//#include <stdio.h>
//int main(){
//	int ch = 0;//定义一个整形然后接收
//	while((ch = getchar())!=EOF){//EOF-文件结束标志 （-1） 字符串结束标志 ‘\0’ (0)
//		putchar(ch);//putchar()输出字符'0' ASCII码值 （48）  A（65） a（97） 大小写ASCII码值相差32
//	}
//	return 0;
//}
//scanf() getchar() 存在输入缓冲区  
//登录 确定密码
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main(){

	//char password[20] = { 0 };
	//int ret = 0;//getchar()专属
	//printf("请输入密码:>");
	//scanf("%s", password);//输入密码之后有一个回车  ‘\n’ ASSCII码值(10)
	//printf("请确认(Y/N):>");
	//ret = getchar();//代码错误原因：输入缓冲区 里面还有一个\n(转义字符)换行 没有被读走 
	//	/*while ((ret = getchar()) != '\n'){*///ret把输入缓冲区多的字符读走 直至\n读走
	//		;//什么都做 空语句
	//	}
	//	ret=getchar();//在进行输入 获得字符
	//	if (ret == 'Y'){
	//		printf("确认成功\n");
	//
	//	}
	//	else{
	//		printf("确认失败\n");
	//	}
	//	//while((ret=getchar())!='\n'){
	//	;
	//}//这段代码表示ret把输入缓冲区的所有字符 直至‘\n’全部读走 为了不妨碍确认成功/失败的判断
	////只打印0~9的数字
	//	int ret = 0;
	//	while ((ret = getchar()) != EOF){
	//		if (ret<'0'|| ret>'9')//if（）未加{代码块} 只执行一条语句
	//			continue;//直接结束本次循环 回到循环条件判断是否执行下一次循环
	//	putchar(ret);//只打印0~9的数字
	//}

	/*for (;;)初始化 判断条件 调整 都可以省略 如果判断条件为空 （条件恒为真）一直执行 死循环
		for ()循环语句优点：直观 容易修改 联系紧密 易于操控 easily tangible
		注意for()循环里的 continue 先跳到调整再重新进行判断 与while()循环里的continue容易死循环 不同之处
		*/
	/*循环条件为赋值（除了k=0 条件为假直接退出循环）其他赋值就会导致死循环
		do{} while (表达式); 至少执行一次  stmt(循环语句)
		总结：while（）{} 和do{}while ();语句 continue用法类似*/
	//n的阶乘
	//int n = 0;
	//printf("请输入一个整数:>");
	//scanf("%d", &n);
	//int ret = 1;
	//for (int i = 1; i <= n; i++){
	//	ret *= i;//ret从1*到n
	//}
	//printf("%d的阶乘为%d\n", n,ret);

	//完成1！+2！+...n!
	//首先、计算每一个数的阶乘 然后、再相加即可、
	//int n = 0;
	//int i = 0;
	//int j = 0;
	//int sum= 0;
	//int ret = 0;
	//printf("请输入一个整数:>");
	//scanf("%d", &n);//n相当于一个上限
	//for (int i = 1; i <= n; ++i){//一共n次
	//	ret = 1;//每一次内层循环需要重新初始化
	//	for (int j = 1; j <= i; j++){
	//		ret *= j;//计算每一个数的阶乘
	//	}
	//	sum+= ret;
	//}
	//printf("%d\n", sum);
	//1!+2!+...n!优化
	/*int n = 0;
		printf("请输入一个整数:>");
		scanf("%d", &n);
		int ret = 1;
		int sum = 0;
		for (int i = 1; i <= n; ++i){
		ret *= i;
		sum += ret;

		}
		printf("%d\n", sum);

		*/
	//二分查找(时间复杂度O（logN）)->顺序数组
	//void binsearch(int* p, int sz, int k);//函数声明
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8,9, 10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int k = 8;//需要查找的数 下标为 7
	//binsearch(arr, sz,k);
	//左右交换
	/*hello bit
		h#######t
		he#####it
		hel###bit
		hell##bit
		hello#bit
		hello bit*/ /*实现这种风格*/
	
//	char arr1[] = "hello bit";
//char arr2[] = "#########";
//int left = 0;
//int right = strlen(arr1) - 1;
//while (left <= right){
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	left++;
//	right--;
//	printf("%s\n", arr2);
//	Sleep(1000); // 睡眠一秒钟Sleep(里面不需要加"")
//
//}
//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//int k = 7;
//int i = 0;
//int sz = sizeof(arr) / sizeof(arr[0]);
//for (i = 0; i < sz; ++i){
//
//	if (arr[i] == k){
//		printf("找到了！下标为%d\n",i);//利用循环来找数字(暴力求解)
//		break;
//	}
//}
//if (i ==sz){
//	printf("找不到这个数!\n");
//}
//sizeof(字符串)统计包含 '\0'
//windows.h->Sleep();
//stdlib.h->system();
//比较字符串是否相等不能用‘ == ’ 必须要用strcmp()->string.h
//模拟登录
char password[20] = { 0 };
int ch = 0;
int i = 0;
printf("欢迎来到登录页面\n");
for ( i = 0; i < 3; i++){
	printf("请输入密码:>");
	scanf("%s", password);
	printf("请确认密码(Y/N):>");
	while ((ch = getchar()) != '\n'){
		;
	}
	ch = getchar();//再次输入验证
	if (ch == 'Y'){
		printf("确定密码成功\n");//确定成功在进行判断
		
	}
	else{
		printf("确定密码失败\n");
	}
	if (strcmp(password, "123456")==0){
		printf("登录成功\n");
		break;//退出循环
	}
	else{
		printf("密码错误，请重新输入\n");
	}

	
	
	

}














if (i == 3){
	printf("三次机会已用完，即将退出程序\n");
}




	return 0;
}

void binsearch(int* p, int sz, int k){
	int left = 0;
	int right = sz - 1;
	while (left <= right){
		int mid = (left + right) / 2;//确立中间下标
		if (p[mid] > k){
			right = mid - 1;
		}
		else if (p[mid] < k){
			left = mid + 1;
		}
		else{
			printf("恭喜你找到了!%d的下标为%d\n", k, mid);
			break;//找到了直接退出循环
		}
		if (left>right){
			printf("没有找到这个数\n");
		}
	}
}

