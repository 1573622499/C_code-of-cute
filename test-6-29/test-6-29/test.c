#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���庯��
int Add(int x,int y){
	int z = 0;
	z = x + y;
	return z;
}
void Man(char* str){//char p="kdhkahd";  p��ŵ����׸��ַ����ĵ�ַ ��ӡ ֱ��ʶ��'\0'
	printf("%s\n", str);//��ӡ�ַ������õ�ַ(ָ��)
}
int main(){

	//char arr[1000];//char   -128~127 ��Χ
	//for (int j = 0; j < 1000; j++){
	//	arr[j] = -1 - j;
	//}
	//printf("%d\n", strlen(arr));//�����ַ������� ��\0����Ϊ������־ 255
	//printf("%d\n", arr[255]);//0
	//����ָ��
	/*int a = 20;
	int b = 10;
	int sum = Add(a, b);*/
	//printf("%d\n", sum);
	//���庯��ָ��
	//printf("%p\n", Add);
	//printf("%p\n", &Add);//�������ڵ�ַ      ��ӡ������ַ &������==������
	//int(*p)(int, int) = Add;
	//printf("%d\n", (*p)(2, 3));//5
	//printf("%d\n", (*p)(85, 123));//208
	void (*p)(char*) = Man;
	(*p)("abcdef");




	return 0;
}

