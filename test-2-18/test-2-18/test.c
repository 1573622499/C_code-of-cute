#define _CRT_SECURE_NO_WARNINGS 1
//������������
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	t = a;
//	a = b;
//	b = t;
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}//���캯��
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	return 0;
//}
//���ӡ1000~2000����������
//#include <stdio.h>
//int main(){
//	int year = 0;
//	int count = 0;//����
//	for (year = 1000; year <= 2000; year++){
//		if (year % 4 == 0 && year % 100 != 0){
//			count++;
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0){
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}//һ���㶨&& || �ַ� ��Ϥ �߼���&&  �߼���||
//#include <stdio.h>
//int main(){
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++){
//		if ((year % 4 == 0 && year % 400 != 0) || year % 400 == 0){
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//1��+2��+......10!
//#include <stdio.h>
//int main(){
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++){
//		ret = ret*n;
//		sum = sum + ret;
//	}
//	printf("1!+2!+3!+.....=%d\n", sum);
//	return 0;
//}
//#include <stdio.h>//��ν�����������������1��������
//int main(){
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++){
//		//����2~99��
//		for (j = 2; j < i; j++){
//			if (i%j == 0){
//				break;//�ܱ�����������������
//			}
//		}
//		if (j == i){
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//�������������Ϳɷֳ�i=a*b���ָ�ʽ  �� a��bzhi������һ��С�ڵ��ڸ���i����������£�
//#include <stdio.h>
//#include <math.h>
//int main(){
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 1; i<= 100; i++){
//		for (j = 2; j <= i/2; j++){
//			if (i%j == 0){
//				break;
//			}
//		}
//		if (j>i/2){
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}