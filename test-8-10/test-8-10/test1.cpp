#define _CRT_SECURE_NO_WARNINGS 1
//��������ϰ
#include <stdio.h>
void test1(int arr[]){
	printf("&d\n", sizeof(arr));//4
}
void test2(char ch[]){
	printf("%d\n", sizeof(ch));//4
}
struct stu{
	char name[20];
	short age;

	//�����ṹ������
};
//int main(){
//	int a = 0;
//	//~ ��λȡ��
//	//11111111111
//	printf("%d\n", ~a);//�Բ�����иı�
//	return 0;
//}
//11--15
int main(){
	//int a = 11;
	////1011   1111
	//int b = a | (1 << 2);
	//printf("%d\n", b);

	//int a = 15;
	////1111   1011    
	//int b = a&~(1 << 2);
	//printf("%d\n", b);
	//ȥ�������� �����������
	//sizeof(�����б��ʽ�Ľ��) ���������/����������������
	//int a = 0;
	//short b = 0;
	//printf("%d\n", sizeof(b = a + 5));//2
	//printf("%d\n", a);//0

	//int arr[10] = { 0 };
	//char ch[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40
	//printf("%d\n", sizeof(ch));//10
	//test1(arr);
	//test2(ch);
	//&& ������ ����ı��ʽ����ִ��   ||������ ����ı��ʽ����ִ��
	//�������ʽ ��Ŀ������
	/*int a = 0;
	int b = 0;
	if (a > 5)
		b = 3;
	else
		b = -3;*/
	//b=(a>5 3:-3);
	//�ϴ�ֵ��max=(a>b a:b;)
	//���ű��ʽ
	//�������ҿ�ʼִ��  ���յĽ��Ϊ���һ�����ʽΪ��  ֮ǰ�ı��ʽ��Ҫִ�У���Ч��
	//���ú�����ʱ�� ���� Ϊ�������÷�  []���±����ò������� ��������������+[��]

	struct stu s1 = { "����", 16 };//ʹ��һ���ṹ������ ����һ��s1��ѧ������ ���ҳ�ʼ��
	printf("%d\n", s1.age);
	printf("%s\n", s1.name);
	struct stu* p = &s1;
	printf("%s\n", p->name);
	printf("%d\n", p->age);
	//�ṹ�����.��Ա��
	//�ṹ��ָ��->��Ա��










}

