#define _CRT_SECURE_NO_WARNINGS 1
//ָ�뺯����ҵ
//1.���������������մӴ�С���(ָ��ʵ��)
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int* pa = &a;
//	int* pb = &b;
//	if (*pa > *pb){
//		printf("%d ", *pa);
//		printf("%d", *pb);
//	}
//	else
//		printf("%d ", *pb);
//	printf("%d ", *pa);
//	return 0;
//}
//2.����һ���ַ�����ͳ�����а����ַ�c�ĸ���
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char ch []= "djkadjkacccccc";//""ʡ��\0Ŷ size of() ����Ҫ��\0
//	 //��������ch���� c�ĸ���Ϊ6
//	int count = 0;//����������
//	int sz = strlen(ch);
//	int i = 0;
//	for (i=0;i<sz;i++){
//		if (ch[i] == 'c'){
//			count++;
//		}
//	}
//	printf("��c�ĸ�����%d��\n", count);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int cube(int n);
//	int m = 0;
//	scanf("%d", &m);//����������Ϊ5  ��������125
//	int s = cube(m);//cube()��ʾ ����һ����������
//	printf("n������Ϊ%d\n", s);
//	return 0;
//}
//int cube(int n){
//	return n*n*n;
//}
//��1~100�ڵ��������ж��������ִ���д�ɺ���ʵ��
#include <stdio.h>//����ʹ�� �Գ��� ��Ϊ���� ֻ���ܱ�1�ͱ�����������
#include <math.h>
int fun(int x){
	int i = 0;
	for (i = 2; i <= sqrt(x); i++){
		if (x%i == 0)//��������
			return 0;
	}
	if (i > sqrt(x)){//������
		return 1;
	}
}
int main(){
	int num = 0;
	for (num = 2; num <= 100; num++){
		if (fun(num) == 1){//�ж��Ƿ�Ϊ����
			printf("%d ", num);
		}
	}

	return 0;
}