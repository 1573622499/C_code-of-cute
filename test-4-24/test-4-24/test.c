#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 54, 6545, 545 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		//printf("%d ", arr[i]);//��������±���з��ʣ��±��Ǵ�0��ʼ��  ����Ĵ�С����ͨ������õ�  sizeof����
//		printf("arr[%d]=%p\n", i, &arr[i]);//�������ڴ�����������ŵ� �������������к����� �����±������ Ԫ�صĵ�ַҲ������
//	}
//	int arr[3][4] = {1,2,3,4,5}// 1 2 3 4                 5 0 0 0  �±�ͬ���Ǵ�0��ʼ���з��ʵ�
//	int arr1[3][4] = { { 1, 2, 3, 4 }, { 4, 5 } };
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int arr[3][4] = { { 1, 2, 3, 4 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++){// i������
//		int j = 0;
//		for (j = 0; j < 4; j++){//j������
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");//int arr[]={1,2,3,4};  int arr[][4]={{1,2,3,4},{5,6,7,8}};
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int arr[][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++){//i���Ϊ2
//		int j = 0;
//		for (j = 0; j < 4; j++){//j���Ϊ3
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);//ͬ���ģ����ǲ��ѷ��ֶ�ά�������ʡ���б� �����ڴ��еĴ��Ҳ��������
//		}
//	}
//	return 0;
//}//���ۣ��������ڴ�����������ŵ�
//������Ϊ��������  ������ʵ�δ��뺯�� ����ð������ ���㷨˼�룩������һ��������������
//10 9 8 7 6 5 4 3 2 1     ...9 8 7 6 5 4 3 2 1 10  n��Ԫ��n-1��ð������ �ų�����  bubble_sort();
//#include <stdio.h>
//void bubble_sort(int arr[],int sz){//�������� int* str
//	int i = 0;//ȷ������
//	for (i = 0; i < sz - 1; i++){
//		int flag = 1;//��������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++){//���ÿһ�˽�������
//			int tmp = 0;
//			if (arr[j]>arr[j + 1]){
//				tmp = arr[j];
//				arr[j] = arr[j+1]; //��С���� ��������
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1){//δ����һ��ð�� flag��ֵ�ǲ���� 
//			break;//������һ�� 
//		}
//
//	}
//	
//
//
//}
//int main(){
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr�������� �ų�����  arr������ ���Ƕ�����arr���д��� ʵ�ʴ���������arr��Ԫ�صĵ�ַ &arr[0]
//	bubble_sort(arr,sz);//ð��������  bubble_sort();  //�൱�ڰ�ÿ��Ԫ�ض��ƶ�
//	int n = 0;
//	for (n = 0; n < sz; n++){
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}//break ֻ����ѭ������ʹ�� ������ѭ�������� 
//�Լ�ʵ��ð����������
//#include <stdio.h>
//void bubble_sort(int arr[], int sz){
//	int i = 0;
//	int flag = 1;
//	for (i=0;i<sz;i++){
//		int j = 0;
//		for (j = 0; j < sz - i; j++){
//			if (arr[j]>arr[j + 1]){
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1){
//			break;
//		}
//	}
//
//}
//int main(){
//	int arr[] = { 9, 8, 7, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int n = 0;
//	for (n = 0; n < sz; n++){
//		printf("%d ", arr[n]);// 6 7 8 9
//	}
//	return 0;
//}
//��������ʲô
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);//ͨ����Ԫ�ص�ַ�ҵ���ֵ
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//�����ں�Ԫ�ظ��� 3 ��λ���ֽ� sizeof(������) ����������ʾ������������ &������  ������Ϊ�׸�Ԫ�صĵ�ַ
//	return 0;
//}//&������ ȡ������������ĵ�ַ
