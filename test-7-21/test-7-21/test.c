#define _CRT_SECURE_NO_WARNINGS 1
//���ݽṹ
//ʱ�临�Ӷ�
//һ�ֹ��� �����㷨���� ��ģ����ص� ִ�д�����Ӱ�����ģ�������ִ���ٶȺ�ʱ�䣨��Ӳ�����ڴ�ϢϢ��أ�
//��O������ʾ��
//���ֲ��ҡ�>O��logN��  1*2*2��x��2��=N  2^x=N ->...
//쳲���������
//int Facticii��int n��{
//	n > 2 ? 1 : Facticii(n - 1)*n;//���õݹ����n�Ľ׳�  ��Ŀ������ �ж� ִ���棺ִ�м�
//}
//F��10��
//F��9�� * 10
//...
//F(2) * 3
//F(1) * 2  ��F��1��Ϊ�� = 1 �ݹ飨�Ὠ��ջ֡������֮����ȫ�����أ�ջ֡��ʧ��
//������ʱ�临�Ӷ�
//O��1�� O��logN����      O��N��O��N ^ 2����
//�����ַ���
//#include <stdio.h>
//int Survey(const char* p,char a){
//	int count = 0;
//	while (*p != '\0'){
//		if (*p++ == a){
//			count++;
//		}
//
//	}
//	return count;
//}
//int main(){
//	char arr[] = "jdkajlkdj";//ͳ��j���ֵĸ��� 3��
//	char a = 'j';
//	int ret = Survey(arr,a);
//	printf("'j'һ������%d��\n", ret);
//	return 0;
//}
//ʱ�临�Ӷ� O��N��


//�ռ临�Ӷ�
//ͳ��������ĸ��� ջ֡���ٿռ䣨�ڴ����棩
//����O��1�� O��N��
//malloc(???)
//0~N�ҳ�ȱ�ٵ�һ������
//���� ��� ���
//���-���
//#include <stdio.h>
//int Add(int arr[], int z){
//	int x = 0;
//	for(int j = 0; j < z; j++){
//		x += arr[j];
//	}
//	return x;
//}
//int main(){//0~9(��ʮ����)
//	int arr[] = { 5, 8, 6, 4, 2, 3, 9, 1, 0 };//ȱ7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret1 = Add(arr, sz);
//	int ret2 = 0;
//	for (int i = 0; i < sz + 1; i++){
//		ret2 += i;
//	}
//	printf("ȱ�ٵ���Ϊ%d\n", ret2 - ret1);
//
//	return 0;
//}
//
//���
//#include <stdio.h>
//int Seach(int* p, int sz){
//	int x = 0;
//	for (int i = 0; i < sz; i++){
//
//		x ^= p[i];
//	}
//	for (int j = 0; j < sz + 1; j++){
//		x ^= j;
//	}
//	return x;
//}
//int main(){
//	int arr[] = { 5, 8, 6, 4, 2, 3, 9, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=Seach(arr, sz);
//	printf("���������%d\n", ret);//7
//
//	return 0;
//}
//��ת����
//#include <stdio.h>
//void print(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };//��ת����  7123456    6712345   5671234
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int j = 0; j < 3; j++){//ѭ������
//		int tmp = arr[sz - 1];//�����һ����
//		for (int end = sz - 2; end >= 0; --end){
//			arr[end + 1] = arr[end];//�����ƶ�
//		}
//		arr[0] = tmp;//������ĵ�һ��Ԫ�ظı�
//
//	}//ѭ�����μ���
//	//for (int n = 0; n < sz; n++){
//	//	printf("%d ", arr[n]);//��ӡ�õ����   5671234
//	//}
//	print(arr,sz);//��ӡ����
//	return 0;
//}
//����˼��
//#include <stdio.h>
//void Reserve(int* p, int left, int right){
//	while (left <= right){
//		int tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		++left;
//		--right;//���Ҳ���Խ���������
//	}
//}
//void print(int arr[], int n){
//	for (int i = 0; i < n; i++){
//		printf("%d ",arr[i]);
//	}
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//�ƶ�ת���� k=3    789123456
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;//���� ���� ������� ת������ 
//	printf("��ѡ����Ҫ������ת�õĴ���>:");
//	scanf("%d", &k);
//	if (k >= sz){
//		k %= sz;//ȡ����  ���൱���߸�����ת�ߴ�->����
//	}
//	Reserve(arr, sz - k, sz - 1);
//	Reserve(arr, 0,sz-k-1 );
//	Reserve(arr,0 ,sz-1 );
//	print(arr, sz);//��ӡ����
//	return 0;
//}
//���ֲ���(���˳������)
//int Seach(int* arr, int arrsize,int k){
//	for (int i = 0; i < arrsize; i++){
//		if (arr[i] == k){
//			return 1;
//			
//		}
//		
//		}
//	return 0;
//	}
//
//
//int main(){
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7,  9, 10 };
//	int k = 8;//Ѱ������8
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ�㷽��O(N) ����������
//	if (1 == Seach(arr, sz,k)){
//		printf("�ҵ���!\n");
//	}
//	else{
//		printf("û�ҵ���\n");
//	}
//	return 0;
//}
//���ֲ���(���˳������)
//#include <stdio.h>
//void BinnarySeach(int arr[], int  sz, int  k){
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right){
//		int mid = (right + left) / 2;
//		if (arr[mid] > k){
//			right= mid - 1;
//		}
//		else if(arr[mid]<k){
//			left = mid + 1;
//
//		}
//		else{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//		if (left>right){
//			printf("�Ҳ���!\n");
//		}
//
//	}
//}
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	BinnarySeach(arr, sz, k);
//
//	return 0;
//}
//ת��
//#include <stdio.h>
//void Reverse(int arr[], int left, int right){
//	while(left<= right){
//		//ǣ�洫ֵ���� �ʹ�ַ���ã��ı�ԭ����ֵ��
//		//a=a^b; b=a^b;  a=a^b;  ���н���
//		//left++;
//		//right--;
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		++left;
//		--right;
//	}
//}
//void print(int arr[],int n){
//	for (int i = 0; i < n; i++){
//		printf("%d ", arr[i]);
//	}
//	
//}
//
//int main(){
//	int arr[]= {1,2,3,4,5,6,7,8,9};//ת���ߴλص�ԭ����ģ��
//	int arrsize = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	printf("��ѡ��ת�ô���:>");
//	scanf("%d", &k);
//	if (k >= arrsize){
//		k %= arrsize;//�ж�k��������Ԫ�ظ��������
//	}
//	Reverse(arr,arrsize-k,arrsize-1);
//	Reverse(arr,0 , arrsize-k-1);
//	Reverse(arr,0,arrsize-1);
//	print(arr,arrsize);
//
//	return 0;
//}
//���������� ���ɺ�����ʱ��ֵ����Ҫ�ö�Ӧָ�����
//void Swap1(int* pa, int* pb){
//	*pa = *pa^*pb;
//	*pb = *pa^*pb;
//	*pa = *pa^*pb;
//}
//void Swap2(int* a, int* b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//#include <stdio.h>
//int main(){
//
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);//10 20 
//	/*a = a^b;
//	b = a^b;
//	a = a^b;*/
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	/*int tmp = a;
//	a = b;
//	b = tmp;*/
//	//Swap1(&a, &b);//��ַ����
//	Swap2(&a, &b);//��ֵ����
//printf("������: a=%d b=%d \n", a, b);//20 10
//	//д�ɺ�����ʱ��Ҫע��a b�������ܲ��ܸı�� �����Ǵ�ֵ���� ������ָ�룩 
//	//Swap(&a, &b);
//	return 0;
//}
//0~N����ȱ�ٵ��Ǹ���    ���(���㽻����)����ͬΪ0 ����Ϊ1�� 0^�κ���=�κ���  ��ͬ��^=0
int XorSeach(int* p, int sz){
	int x = 0;
	for (int j = 0; j < sz + 1; j++){
		x ^= j;
	}
	for (int i = 0; i < sz; i++){
		x ^= p[i];
	}
	
	return x;
}
#include <stdio.h>
int main(){
	int arr[] = { 1, 2, 3, 4 ,9,0,6,5,7};//������8
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=XorSeach(arr, sz);
	printf("%d\n", ret);//ȱ�ٵ��Ǹ��� 
	return 0;
}