#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ֮ǰ��ϰ
//n!
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++){
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//
//1!+2!+.....n!
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++){
//		
//		for (i = 1; i <= n; i++){
//			ret = 1;
//			ret = ret*i;
//			sum = sum + ret;
//
//		}
//		
//	}
//	printf("%d\n", sum);
//	return 0;
////}
//#include <stdio.h>
//int main(){
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int i = 0;
//	scanf("%d", &i);
//	for (n = 1; n <= i; n++){
//		ret = ret*n;
//		sum = ret + sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}//�Ż��㷨������ʼ������ԭ�еĻ�����ֱ�ӡ�
//�ҵ�Ԫ���±�
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6,7,  8, 9, 10 };
//	int h = 0;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//ͳ��Ԫ�ظ���
//	for (h = 0; h < sz; h++){
//		if (arr[h] == k){
//			printf("�ҵ���!,�±��ǣ�%d\n", h);
//			break;
//		}
//	}
//	if (h == sz){
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}//ʹ�ö��ַ���
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int k = 7;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//Ϊʲô��1?
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else if (arr[mid]>k){
//			right = mid - 1;
//		}
//		else{
//			printf("�ҵ��ˣ��±꣺%d\n", mid);
//			break;//��ʱ����ѭ����
//		}
//	}
//	if (left > right){
//		printf("�Ҳ���!\n");
//	}
//	return 0;
//}//�ַ��������м��ƶ�
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;//""����\0 {}���治���� sizeof(arr1) / sizeof(arr1[0])-2
	while (left <= right){
		arr2[left] = arr1[left];
		arr2[right] = arr2[right];
		printf("%s\n", arr2);
		system("cls");
		Sleep(1000);
		left++;
		right--;
	}
	printf("welcome to bit!!!!!\n");
	return 0;
}