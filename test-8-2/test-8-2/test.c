#define _CRT_SECURE_NO_WARNINGS 1
int My_strlen(char* str){
	//1��ѭ��
	//2���ݹ�
	if (*str == '\0')
		return 0;
	else
		return 1+My_strlen(str + 1);
}
void print(int n){//1234   1  2   3  4
	if (n > 9)
		print(n / 10);//�ȳ���
		printf("%d  ", n % 10);//��ȡ��

}
//int main(){
//	char arr[] = "abc";//3
//	int len = 0;
//	len = My_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//ѭ���͵ݹ飨�������ظ���һ�����顿����Ҫһ��ƽ��� 
//n��
int Factor1(int m){
	int i = 0;
	int ret = 1;
	for (i = 1; i <= m; i++){
		ret *= i;//1*2*3*...m
	}
	return ret;//n!
}
int Factor2(int n){
	if (n == 1)
		return 1;
	else
		return n*Factor2(n - 1);


}
//TDD--������������ �ȰѴ����߼�д���� �ٶԺ������ж���
int Fib(int n){//1 1 2 3 5 8 13 21 34 55...
	if (n < 3)//   a b c       c=a+b   a=b b=c(ѭ������/���ø�ֵ)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);

}
int Fib2(int n){
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2){
		c = a + b;
		a = b;
		b = c;
		n--;//�ƶ����� ��n-2����
	}
	return c;


}
int main(){
	int n = 0;
	scanf("%d", &n);
	 printf("%d\n", Fib2(n));
	return 0;
}//