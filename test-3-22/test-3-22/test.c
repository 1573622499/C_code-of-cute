#define _CRT_SECURE_NO_WARNINGS 1
////��һ�����洢���ڴ��������λ����1�ĸ��� ����5��101�� count=2 ��������е�����   %ʱ ����ֻ��Ϊ����
////int main(){
////	int num = 0;
////	int count = 0;
////	int i = 0;
////	scanf("%d", &num);
////	for (i = 0; i < 32; i++){
////		if (num >> i & 1){
////			count++;//&:�ô���ȷ������λ��1�ĸ���  &��λ��  ����ͬʱΪ1��Ϊ1 1 0000001 �����ж����һλ�Ƿ�Ϊ1
////		}
////	}
////	printf("%d�������ڴ���Ķ�����λ��1��%d��\n", num, count);
////	return 0;
////}
////#include <stdio.h>
////int main(){
//////�ж�����
////	int year = 0;
////	scanf("%d", &year);
////	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
////		printf("%dΪ����\n",year);
////	}
////	return 0;
////}
////��1000��2000��֮��Ϊ������ݵĸ���
////#include <stdio.h>
////int main(){
////	int year = 0;
////	int count = 0;
////	for (year = 1000; year <= 2000; year++){
////		if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0)){
////			printf("%d ", year);
////			count++;
////		}
////	}
////	printf("һ����%d������\n", count);
////	return 0;
////}//&&ͬʱ���� ||ֻҪһ���������
//#include <stdio.h>
//int main(){
//	//��ӡ100~1000����6������ 10����һ��
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 1000; i++){
//		if (i % 6 == 0){
//			printf("%d ", i);
//			count++;
//		}
//		if (count % 10 == 0)
//		{
//			printf("\n");
//		}
//	}
//	printf("һ����%d�����ܱ�6����\n",count);
//	return 0;
//}
//���ַ���ɱ˳��������� ˳��������� �����������±�Ҳ��
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,21,23 };
//	//����Ѱ������7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = sz-1;//ȷ���ұ��±�
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if(arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			printf("�ҵ���!�±�%d\n", mid);
//			break;
//		}
//		if (left>right){//�������
//			printf("�Ҳ���\n");
//		}
//
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main(){//�ж������������Ƿ��ж�Ӧ��Ԫ��
//	int arr[] = { 1, 23, 4, 5, 67, 8 ,8};
//	int se = sizeof(arr) / sizeof(arr[0]);
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < se; i++){
//		if (arr[i] == num){
//			printf("����������%d,�����±�Ϊ%d\n", num, i);
//		}
//	}
//	return 0;
//}
