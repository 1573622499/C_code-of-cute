#define _CRT_SECURE_NO_WARNINGS 1
//ͳ��һ��int���� ������λ()����1�ĸ���  ���������㷨
//���ڶ��������� %2 /2���е��� ����
//#include <stdio.h>
//int count_bit_one(unsigned int ret){
//	int count = 0;
//	while (ret){
//		if (ret % 2 == 1){
//			count++;
//		}
//		ret /= 2;
//	}
//	return count;
//}
//int main(){
//	int n = 0;
//	printf("������һ�������Եõ����Ķ�����λ�к���1�ĸ���\n");
//	scanf("%d", &n);
//	int count=count_bit_one(n);
//	printf("%d�Ķ�����λ�к���%d��1\n",n,count);
//

//	return 0;
//}
//�ڶ��� &1  &�Բ��루�����洢�����в���>>��λ����
//#include <stdio.h>
//#include <stdlib.h>//ϵͳ�⺯����ͷ�ļ�
//int count_bit_one(int n){
//	int count = 0;
//	for (int i = 0; i < 32; ++i){
//		if (((n >> i) & 1) == 1){
//			count++;
//		}
//	}
//	return count;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("count=%d\n", count);
//	return 0;
//}//system("pause");������ͣ
//����
//#include <stdio.h>
//int count_bit_one(int s){
//	int count = 0;
//	while(s){
//		s = s&(s - 1);//ͳ��1�ĸ���
//		count++;
//	}
//	return count;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("count=%d\n", count);
//	return 0;
//}
//recover
//дһ��������a�Ķ����ƣ����룩��ʾ����1
//��һ��д�� ���Ż�
//#include <stdio.h>
//
//int main(){
//	//��������
//	int count_bit_one(int n);
//	int a = 0;
//	printf("������һ��������>");
//	scanf("%d", &a);
//	int count = count_bit_one(a);//��������
//	printf("%d������λ����1�ĸ���Ϊ%d\n", a, count);
//	return 0;
//}
//int count_bit_one(unsigned n){//��������  ��int ����unsigned ��Ը��� ok
//	int count = 0;
//	while (n){
//		if (n % 2 == 1){
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//�ڶ���д��
//#include <stdio.h>
//int count_one(int s){
//	int count = 0;
//	for (int i = 0; i < 32; ++i){
//		if (((s >> i) & 1) == 1){
//			count++;
//		}
//	}
//	return count;
//}
//int main(){
//	int n = 0;
//	printf("������һ��������>");
//	scanf("%d", &n);
//	int count = count_one(n);
//	printf("%d������λ�к���1�ĸ���Ϊ%d\n", n, count);
//	return 0;
//}
//��ţ�Ƶ��㷨
//#include <stdio.h>
//int count_one(int n){
//	int count = 0;
//	while (n){
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main(){
//	int n = 0;
//	printf("������һ��������>");
//	scanf("%d", &n);
//	int count = count_one(n);
//	printf("%d�������к���1�ĸ���Ϊ%d\n", n, count);
//	return 0;
//}
//#include <stdlib.h> -> system("pause")(��ͣ)
//�ֱ��ӡһ����������λ�Ļ�ż��
#/*include <stdio.h>
void print(int n){
	printf("����λ��������Ϊ��\n");
	for (int i = 30; i >= 0; i -= 2){
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}
void printt(int n){//����λ��ż��λ����
	printf("ż��λ��������Ϊ��\n");
	for (int i = 31; i >= 0; i -= 2){
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}
int main(){
	int n = 0;
	printf("������һ������>");
	scanf("%d", &n);
	print(n);
	printt(n);
	return 0;
}*/
#include <stdio.h>
int count_diff(int a, int b){
	int tmp = a^b;//�� ͳ��tmp�к���1�ĸ���

}
int main(){
	int a= 0;
	int b = 0;
	printf("��������������:>");
	//������������ͬ�ĸ���
	int c = count_diff(int a, int b);
	printf("%d��%d������λ�в�ͬ�ĸ�����%d��\n", a, b, c);
	return 0;
}