#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main(){
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++){
//		for (j = 0; j < 4; j++){
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++){
//		for (j = 0; j < 4; j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//0~N֮����� Ѱ��ȱʧ���� 0~9 ������5
//int XOR_Search(int* p,int sz){
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	for ( i = 0; i <sz+1 ; i++){
//		x ^= i;//x��0~N�������
//
//	}
//	for (j = 0; j < sz; j++){
//		x ^= p[j];//x��arr�����ÿһ��Ԫ�����
//	}
//	return x;
//
//}
//int main(){
//	int arr[] = { 0,1,2,9,7,8,4,3,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Ѱ��ȱʧ����
//	int need = XOR_Search(arr,sz);
//	printf("ȱ�ٵ���Ϊ%d\n", need);
////	return 0;
//}
//ð������
//void Bbu_sort(int arr[], int sz){
//	//1��ȷ������ ʮ���� �����Ծ���
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++){
//		//ȷ���Ƚϴ��� ÿ����һ��������һ�αȽ�
//		int flog = 1;// flog�Ż�ÿ�ν�ѭ����ʱ�򶼳�ʼ��ֵΪ1 ��ʾ��������״̬
//		for (j = 0; j< sz - 1 - i; j++){
//			if (arr[j]>arr[j + 1]){
//				int tmp = arr[j];//Ϊʲô��j<sz-1-i �����j(arr[j+1])-����sz��-1
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flog = 0;//����������֣���֤���Ѿ����� ��ʾ������״̬
//			}
//		}
//		if (flog == 1){//���û�н��뽻��״̬����ֱ���˳�ѭ��-��ÿ��������������
//			break;//��ֹѭ��
//		}
//	}
//
//}
//int main(){
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };//��������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Bbu_sort(arr,sz);
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);// 0 1 2 3 4 5 6 7 8 9
//	}
//
//	return 0;
//}
//int main(){
//	int arr[3][4] = { 0 };
//	for (int i = 0; i < 3; i++){
//		for (int j = 0; j < 4; j++){
//			printf("&arr[%d][%d]===%p\n", i, j, &arr[i][j]);//���ѷ��� ��ά��Ҳ���������洢�Ĺ���
//		}
//	}
//	return 0;
//}


//bubble_sort()-ð������
//�����鴫�ε�ʱ��������Ϊ��Ԫ�ص�ַ  sizeof(arr)=(����Ʒ̨ȷ��) ��������Ԫ�ظ�������Ҫ���Σ������ں���������error��
//��������ʲô�������������-�ַ���strlen(arr)������ַ����ĳ��� sizeof(arr)-���������arr��ռ�ռ�Ĵ�С
//��������������Ϊ��Ԫ�ص�ַ��ָ����գ�
//&arr ȡ������������ĵ�ַ(����ָ�����int(*p)[����]=arr)
int main(){
	int arr[] = { 12, 343, 3 };
	printf("%p\n", &arr[0]);
	printf("%p\n", arr);
	printf("%d\n", *arr);//12
	return 0;
}
