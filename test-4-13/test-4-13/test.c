#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(){//���ַ����˳������ Ѱ��Ԫ��
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//k=7
//	int left = 0;
//	int k = 7;//Ѱ��Ŀ��
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
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}
//һ���������
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 23, 2342, 656, };
//	int guess = 0;
//	printf("��Ҫ���ҵ�����Ϊ:>");
//	scanf("%d", &guess);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		if (arr[i] == guess){
//			printf("�ҵ��ˣ�����%d\n", arr[i]);
//			break;//�ҵ��˾�ֱ����
//		}
//	}
//	if (i==sz||i>sz){
//		printf("�Բ������û�ҵ�!\n");
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <windows.h>
//int main(){
//	char ch1[]="welcome to chongqing";
//	char ch2[] = "####################";
//	int left = 0;
//	//int sz = sizeof(ch1) / sizeof(ch1[0]);
//	int right=strlen(ch1)-1;
//	//int right = sz - 2;
//	while (left <= right){
//		ch2[left] = ch1[left];
//		ch2[right] = ch1[right];
//		printf("%s\n", ch2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//�����Ļ ִ��ϵͳ����
//		left++;
//		right--;
//	}
//
//	return 0;
//}
#include <stdio.h>
#include <string.h>
int main(){
	char password[] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("����������:>");
		scanf("%s", &password);
		if (0 == strcmp(password, "123456")){
			printf("��¼�ɹ�\n");
			break;
		}
		else {
			printf("�������,����������\n");
		}
	}
	if (i == 3){
		printf("�����˳�����\n");
	}
	return 0;
}