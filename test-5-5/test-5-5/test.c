#define _CRT_SECURE_NO_WARNINGS 1
//n�Ľ׳�
//#include <stdio.h>
//int main(){
//	int sum = 0;
//	int s = 1;
//	printf("������һ������,�������Ľ׳ˣ�>");
//	scanf("%d", &sum);
//	for (int i = 1; i <= sum; i++){
//		s = s*i;
//	}
//	printf("%d�Ľ׳�Ϊ��%d\n", sum, s);
//	return 0;
//}
//�ݹ�д��
#include <stdio.h>
int Product(int n){
	if (n == 1){
		return 1;
	}
	else {
		return n* Product(n -1);
	}
}
int main(){
	int n = 0;
	printf("������һ������,�������Ľ׳ˣ�>");
	scanf("%d", &n);
	int sum = Product(n);
	printf("%d�Ľ׳�Ϊ%d\n", n, sum);
	return 0;
}