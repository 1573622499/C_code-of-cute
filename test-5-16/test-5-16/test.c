#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void bbsort(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		for (int o = 1; o < sz - i; o++){
//			if (arr[i]>arr[o]){
//				int tmp = arr[i];
//				arr[i] = arr[o];
//				arr[o] = arr[i];
//				
//			}
//		}
//	}
//}
//int main(){
//	int arr[] = { 45, 21, 78, 458, 4 };//ʵ��4 21 45 78 458
//	//ð������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bbsort(arr, sz);
//	for (int i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
////	}
//	return 0;
//}
//
//���ֲ���
#include <stdio.h>
void binnary(int arr[], int sz){
	int left = 0;
	int k = 55;
	int right = sz - 1;
	while (right >= left){
		int mid = (left + right) / 2;
		if (arr[mid] > k){
			right = mid - 1;
		}
		else if (arr[mid] < k){
			left = mid + 1;
		}
		else{
			printf("�ҵ��ˣ�%d �±�Ϊ%d\n", k, mid);
			break;
		}
	}
	if (right < left){
		printf("û���ҵ������Ŷ\n");
	}
}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	//�ж���û��k�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	binnary(arr, sz);
	return 0;
}