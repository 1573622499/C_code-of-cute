#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "sum.h"//���Լ���ͷ�ļ�ʹ�á��� �Ὣͷ�ļ��е�ȫ�����ݿ���
//int main(){
//	printf("hehe\n");
//	main();//һ���򵥵ĵݹ�
//	//�ݹ飺�����Լ������Լ�  �Ѵ��»�С
//	//������Ҫ������1������������������������������ʱ�� �ݹ�ֹͣ 2��ÿ�εݹ����֮��Խ��Խ�ӽ������������
//	return 0;
//}
//һ�δ�ӡһ������ �磺1234 1 2 3 4
//int main(){
//	void print(int);//��������������main������������Ҳ����������
//	int n = 0;
//	printf("������һ����:>");
//	scanf("%d", &n);
//	print(n);
//	//1234%10=4  1234/10=123 %...
//
//	return 0;
//}
//void print(int i){//1234
//	if (i > 9)
//		print(i / 10);// print(1234) print(123)  print(12) print(1) ��ӡ1 ������һ�εݹ���õĵط�����ִ������Ĵ���
//		printf("%d ", i % 10);//�ȵݹ���ִ�к���Ĵ���
//ע������û��else �ݹ�����֮��ص���һ���ݹ� ����ִ������Ĵ���
//strlen() ���ַ������� ����������ʱ���� �Զ��庯��
/*int My_strlen(char* str){
int count = 0;
while (*str != '\0'){
count++;
str++;
}
return count;
}*/
//����������ʱ���� �ݹ�
//int My_strlen(char* p){//My_strlen(abc)   1+My_strlen(bc)  1+1+My_strlen(c) 1+1+1+My_strlen('\0')
//	if (*p == '\0')
//		return 0;
//	else
//		return 1 + My_strlen(p + 1);//ָ������ ֱ������'\0'
//
//}
//int My_strlen(char* p){
//	if (*p == '\0')
//		return 0;
//	else
//	{
//		p++;//ָ������ֵ+1
//		return 1 + My_strlen(p);
//	}
//}
void print(int n){
	if (n > 9)
		print(n / 10);//�ݹ�����������ݹ��������
	printf("%d ", n);
}
int My_strlen(char* p){
	if (*p != '\0')
		return 1 + My_strlen(p + 1);
	else
		return 0;
}//�ݹ������ᷴ�ط���ֵ����һ�εݹ��λ��

//�׳� n�� n*(n-1)*...2*1
int Factor(int n){
	if (n == 1)
		return 1;
	else
		return n*(n - 1)
}//쳲��������� ��һ��������ǰһ����+ǰ������֮��
int Fibonq(int n){
	if (n < 3)
		return 1;
	else
		return Fibonq(n - 1) + Fibonq(n - 2);

}
int main(){
	char arr[] = "hello bit";
	int len = 0;
	len = My_strlen(arr);
	printf("%d\n", len);
	return 0;
}







