#define _CRT_SECURE_NO_WARNINGS 1
//ģ���¼
//#include <stdio.h>
//#include <string.h>
//int main(){
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++){
//		printf("����������,һ�������λ���:>");
//		scanf("%s", &password);
//		if (0 == strcmp(password, "123456")){
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3){
//		printf("���λ����Ѿ����꣬�����˳�����\n");
//	}
//	return 0;
//}
//
//To be continue
//#include <stdio.h>
//int main(){
//	//ʵ�ֺ����ӷ�
//	int ADD(int x, int y);//����������
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);//sum=30
//	printf("sum=%d\n",sum);//ע�������Ӧ
//	return 0;
//}
//int ADD(int x, int y){
//	//int z = x + y;
//	//return z;
//	//return x + y;
//	return (x + y);
//}
//������ʲô����ѧ�����ǳ����������ĸ���������˽�c�����еĺ����ά���ٿƵĶ��壨definition��:�ӳ���
//c�����еĺ������ࣺ1���⺯�� 2���Զ��庯��
//Ϊʲô���п⺯���� 1������֪��������ѧϰc���Ա�̵�ʱ��������һ�������д��ɺ��Ȳ���������֪������������������ӡ��������Ļ�������������ʱ�����ǻ�Ƶ����ʹ��һ�����ܣ�����Ϣ����һ���ĸ�ʽ��ӡ��ƵĻ�ϣ�printf��;
//2���ڱ�̵Ĺ��������ǻ�Ƶ������һЩ�ַ��������Ĺ�����strcpy��
//3���ڱ�̵�ʱ������Ҳ���㣬���ǻ����n��k�η����������㣨pow)
//���������������Ļ������ܣ����ǲ���ҵ���Դ��롣�����ڿ����Ĺ�����ÿ������Ա�������õĵ���Ϊ��֧�ֿ���ֲ�Ժ���߳����Ч�ʣ�����c���ԵĻ����ṩ��һϵ�����ƵĿ⺯�����������Ա�������������
//ѧϰ�⺯��  web  www.cplusplus.com
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char arr1[] = "bit";
//	char arr2[] = "#############";
//	//bit\0 \0Ҳ�������ˣ�
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy-string copy-�ַ�������
//	//strlen-string length-�ַ��������й�
//	char str[20] = { 0 };
//	//strcpy(str, "723897");
//	strcpy(str,"woxihuanni");
//	printf("%s\n", str);
//	return 0;
//}
//strcpy
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char ch1[] = "qiusen";
//	char ch2[] = "******";
//	strcpy(ch2, ch1);
//	printf("%s\n", ch2);
//	return 0;
//}
//memset memory-�ڴ� set����  ���滻  ��ʽ  memset(������,�����š�,����)
//#include <stdio.h>
//int main(){
//	char arr[] = "hello world";
//	memset(arr, '#', 5);
//	printf("%s\n", arr);
//	//##### world
//	return 0;
//}
//������վ ����ѧϰc���Կ⺯��  www.cplusplus.com   http://en.cppreference.com
//�Զ��庯�� ���к�����������ֵ���������������ǲ�һ��������Щ���������Լ����趨�ģ�
//���ӣ�д��һ���Ƚ����������еĽϴ�ֵ
//#include <stdio.h>
//int Getmax(int x, int y){
//	return x > y ? x : y;
//}
//int main(){
//	int a = 3;
//	int b = 5;//�����������ٽ��бȽ�
//	int c = Getmax(a, b);
//	printf("�ϴ�ֵ��%d\n", c);
//	return 0;//�����彻�����Ǻ�����ʵ��
//}
//#include <stdio.h>
//int get_max(int x, int y){//��������
//	if (x > y){
//		return x;
//	}
//	else return y;
//	//return x>y?x:y;//������Ŀ������
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//������ʹ��
//	printf("max=%d\n", max);
//	max = get_max(122, get_max(2,7));
//	printf("max=%d\n", max);
//	return 0;
//}
//�Ƚ��������Ĵ�С��������ϴ�ֵ ��������
//#include <stdio.h>
//int get_max(int x, int y, int z){
//	if (x > y&&x > z){
//		return x;
//	}
//	else if (y > x&&y > z){
//		return y;
//	}
//	else if (z > x&&z > y){
//		return z;
//	}
//		
//	
//}
//int main(){
//	int a = 2;
//	int b = 7;
//	int c = 8;
//	int max = get_max(a, b, c);
//	printf("max=%d\n",max);
//	return 0;
//}
//������������ֵ������ 1���Ӽ��� 2��^ 3�������������н����� ���ú���ʵ�� ָ��
//#include <stdio.h>
//void Swap(int* x, int* y){
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;//�ɹ�����
//}
//int main(){
//	int a = 3;
//	int b = 5;
//	printf("before:a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("after:a=%d b=%d\n", a, b);
//	return 0;
//}
//#include <stdio.h>//�������ָ��˼��
//int main(){
//	int a = 10;
//	int* pa = &a;//paָ�����
//	*pa = 20;//�����ò�������*��
//	printf("a=%d\n", *pa);
//	return 0;
//}
//�����Ӧ ���������Ĵ���  ��ʵ�Σ�ȷ����ֵ�����β�[��ʽ�ϵĲ���]����Ӧ�ββ��� ���ں�������Ч  �������������֮����Զ����٣� ���������������ʽ������
//ע�⣺��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ������copy��
//�������ã���ֵ����:���βεĸ��Ĳ���Ӱ��ʵ��    ��ַ���ã��ı�ֵ����ָ�룺����ַ ���ִ��η�ʽ�����ú����ĺ�����ߵı��������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ���������ı���
//  ���ú���ʵ���ж�һ�����ǲ�������   �ж�һ�����ǲ�������  ʵ����������������ֲ���    ÿ�ε������������num��+1;
//100~200����
//#include <stdio.h>
//int is_prime(int n){
//	int c = 0;
//	for (c = 2; c < n; c++){//c<=sqrt(n)(��������)
//		if (n%c == 0){
//			return 0;//��Ӧ˼��
//		}
//	}
//	return 1;
//}
//int main(){
//	int i=0;
//	for (i = 100; i <= 200; i++){
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime == 1){//���÷���ֵ�����ж�
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//���ú�����ӡ1000~2000֮����������
//#include <stdio.h>
//int is_runnian(int n){//The code is real
//	if ((n % 4 == 0) && (n % 100 != 0) || n % 400 == 0)
//		return 1;
//	else return 0;
//}
//int main(){
//	int i = 0;
//	for (i = 1000; i <= 2000; i++){
//		if (1 == is_runnian(i)){
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//numÿ�ζ�����1
//#include <stdio.h>
//void get1(int n){
//	while (1){//һ����forѭ�� ����һ��while  ���߶�����Ϸ������do while ѭ��
//		n = n + 1;
//		printf("num=%d\n", n);
//	}
//}
//int main(){
//	int num = 0;
//	get1(num);
//	return 0;
//}
//#include <stdio.h>
//void ppp(int n){
//	if (n > 9){
//		ppp(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//int main(){//1234  1  2  3  4
//	int num = 0;
//	scanf("%d", &num);
//	ppp(num);
//	return 0;
//}
//�����������������ַ����ĳ���
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char aa[] = "abc";
//	int len = strlen(aa);
//	printf("%d\n", len);
//	return 0;
//}
//#include <stdio.h>//����ָ���ƶ����м���(��\0Ϊ��־)    str
//int my_strlen(char* pa){
//	int count = 0;
//	while (*pa!='\0'){
//		count++;
//		pa++;
//	}
//	return count;
//}
//int main(){
//	char ch[] = "kdjlka";//6
//	int len = my_strlen(ch);//������ ����sizeof()  strlen() ����ʾ��Ԫ�ص�ַ
//	printf("������%d\n", len);
//	printf("%d\n", strlen(ch));
//	return 0;
//}
//�ݹ�ķ���
//#include <stdio.h>
//int my_strlen(char* parr){
//	if(*parr!='\0'){ // ����ָ�� b i t \0
//		return 1 + my_strlen(parr+1);//ָ���ƶ�һ��
//	}//my_strlen("bit")    1+my_strlen("it")  1+1+my_strlen("i")  1+1+1+my_strlen("(\0)")  1+1+1+0=3
//	else 
//		return 0;
//}
//int main(){
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("���ַ����ĳ���:%d\n", len);
//	return 0;
//}
//n�Ľ׳�
//#include <stdio.h>//�ݹ�˼��
//int mil(int s){
//	if (s == 1){
//		return 1;
//	}
//	else return s*mil(s - 1);
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int sum = mil(n);
//	printf("sum=%d\n", sum);
//}
//#include <stdio.h>
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int s = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++){
//		s *= i;
//	}
//	printf("%d�Ľ׳�Ϊ��%d\n", n,s);
//	return 0;
//}