#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(){
//	int a;//�ֲ�����δ��ʼ��,����ŵ���һ�����ֵ
//	int* pa=&a;//��ΪҰָ�루δ��ʼ����ָ�� ָ��Խ��  ��������ָ��λ�ò�����
//	*pa = 20;
//	return 0;
//
//}
//#include <stdio.h>
//int main(){
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 12; i++){
//		//*(p++) = i;
//		*p = i;
//		p++
//		printf("%d", *p);
//	}
//	return 0;
//}
//#include <stdio.h>
// int* test(){
//	int a = 10;
//	return &a;//a �����������ʱ��ֲ������Ѿ������� ���صĵ�ַ�Ѿ������� 
//}
//int main(){
//	int* p=test();
//	printf("%d\n", *p);//*p �޷��ҵ������ַ
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	*pa = 20;
//	pa=NULL;//�ó�ʼ���ģ���ָ�븳ֵ ��ʱ���ø�ָ��
//	if (pa != NULL){
//		*pa = 29;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	/*int* p = arr;*/
//	int* p = &arr[9];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++){
//	//	/*printf("%d ", *p);
//	//	p++;*///��һ��
//	//	printf("%d ", *p++);++���ȼ��ϸ�
//	//}
//	//for (i = 0; i < 5; i++){
//	//	printf("%d ", *p);
//	//	p += 2;//p=p+2;
//	//}
//	for (i = 0; i < 5; i++){
//		printf("%d ", *p);
//		p -= 2;
//	}
//	return 0;
//}
//����ָ���ָ�����ֽڳ���my_strlen  �ݹ� ��������ʽ
//#include <stdio.h>
//int my_strlen(char *str){
// char* start = str;//��ʼ�ͽ�������Ϊ��Ԫ�ص�ַ   �������ͣ���Ӧ˼��
//	char* end=str;
//	while (*end != '\0'){
//		end++;//����ָ
//	}
//	return end - start; //(ָ���ָ�뼴Ϊ�ַ�������) ���С
//}
//int main(){
//	char ch []= "abknsdj";//7
//	int len = my_strlen(ch);
//	printf("���ַ����ĳ���Ϊ%d\n", len);
//	return 0;
//}//ָ���ָ�뼴ΪԪ�ظ���
//#include <stdio.h>
//int main(){
//	int arrr[] = { 1, 2, 3, 4, 5, 6,7, 8, 9, 10 };//ָǰ��
//	printf("%d\n", &arrr[9] - &arrr[0]);
//	printf("%d\n", &arrr[0] - &arrr[9]);
//	return 0;
//}1��
//#include <stdio.h>
//int my_strlen(char* str){
//	char* s = str;
//	char* e = str;
//	while (*e != '\0'){
//		e++;
//	}
//	return e - s;
//}
//int main(){
//	char ch[] = "ndkxnskldnksd";
//	int len = my_strlen(ch);
//	printf("���ַ����ĳ���Ϊ%d\n", len);
//	return 0;
//}
//#include <stdio.h>
//int my_strlen(char* str){
//	int count = 0;
//	while (*str != '\0'){
//		count++;
//		str++;//��ϸ˼�� ����
//	}
//	return count;
//}
//int main(){
//	char ch[] = "dkjhdk";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}
//#include <stdio.h>
//int my_strlen(char* s){
//	if (*s != '\0'){
//		return 1 + my_strlen(s + 1);//\0�Ǻ��� s+1Ϊ����
//	}
//	return 0;
//}
//int main(){
//	char ch[] = "jkadj";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}
//ָ����ܵ�ַ
#include <stdio.h>
int main(){
	int arr[] = { 1, 2, 3, 4, 5 };
	int* pa = arr;
	for (pa = arr; pa < &arr[5]; ){
		*pa++ = 0;
	}//ʹ������Ԫ��ȫΪ0
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++){
		printf("%d ",arr[i]);
	}

	return 0;
}