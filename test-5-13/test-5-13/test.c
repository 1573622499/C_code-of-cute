#define _CRT_SECURE_NO_WARNINGS 1
//�ṹ�������ϰ
//��дatm�Զ�ȡ���
//#include <stdio.h>
//typedef struct banker{
//	int id;//�˻�
//	char name[10];//����
//	char password[20];//����
//	int belance;//���
//}bank;
//int main(){
//	bank s[3];
//	int i = 0;
//	for (i = 0; i < 3; ++i){//&������
//		printf("�����������˻� ���� ���� ��>");
//		scanf("%d %s %s %d", &s[i].id, &s[i].name, &s[i].password, &s[i].belance);
//	}
//	return 0;
//}

//�ṹ�壨ֵ�ļ��ϣ����͵����� ��ʼ�� �ṹ���Ա���� ����
//��������һ��ѧ��
//struct stu{
//	char name[10];//����
//	int age;//����
//	char sex[3];//�Ա�
//	char id[10];//ѧ��
//};//;���ܶ�
//#include <stdio.h>
////�����ṹ��(һ����������� ����ռ�ڴ�)
//typedef struct stu{//struct-�ṹ��ؼ��� stu-�ṹ���ǩ +  =�ṹ������   typedef ���Խ��������ͼ� ����ʹ��
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[3];//����Ϊ��Ա����
//}stu;//;ǰ����Խӱ����� -ȫ�ֱ��� ��������ֱ�������ﶨ��
//int main(){
//	//����һ���ṹ����� ��û�г�ʼ��  �ֲ�����
//	stu s = { "����", 18, "1567686868", "Ů" };
//		//printf("%s\n", s.name);
//	//�ṹ���׽ṹ��
//
//	return 0;
//}
//#include <stdio.h>
//struct s1{
//	int age;
//	char ch;
//	char arr[20];
//	float a;
//}m;
//struct s2{
//	double f;
//	struct s1 m;//����������������
//	int s;
//};
//int main(){
//	char arr[] = "hello bit";
//	struct s2 n = { 3.14, { 18, 's',"hello bit" ,2.3 }, 100 };//�Խṹ��������г�ʼ��
//	printf("%d\n",n.m.age);
//	printf("%c\n", n.m.ch);
//	printf("%lf\n",n.m.a);
//	printf("%d\n",n.s);
//
//
//	return 0;
//}
//ʹ�ýṹ��ָ��
//#include <stdio.h>
//struct per{
//	char name[10];
//	int age;
//};
//void pprintf(struct per str){
//	printf("%s\n", str.name);
//	printf("%d\n", str.age);
//}
//void ppprintf(struct per* str){
//	printf("%s\n", (*str).name);
//	printf("%d\n", (*str).age);
//	printf("%s\n", str->name);
//	printf("%d\n", str->age);
//}
//int main(){
//	struct per t = { "����", 20 };
//	pprintf(t);//���δ����ǽṹ�����
//	struct per* pp = &t;
//	ppprintf(pp);
//	//printf("%s\n", pp->name);
//	//printf("%d\n", pp->age);//ע��ʵ�β���д���� �βα���Ҫд����
//
//	return 0;
//}
//ѡ��ppprint�����������Ҫ����  �����ڴ����ռ� 
//���ݽṹ �������ݽṹ  ˳��� ���� ջ���Ƚ����������ȳ��� ����   �������ݽṹ ������ ͼ