#define _CRT_SECURE_NO_WARNINGS 1
//素数 闰年    函数有序数组二分法查找数字   每调用一次就+1(传值调换!)
//#include <stdio.h>
//int is_runnian(int n){
//	if ((n % 4 == 0 && (n % 400 != 0)) || (n % 400 == 0)){
//		return 1;
//	}
//	else return 0;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	if (1 == is_runnian(n)){
//
//	printf("%d是闰年\n", n);
//}
//	
//	else {
//		printf("%d不是闰年\n", n);
//	}
//	return 0;
//}
//打印100~1000的素数
//#include <stdio.h>
//int is_prin(int x){
//	int j = 0;
//	for (j = 2; j < x; j++){
//		if (x%j == 0){
//			return 0;
//		}//另一种情况在循环外
//		
//	}
//	return 1;
//}
//int main(){
//	int i = 0;
//	for (i = 100; i <= 1000; i++){
//		if (1 == is_prin(i)){
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//简明的判断一个数是否为素数
//#include <stdio.h>
//int main(){
//	int i = 0;
//	scanf("%d", &i);
//	int j = 0;
//	for (j = 2; j < i; j++){
//		if (i%j == 0)
//		{
//			printf("%d不是素数\n", i);
//			break;
//		}
//		else if (i%j != 0){
//			printf("%d是素数\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int is_find(int arr[], int sz,int k){
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right){
//		int mid = (right + left) / 2;
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if(arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			return mid;
//
//		}
//	}return -1;
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = is_find(arr, sz,k);
//	if (-1 == ret){
//		printf("找不到这个数\n");
//	}
//	else{
//		printf("找到了这个数!下标%d\n", ret);
//	}
//	return 0;
//}
//#include <stdio.h>
//void add(int* pn){
//	return (*pn)++;
//}
//int main(){
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//#include <stdio.h>
//int my_strlen(char* p){
//	int count = 0;
//	while (*p != '\0'){
//		count++;
//		p++;
//	}
//	return count;
//}
//int main(){
//	char arr[] = "jadkllkajdlkajdla";//17
//	int len = my_strlen(arr);
//	printf("这个字符串的长度为%d\n", len);
//}
//#include <stdio.h>
//#include  <string.h>
//int main(){
//	char arr[] = "jadkllkajdlkajdla";
//	int len = strlen(arr);
//	printf("该字符串的长度为%d\n", len);
//	return 0;
//}