#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//void menu(){
//	printf("*****************************************\n");
//	printf("********0.EXIT            1.PLAY*********\n");
//	printf("*****************************************\n");
//}
//void game(){
//	int ret = rand() % 100 + 1;//����1~100�������
//	int guess = 0;
//	while (1){
//		printf("������Ѿ����ɣ��������:>");
//		scanf("%d", &guess);
//		if (ret > guess){
//			printf("��С�ˣ�\n");
//		}
//		
//		else if (ret < guess){
//			printf("�´��ˣ�\n");
//		}
//		else{
//			printf("��ϲ�㣬�¶��ˣ������Ϊ%d\n", ret);
//			break;//���¶��˵�ʱ��break �˳�ѭ��
//		}
//		
//	
//	}
//
//}
//int count_binine(unsigned int s){//�����޷�����
//	int count = 0;
//	while (s){
//		if (s % 2 == 1){
//			count++;
//			s /= 2;//s=s/2
//		}
//	}
//	return count;
//}
////int main(){
////	/*for (int i = 0; i < 100; i++){
////		printf("%d ", i + 1);
////	}
////	system("pause");*/
////	//��������Ϸʵ��
////	//ʱ��� ������Ĵ��� srand((unsigned int )time(NULL));        srand((unsigned int)time(NULL));
////
////	//int input= 0;
////	//srand((unsigned int)time(NULL));//���������
////	//do{
////	//	menu();
////	//	printf("��ѡ��:>");
////	//	scanf("%d",&input);
////	//	switch (input){
////	//	case 0:
////	//	printf("�����˳���Ϸ\n");
////	//		break;
////	//	case 1:
////	//		printf("��ӭ������������Ϸ��\n");
////	//		game();
////	//		break;
////	//	default :
////	//		printf("�����������������\n");
////	//		break;
////	//	}
////
////
////
////
////
////
////	//}while(input);
////	//ͳ�ƶ�����λ�к�1�ĸ���  �����ڴ洢
////	int n = 0;
////	printf("������һ������>");
////	scanf("%d", &n);
////	int count=count_binine(n);
////	printf("%d�������к���1�ĸ���Ϊ%d\n", n, count);
////
////	return 0;
////} 
////
////int count_ll(int input){
////	int count = 0;
////	for (int i = 0; i < 32; i++){
////		if ((input >> i) & 1 == 1){
////			count++;
////		}
////	}
////	return count;
////}
////int count_lll(int n){
////	int count = 0;
////	while(n){
////		n=n&(n - 1);
////		count++;
////	}
////	return count;
////}
////int main(){
////	int input = 0;
////	printf("������һ������>");
////	scanf("%d", &input);
////	int count = count_lll(input);
////	printf("%d�Ķ��������к���1�ĸ���Ϊ%d\n",input,count);
////}
////�ṹ������Ӧ��
//struct stu{
//	char name[10];
//	int  id;
//	char nat[30];
//	int idnum[50];
//	int old;
//	char sex[3];
//	int number;
//
//};
//void input(struct stu s){
//	s = {"С��", 123456, "�����б�����", "520131985", 16, "Ů", 123456487 };
//}
//void print(struct stu s){
//	printf("������%s\n",s.name);
//	printf("ѧ�ţ�%d\n",s.id);
//	printf("���᣺%s\n",s.nat);
//	printf("���֤�ţ�%s\n",s.idnum);
//	printf("���䣺%d\n", s.old);
//	printf("�Ա�%s\n",s.sex); 
//	printf("�绰���룺%d\n",s.number); 
//}
//int main(){
//	struct stu s;
//	input(s);//���루a��
//	print(s);//��ӡ(b)
//	search(s); //������c��
//	return 0;
////}//(d)  �ṹ�� ��.�� �ṹ�����.��Ա��  ��->�� �ṹ��ָ��->��Ա��
////struct stu{
////	int age;
////	char name[10];
////};
////int main(){
////	struct stu s;
////	s = { 18, "С��" };
////	printf("%d\n", s.age);
////	printf("%s\n", s.name);
////	return 0;
////}
//#include <stdio.h>
//typedef struct stu{
//	int id;
//	char name[10];
//}sss;
//int main(){
//sss a = { 1, "����" };
//	printf("%d\n", a.id);
//	printf("%s\n", a.name);
//
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void menu(){
	printf("*****************************************\n");
	printf("***********0.EXIT             1.PLAY*****\n");
	printf("*****************************************\n");
}
void game(){
	int guess = 0;
	int ret = rand() % 100 + 1;
	printf("������Ѿ�Ϊ�����ɣ���������Ҫ�µ���:>");
	while (1){
		scanf("%d", &guess);
		if (guess > ret){
			printf("�´��ˣ�\n");
		}
		else if (guess < ret){
			printf("��С�ˣ�\n");
		}
		else{
			printf("��ϲ��¶��ˣ��������%d\n", ret);
			break;

		}
	}
}
int main(){
	int input = 0;
	srand((unsigned int)time(NULL));
	printf("��ӭ������������Ϸ��\n");
	do{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input){
		case 1:game(); break;
		case 0:printf("�����˳���Ϸ��\n");
			break;
		default:printf("�������ִ������������룡\n");
			break;
		}
	} while (input);
	return 0;
}