#define _CRT_SECURE_NO_WARNINGS 1
//���ֲ���
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int k = 8;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;//��ʱ����ѭ��
//		}
//	}
//	if (left>right){
//		printf("�ܱ�Ǹ��û�����������\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
////int main(){
////	char arr1[] = "welcome to bite!!!";//���ճ��ֽ��
////	char arr2[] = "##################";
//	int left = 0;
//	//int sz = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left <= right){
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		//Sleep(1000);
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//
//	return 0;
//}
//���ú���ʵ�����
//#include <stdio.h>
//int Add(int x, int y){
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main(){
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1,&num2);
//	int sum = Add(num1, num2);
//	printf("��Ϊ%d\n", sum);
//	return 0;
//}
