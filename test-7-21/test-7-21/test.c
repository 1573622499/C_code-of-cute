#define _CRT_SECURE_NO_WARNINGS 1
//数据结构
//时间复杂度
//一种估算 衡量算法质量 最坏的，保守的 执行次数（影响最大的）而不是执行速度和时间（与硬件，内存息息相关）
//大O渐进表示法
//二分查找—>O（logN）  1*2*2（x个2）=N  2^x=N ->...
//斐波那契数列
//int Facticii（int n）{
//	n > 2 ? 1 : Facticii(n - 1)*n;//利用递归计算n的阶乘  三目操作符 判断 执行真：执行假
//}
//F（10）
//F（9） * 10
//...
//F(2) * 3
//F(1) * 2  且F（1）为真 = 1 递归（会建立栈帧）完了之后再全部返回（栈帧消失）
//常见的时间复杂度
//O（1） O（logN）优      O（N）O（N ^ 2）劣
//查找字符串
//#include <stdio.h>
//int Survey(const char* p,char a){
//	int count = 0;
//	while (*p != '\0'){
//		if (*p++ == a){
//			count++;
//		}
//
//	}
//	return count;
//}
//int main(){
//	char arr[] = "jdkajlkdj";//统计j出现的个数 3次
//	char a = 'j';
//	int ret = Survey(arr,a);
//	printf("'j'一共出现%d次\n", ret);
//	return 0;
//}
//时间复杂度 O（N）


//空间复杂度
//统计最坏变量的个数 栈帧开辟空间（内存里面）
//常见O（1） O（N）
//malloc(???)
//0~N找出缺少的一个数字
//排序 求和 异或
//求和-求和
//#include <stdio.h>
//int Add(int arr[], int z){
//	int x = 0;
//	for(int j = 0; j < z; j++){
//		x += arr[j];
//	}
//	return x;
//}
//int main(){//0~9(共十个数)
//	int arr[] = { 5, 8, 6, 4, 2, 3, 9, 1, 0 };//缺7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret1 = Add(arr, sz);
//	int ret2 = 0;
//	for (int i = 0; i < sz + 1; i++){
//		ret2 += i;
//	}
//	printf("缺少的数为%d\n", ret2 - ret1);
//
//	return 0;
//}
//
//异或
//#include <stdio.h>
//int Seach(int* p, int sz){
//	int x = 0;
//	for (int i = 0; i < sz; i++){
//
//		x ^= p[i];
//	}
//	for (int j = 0; j < sz + 1; j++){
//		x ^= j;
//	}
//	return x;
//}
//int main(){
//	int arr[] = { 5, 8, 6, 4, 2, 3, 9, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=Seach(arr, sz);
//	printf("差的数字是%d\n", ret);//7
//
//	return 0;
//}
//旋转数组
//#include <stdio.h>
//void print(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };//旋转三次  7123456    6712345   5671234
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int j = 0; j < 3; j++){//循环三次
//		int tmp = arr[sz - 1];//存最后一个数
//		for (int end = sz - 2; end >= 0; --end){
//			arr[end + 1] = arr[end];//往后移动
//		}
//		arr[0] = tmp;//将数组的第一个元素改变
//
//	}//循环三次即可
//	//for (int n = 0; n < sz; n++){
//	//	printf("%d ", arr[n]);//打印得到结果   5671234
//	//}
//	print(arr,sz);//打印函数
//	return 0;
//}
//逆置思想
//#include <stdio.h>
//void Reserve(int* p, int left, int right){
//	while (left <= right){
//		int tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		++left;
//		--right;//异或也可以交换两个数
//	}
//}
//void print(int arr[], int n){
//	for (int i = 0; i < n; i++){
//		printf("%d ",arr[i]);
//	}
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//移动转三次 k=3    789123456
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;//设置 数组 数组个数 转动次数 
//	printf("请选择需要将数组转置的次数>:");
//	scanf("%d", &k);
//	if (k >= sz){
//		k %= sz;//取余数  这相当于七个数旋转七次->不变
//	}
//	Reserve(arr, sz - k, sz - 1);
//	Reserve(arr, 0,sz-k-1 );
//	Reserve(arr,0 ,sz-1 );
//	print(arr, sz);//打印函数
//	return 0;
//}
//二分查找(针对顺序数组)
//int Seach(int* arr, int arrsize,int k){
//	for (int i = 0; i < arrsize; i++){
//		if (arr[i] == k){
//			return 1;
//			
//		}
//		
//		}
//	return 0;
//	}
//
//
//int main(){
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7,  9, 10 };
//	int k = 8;//寻找数字8
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一般方法O(N) 可以是乱序
//	if (1 == Seach(arr, sz,k)){
//		printf("找到了!\n");
//	}
//	else{
//		printf("没找到！\n");
//	}
//	return 0;
//}
//二分查找(针对顺序数组)
//#include <stdio.h>
//void BinnarySeach(int arr[], int  sz, int  k){
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right){
//		int mid = (right + left) / 2;
//		if (arr[mid] > k){
//			right= mid - 1;
//		}
//		else if(arr[mid]<k){
//			left = mid + 1;
//
//		}
//		else{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//		if (left>right){
//			printf("找不到!\n");
//		}
//
//	}
//}
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	BinnarySeach(arr, sz, k);
//
//	return 0;
//}
//转置
//#include <stdio.h>
//void Reverse(int arr[], int left, int right){
//	while(left<= right){
//		//牵涉传值调用 和传址调用（改变原来的值）
//		//a=a^b; b=a^b;  a=a^b;  进行交换
//		//left++;
//		//right--;
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		++left;
//		--right;
//	}
//}
//void print(int arr[],int n){
//	for (int i = 0; i < n; i++){
//		printf("%d ", arr[i]);
//	}
//	
//}
//
//int main(){
//	int arr[]= {1,2,3,4,5,6,7,8,9};//转至七次回到原来的模样
//	int arrsize = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	printf("请选择转置次数:>");
//	scanf("%d", &k);
//	if (k >= arrsize){
//		k %= arrsize;//判断k大于数组元素个数的情况
//	}
//	Reverse(arr,arrsize-k,arrsize-1);
//	Reverse(arr,0 , arrsize-k-1);
//	Reverse(arr,0,arrsize-1);
//	print(arr,arrsize);
//
//	return 0;
//}
//交换两个数 构成函数的时候传值必须要用对应指针接收
//void Swap1(int* pa, int* pb){
//	*pa = *pa^*pb;
//	*pb = *pa^*pb;
//	*pa = *pa^*pb;
//}
//void Swap2(int* a, int* b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//#include <stdio.h>
//int main(){
//
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);//10 20 
//	/*a = a^b;
//	b = a^b;
//	a = a^b;*/
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	/*int tmp = a;
//	a = b;
//	b = tmp;*/
//	//Swap1(&a, &b);//传址调用
//	Swap2(&a, &b);//传值调用
//printf("交换后: a=%d b=%d \n", a, b);//20 10
//	//写成函数的时候要注意a b的是是能不能改变的 除非是传值调用 （利用指针） 
//	//Swap(&a, &b);
//	return 0;
//}
//0~N中找缺少的那个数    异或(满足交换律)（相同为0 相异为1） 0^任何数=任何数  相同的^=0
int XorSeach(int* p, int sz){
	int x = 0;
	for (int j = 0; j < sz + 1; j++){
		x ^= j;
	}
	for (int i = 0; i < sz; i++){
		x ^= p[i];
	}
	
	return x;
}
#include <stdio.h>
int main(){
	int arr[] = { 1, 2, 3, 4 ,9,0,6,5,7};//假设少8
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=XorSeach(arr, sz);
	printf("%d\n", ret);//缺少的那个数 
	return 0;
}