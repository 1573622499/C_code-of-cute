#define _CRT_SECURE_NO_WARNINGS 1
//ָ�룺��ű�����ַ  ͨ�����ҵ��������ڴ浥Ԫ �ڴ��Ϊ��൥Ԫ һ����Ԫ��СΪһ���ֽ�
//ָ���Ǹ�����������ڴ浥Ԫ�ĵ�ַ in a word ָ�뼴��ַ
//#include <stdio.h>
//int main(){
//	int a = 10;
//	int* pa=&a;
//	*pa = 20;
//	printf("%d\n", *pa);
//	return 0;
//}
////
//#include <stdio.h>
//int main(){
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(int *));//4
//	printf("%d\n", sizeof(double*));//4  ָ���Сֻ��ƽ̨�й�  32ƽ̨��Ӧ4���ֽ� 64ƽ̨��Ӧ8���ֽ�
//	//��ָ������ ��ָ����ʲô��ϵ�� 1��ָ������ò�����ʱ��ָ������Ӱ����ʿռ�   2��ָ���+1 ָ������Ӱ��ָ���ߵĳ��� ��������
//
//	return 0;
//}
//����
//#include <stdio.h>
//int main(){
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	//������ʾ �����洢��ָ���λ����ָ�������޹� ������ͬ
//	return 0;
////}
//#include <stdio.h>
//int main(){
//	int a = 0x112223344;//ʮ�����Ʊ�ʾ ����ʮ�����Ʊ�ʾ�˸�������λ=һ���ֽڵĴ�С a�պ����ĸ��ֽڴ��
//	int* pa = &a;
//	*pa == 0;//intָ������Ϊ�ĸ��ֽ�  a�е�ȫ��ֵ�����Ա任��0
//	//char* pc=&a;charָ������һ���ֽ�  aֻ�ܱ任�ķ�֮һ��ֵ
//	//*pc=0;
//	ָ�����;�����ָ����н����ò�����ʱ���ܷ��ʿռ�Ĵ�С int* *p�ܷ����ĸ��ֽ�  char* *p�ܷ���һ���ֽ� double* *p�ܷ��ʰ˸��ֽ�
//
//	return 0;
//}
//ָ���1
//#include <stdio.h>
//int main(){
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//ָ������Ӱ��ָ���1�Ĳ�������ַ��
//	return 0;
//}//1��int��
//#include <stdio.h>
//int main(){
//	int arr[10] = { 0 };
//	int* p = arr;//��������ʾ�������Ԫ�ص�ַ
//	int i = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		//*p = 0;
//		//p++;//�ı�ָ��
//		*(p+i)=1;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////2��char*��
////#include <stdio.h>
////int main(){
//	int arr[10] = { 0 };
//	char* p = arr;//��������ʾ�������Ԫ�ص�ַ
//	int i = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		//*p = 0;
//		//p++;//�ı�ָ��
//		*(p + i) = 1;
//		printf("%d ", arr[i]);//���ܰ���������Ԫ�ر�Ϊ1
//	}
//	return 0;
//}
//ָ�����;���ָ����һ���߶�Զ��������  int*p p+1->4  char*p p+1->1 double*p p+1->8 ���뵥λΪ�ֽ�
//Ұָ�� ����
//#include <stdio.h>//1����׼������Ҫ�Ծֲ��������г�ʼ�� ָ��ĳ�ʼ��
//int main(){
//	int a;//�ֲ����������г�ʼ����Ĭ�������ֵ
//	int* p;//�ֲ�������ָ��������ͱ���ʼ�����ֵ
//	*p = 20;//��֪����һ���ַ��ֵΪ20
//	printf("%d", a);
//	return 0;
//}
//2��ָ���Խ�����:ָ��ָ��ķ�Χ����������ķ�Χ
////3��ָ��ָ��Ŀռ��ͷ� �ֲ������ں���ִ�к� ������ռ���ڴ滹���˲���ϵͳ
//#include <stdio.h>
//int* test(){//�ֲ�����ִ�к���Զ��ݻ���
//	int a = 2;
//	return &a;
//}
//int main(){
//	int* p=test();
//	printf("%p\n", p);//�����ַ  �����оֲ�������ֵ�����ı�
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}
//tip ��α���ʹ��Ұָ�� 1��ָ���ʼ�� 2��С��ָ��Խ�� 3��ָ��ָ��ռ��ͷż�ʹ��NULL  4��ָ��ʹ��֮ǰ�����Ч��
//n�Ľ׳� ����ʵ��
//#include <stdio.h>
//int Fac(int n){
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++){
//		ret *= i;
//	}
//	return ret;
//}
//int main(){//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d�Ľ׳�Ϊ%d\n", n, ret);
//	return 0;
//}Fac()ʵ��n�Ľ׳˵ĺ���
//�ݹ�˼��  1�� n=1  return 1    2��n>1 return Fac(n-1)*n 
////ʵ��
//#include <stdio.h>
//int Fac(int n){
//	if (n == 1){
//		return 1;
//	}
//	else{
//		return n*Fac(n - 1);//���»�С��˼��
//	}
//}
//int main(){
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d�Ľ׳�Ϊ%d\n", n, ret);
//	return 0;
//}
//���n��쳲�������(���������)
//#include <stdio.h>//��˼ 1����1 2��쳲���������Ϊ1  2.���ӵ���������ʼ��n��쳲����������ڵ�n-1��쳲�������+��n-2��쳲�������֮��
//int Fib(int r){
//	if (r < 3){
//		return 1;
//	}
//	else{
//		return Fib(r - 1) + Fib(r - 2);
//	}
//}tdd����������������
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("��%d��쳲�������Ϊ%d\n", n, ret);
//	return 0;
//}
//int Fib(int n){
////��ŵ������  ������̨�� n��̨�� һ�ο�����һ��̨��  һ�ο���������̨��  ��Ҫ������n��̨�� �ж���������[]
//arr[] ����������ǳ������ʽ  ��ʼ��
//#include <stdio.h>
//#include <string.h>
//int main(){
//	//����һ������-�������-10��
//	int arr[10] = { 1, 2, 3 };//ʣ��Ԫ��Ĭ�ϳ�ʼ��ȫ����0
//	char ch[5] = { 'a', 98 };//ascMa
//	char ch1[5] = "ab";//ok
//		char arr4[] = "abcdef";//\0��Ϊ�ַ��������ı�־
//	printf("%d\n", sizeof(arr4));//7   7*1��char��
//	//sizeof ����ռ�����Ԫ�صĴ�С 
//	int c = strlen(arr4);
//	printf("%d\n",c);// \0֮ǰ 6  strlen ����
//
//	int n = 0;	int arr[n];//erorr
//	return 0;
//}
//1��strlen��sizeof����û��ʲô����
/*2��strlen������ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ��Ҫ��ͷ�ļ�<string.h>
3��si*//*zeof()������� ���� ���� �Ĵ�С-��λ���ֽ�byte-������*/
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char ch1[] = { 'a', 'b', 'c' };
//	char ch2[] = "abc";
//	printf("%d\n", sizeof(ch1));//3
//	printf("%d\n",strlen(ch1));//3  ���ֵ ��֪��ʲôʱ���⵽\0? {'',''};strlen ����ַ���
//	printf("%d\n", sizeof(ch2));//4
//	printf("%d\n", strlen(ch2));//3
//	//�����±��0��ʼ
//	return 0;
////}
//#include <stdio.h>
//int main(){
//	int arr[10] = { 0 };;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		//arr[i] = i;
//		printf("%d ", arr[i] = i);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);//d
//	//��ÿһ���������
//	int g = strlen(arr);//6
//	int i = 0;
//	for (i = 0; i < g; i++){
//		�ж����� i<(int)strlen(arr)
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//ʵ�� 1234 1 2 3 4
#include <stdio.h>
void hhh(int k){
	if (k > 9){
		hhh(k / 10);
	}

		printf("%d ", k % 10);

}
int main(){
	int n = 0;
	scanf("%d", &n);
	hhh(n);
}