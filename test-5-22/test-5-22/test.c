#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void bubblesort(int arr[], int sz){
//	for (int i = 0; i < sz; i++){//ȷ������
//		for (int j = 1; j < sz - i; ++j){
//			int tmp = 0;
//			if (arr[i]>arr[j]){
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;//����λ�� �������� 
//			}
//		}
//		
//	}
//} 
//int main(){
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubblesort(arr,sz);
//	for (int k = 0; k < sz; k++){
//		printf("%d ", arr[k]);
//	}
//	return 0;
//}
//
//ȫ0
//#include <stdio.h>
//void intl(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		arr[i] = 0;//Ԫ��ȫ����ʼ��Ϊ0
//	}
//}
//void print(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
//	int arr[10000] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	intl(arr, sz);//��ʼ��
//	print(arr, sz);//��ӡ
//	return 0;//����ʵ��
//}
//#include <stdio.h>
//void lllo(int arr[], int sz){
//	for (int i = 0; i < sz; ++i){
//		arr[i] = i + 1;
//	}
//}
//void print(int arr[], int sz){
//	for (int u = 0; u < sz; ++u){
//		printf("%d ", arr[u]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz){
//	int left = 0;
//	int right = sz-1;
//	while (left < right){//�������ȶ����ʹ��
//		
//		//���н���
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] =tmp;
//		left++;
//		right--;
//	}
//}
//int main(){
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	lllo(arr, sz);//��ʼ��Ϊ1~10��
//	print(arr, sz);//��ӡ
//	Reverse(arr, sz);//����
//	print(arr, sz);//��ӡ
//	return 0;
//}
//����ָ����н��� ���׳���
//#include <stdio.h>
//void mend(int arr[], int m){
//	for (int i = 0; i < m; i++){
//		arr[i] = i + 1;
//	}
//}
//void print(int arr[], int sz){
//	for (int g = 0; g < sz; ++g){
//		printf("%d ", arr[g]);
//	}
//	printf("\n");
//}
//void Reverse(int* str, int sz){
//	int* start = str;
//	int* end = str;
//	while ((*end) != '\0'){
//		end++;
//	}
//	int tmp = 0;
//	while ((*start) != (*end)){
//		tmp = *start;
//		*start = *end;
//		*end = *start;
//		start++;
//		end--;
//
//	}
//}
//int main(){
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	mend(arr, sz);//��ʼ��1~10
//	print(arr, sz);//��ӡ
//	Reverse(arr, sz);//����
//	print(arr, sz);
//	return 0;
//}
//2021 5/23 ��ϰ
//�������ʼ��Ϊ0 Ȼ���ӡ����
//#include <stdio.h>
//void Init(int arr[], int n){
//	for (int y = 0; y < n; ++y){
//		arr[y] = 0;
//	}
//}
//void print(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
//	int arr[10] = { 5445, 45, 455, 4645, 12, 7880 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//������������Ķ�ӦԪ��
//#include <stdio.h>
//void EXii(int arr1[], int arr2[], int sz, int right, int left){
//	while (left < right){
//		int tmp = arr1[left];
//		arr1[left] = arr2[left];
//		arr2[left] = tmp;
//		int tm0 = arr1[right];
//		arr1[right] = arr2[right];
//		arr2[right] = tmp;
//		right--;
//		left++;
//	}
//}
//void print(int arr2[], int sz){
//	for (int y = 0; y < sz; y++){
//		printf("%d ", arr2[y]);
//	}
//}
//int main(){
//	int arr1[] = { 1,3,5,7,9};
//	int arr2[] = { 2, 4, 6, 8, 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = sz - 1;
//	EXii(arr1, arr2, sz, right, left);
//	//print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}
//#include <stdio.h>
//void print(int arr[], int sz){
//	for (int y = 0; y < sz; y++){
//		printf("%d ", arr[y]);
//	}printf("\n");
//}
//int main(){
//	int arr[] = { 1, 3, 5, 7, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int arrr[] = { 2, 4, 6, 8, 0 };
//	for (int i = 0; i < sz; i++){
//		int tmp = arr[i];
//		arr[i] = arrr[i];
//		arrr[i] = tmp;//��Ӧ����Ԫ�ؾͿ��� û����ô���ӵ� left right ���ֲ��� ����Reverse
//
//	}
//	print(arr, sz);
//	print(arrr, sz);
//	return 0;
//}
//ʵ����ת 1~10  ->   10~1
//#include <stdio.h>
//void Init(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		arr[i] = i + 1;
//	}
//}
//void Reverse(int arr[], int sz){
//	int left = 0;
//	int right = sz - 1;
//	while (left < right){
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//}
//void print(int arr[], int sz){
//	for (int u = 0; u < sz; ++u){
//		printf("%d ", arr[u]);
//	}
//	printf("\n");
//}
//int main(){
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);//��ʼ��
//	print(arr, sz);//��ӡ
//	Reverse(arr, sz);//��ת����
//	print(arr, sz);//��ӡ
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int i = 1;
//	int ret = 0;
//	ret = (++i) + (++i) + (++i);//3+4+5=12
//	printf("ret=%d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short* p = (short*)arr;//ָ���Ӧ��ַ (ǿ��ת������) ���ﶨ�����short����
//	for(int i = 0; i < 4; i++){
//		*(p + i) = 0;//short*  ÿ��һ��Ϊ�����ֽ� int ���ĸ��ֽ�   ���Ĵ� ÿ�������ֽ� һ���߰˸��ֽ� �͸ı�����int��Ԫ��
//	} 
//	for (int i = 0; i < 5; i++){
//		printf("%d ", arr[i]);//��ӡ
//	}
//	return 0;
//}
//%xΪ��ӡʮ������
//#include <stdio.h>
//int main(){
//	int a = 0x11223344;//�洢Ϊ 44332211
//	char* p = (char*)&a;
//	*p = 0;
//	printf("%x\n", a);//0x112223300
//	return 0;
//}
//#include <stdio.h>
//int i;//ȫ�ֱ�������ʼ��Ĭ�ϳ�ʼ��Ϊ0
//int main(){
//	--i;//-1
//	if (i > sizeof(i)){//sizeof()- ������� �����ڴ��С >=0 ������뽫�����Ƚϵ�i ��-1�������޷����� 100000000...1   1111111111111111..0   111111111111111111111(�Բ�����в���) ת�����ڵ�1���Ƿ���λ ��һ���ܴ����
//		printf(">\n");
//	}
//	else{
//		printf("<\n");
//	}
//	return 0;
//}//���մ�ӡ>  sizeof()���з��������������Ƚϵ�ʱ��  ��Ҫ���޷���������ת�� ����޷�������������
#include <stdio.h>
int main(){
	int a, b, c;
	a = 5;
	c = ++a;//c=6 a=6
	b = ++c, c++, ++a, a++;//ע�� ,Ϊ���ű��ʽ ִ�н��Ϊ���һ�����ʽ�Ľ��   �����������c������� ���ڸ�ֵ�����ȼ����ڶ��ű��ʽ
	b += a++ + c;//+�����ȼ�Ҫ����+=��   b=7  c=7 c=8 a=7 a=8
	 printf("a=%d b=%d c=%d\n", a, b, c);//a=9 b=7+8+8=23 c= 8   so the outcome   9  23 8
	return 0;
}