#define _CRT_SECURE_NO_WARNINGS 1
//���ֲ���
//���һ������������в��Ҿ����ĳ����
//����ҵ��˷��أ���������±꣬�Ҳ����ķ���
//
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int k = 7;//�ҵ���
//	int k = 11;//�Ҳ���
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right){
//		int mid = (right + left) / 2;
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left>right){
//		printf("������˼��û���ҵ��������\n");
//	}
//	return 0;
//}
//���ú����� ���϶��ַ�
//#include <stdio.h>//������arr��һ��ָ��
//int bin_search(int arr[], int k, int sz){//���ͼӱ�����
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right){
//		int mid=(left + right) / 2;
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;//û���ҵ�����ʱ���ص�ֵ ����if�������ж�
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = bin_search(arr, k,sz);
//	if (ret ==-1){
//		printf("�Ҳ���ָ��������\n");
//	}
//	else{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//#include <stdio.h>//ʵ��num+1��ÿ����һ��
//void  ADD(int* pnum){
//	return (*pnum)++;//����Ҫ�ã������� ��Ȼ������
//}
//int main(){
//	int num = 0;
//	ADD(&num);
//	printf("num=%d\n", num);//1
//	ADD(&num);
//	printf("num=%d\n", num);//2
//	ADD(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}
//��ϰ ��1������ʵ�� �ж����� 2���ж����� 3����������������ֲ��� 4��ÿ���ú���num+1;
//����Ƕ��ʹ�� ��������л����
//#include <stdio.h>//����һ��������ok�� ??????
//void new1(){
//	printf("hehhe\n");
//}
//void new2(){
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		new1();
//	}
//}
//int main(){
//	new2();
//	return 0;
//}
//��ʽ����
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char arr[20] = "hello";//����Ϊ5 �ֽ�Ϊ6
//	int ret = strlen(arr);
//	printf("arr�ĳ�����%d\n", ret);
//	printf("%d\n", strlen("ahkdhkdh"));
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	//printf("%d", 1);//1
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}
//#include <stdio.h>
//#include "Add.h"
//int main(){
//	//int Add(int x, int y);//��������
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//��������
//	printf("sum=%d\n", sum);
//	return 0;
//}
////int Add(int x, int y){//��������
////	int z = 0;
////	z = x + y;
////	return z;
////}
//���������� �ӷ�add.c add.h  ����sub.c sub.h  �˷�mul.c mul.h  ����div.c div.h
//�����ݹ� ���壺�����������ı�̼��ɳ�Ϊ�ݹ飨recursion�����ݹ���Ϊһ���㷨�ڳ����������Ӧ�á�һ�����̻������䶨���˵������ֱ�ӻ��ӵ��������һ�ַ�������ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������⣬�ݹ����ֻ��Ҫ�����ĳ���Ϳ������������������Ҫ�Ķ���ظ����㣬���ؼ����˴��������ݹ���Ҫ˼����ʽ���ڣ��Ѵ��»�С
//�ݹ��������Ҫ����    1�����������������ݹ�㲻�ټ���  2��ÿ�εݹ����֮��Խ��Խ�ӽ��������� �ݹ鳣���Ĵ���ջ���
//1234  1 2 3 4
//����
//#include <stdio.h>
//int main(){
//	printf("hehe\n");//�ݹ�  �����׺���
//	main();//һֱ���� ջ���
//	return 0;
//}
#include <stdio.h>
void print(int n){
	if (n > 9){
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main(){
	unsigned int n = 0;
	scanf("%d", &n);
	//�ݹ�
	print(n);
	return 0;//%ȡ����  /�ӵ����� �����ƶ�
}