#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include "ADD.h"//���ö�Ӧͷ�ļ����Լ�������
//int main(){
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//
//1234��>1 2 3 4�ݹ� % / ����Ӧ����1234%10=4����λ�� 1234/10(���˸�λ��ʣ��������)
//#include <stdio.h>
//void print(int n){
//	if (n > 9){
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main(){
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);//û�з���ֵ
//	return 0;
//}
//���ַ����ĳ���
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char arr[] = "abc";
//		int len=strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
// ����ʵ��
#include <stdio.h>
 //int my_strlen(char* p){//�ǵú����ķ���ֵ��
	//int count = 0;
	//while(*p != '\0'){//�ַ�����\0����Ϊ��־
	//	count++;
	//	p++;
	//}
	/*return count;
}*/
//�ݹ��д��
//int my_strlen(char* p){
//	if (*p != '\0')
//		return 1 + my_strlen(p + 1);
//	else
//		return 0;
//}
//int main(){
//	char arr[] = "abc";
//	int len = my_strlen(arr);//ʵ�� �����Ӧ������Ԫ�صĵ�ַ Ӧ����ָ�����������
//	printf("len=%d\n", len);
//	return 0;
//}
//n�Ľ׳�
//#include <stdio.h>
//int FAC(int n){
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++){
//		
//		ret *= i;
//	}
//	return ret;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = FAC(n);
//	printf("ret=%d\n",ret);
//	return 0;
//}
//�ݹ��㷨
#/*include <stdio.h>
FAC(int n){
	if (n > 1){
		return n*FAC(n - 1);
	}
	else
		return 1;
}
int main(){
	int n = 0;
	scanf("%d", &n);
	int ret = FAC(n);
	printf("ret=%d", ret);
	return 0;
}*/
//쳲���������  1 1 2 3 5 8 13 21 34 55
#include <stdio.h>
//int FIB(int n){//ѭ��д��
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2){//�ظ�n-2��
//		c = a + b;
//		a = b;
//		b = c;
//			n--;
//	}
//	return c;
//}
//
//�ݹ�д��
int FIB(int n){
	if (n > 2){
		return FIB(n - 1) + FIB(n - 2);
	}
	else return 1;
}
int main(){
	int n = 0;
	scanf("%d", &n);
	int ret = FIB(n);
	printf("ret=%d\n", ret);
	return 0;
}