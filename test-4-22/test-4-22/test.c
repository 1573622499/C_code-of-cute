#define _CRT_SECURE_NO_WARNINGS 1
//ָ���ָ�� ���ַ����������ȣ�
//#include <stdio.h>
//int my_strlen(char* str){
//	char* start = str;
//	char* end = str;
//	while (*end != '\0'){
//		end++;
//	}
//	return end - start;
//}
//int main(){
//	char ch[] = "jdlkjda";//7  ע������Ĵ���
//	int len =my_strlen(ch);
//	printf("���ַ��ĳ���Ϊ%d\n", len);
//	return 0;
//}
//һ���Ľṹ��
//#include <stdio.h>
//int main(){
//	struct stu{
//		char name[20];
//		int age;
//		int length;
//		char code[20];
//	};
//	struct stu s = { "����", 18, 180, "209030323"};
//	printf("%s\n", s.name);
//	printf("%s\n", s.code);
//	printf("%d\n", s.age);
//	printf("%d\n", s.length);
//	struct stu* p = &s;
//	printf("%s\n", p->name);
//	printf("%s\n", p->code );
//	printf("%d\n", p->age);
//	printf("%d\n", p->length);
//	printf("%s\n", (*p).name);
//	printf("%s\n", (*p).code);
//	printf("%d\n", (*p).age);
//	printf("%d\n", (*p).length);
//	return 0;
//}
//
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4 };
//	int* pa = arr;
//	for (pa = &arr[4]; pa >&arr[0];){//��ʼֵΪ�����±� �����ı����Ƚ�
//		//*pa-- = 0;//[4]  Ԫ�ظ��� �±��0��ʼ����
//		*--pa = 0;
//	}
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);//ȫ����ʼ��Ϊ0
//	}
//	return 0;
//}
//#include <stdio.h>//&arr ��ʾȡ������������ĵ�ַ
//int main(){
//	int arr[10] = { 0 };
//	printf("%p\n", arr+1);//һ�㵥����������Ϊ������Ԫ�ص�ַ
//	printf("%p\n", &arr[0]+1);//��ַ���ԼӼ� �㷨
//	printf("%p\n",&arr);
//	printf("%p\n", &arr + 1);//ָ��ÿ��һ  40  ��ʮ���ֽ�
//	return 0;//&arr &������ ������������Ԫ�ص�ַ ��������ʾ������������ &������ ȡ��������������ĵ�ַ  sizeof(arr)-sizeof(������)��������ʾ�������� sizeof(������) ���������������Ĵ�С
//}
//#include <stdio.h>
//int main(){
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		printf("%p===============%p\n", p + i, &arr[i]);
//
//	}//sum p+i ==  &arr[i]
//	return 0;
//} 0��1 2.....9
//#include <stdio.h>
//int main(){
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		*(p + i) = i; //0~9
//	}
//	for (i = 0; i < sz; i++){
//		printf("%d ", *(p + i));//ָ��λ�ñ任
//	}
//	return 0;
//}
//#include <stdio.h>//ָ���������
//int main(){
//	int arr[] = { 1, 4324, 4234, 54 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", *(p + i));
//	}
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);//�����±����
//	}
//	return 0;
//}
//����ָ��
//#include <stdio.h>
//int main(){
//	int a = 9;
//	int* p = &a;
//	int** pp = &p;//����ָ��
//	int*** ppp = &pp;//����ָ��  ����  n��ָ��
//	*p = 20;
//	printf("%d\n", **pp);
//	return 0;//a��ָ���ַ�����p�� p�ĵ�ַ�����pp����  *��charm
//}
#include <stdio.h>
int main(){
	//ָ������  ������  ��ŵ���ָ��
	int a = 10;
	int b = 2;
	int c = 98;
	/*int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	printf("%p %p %p\n", pa, pb, pc);*///����������ָ��������в���
	int* p[] = { &a, &b, &c };//0~2 p[i] ֵ���ǵ�ַ
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("%d\n", *p[i]);//* ����ӵ�ַ ����
	}//��������  �ַ�����  ָ������
	return 0;
}