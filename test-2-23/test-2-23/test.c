#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(){
//	int ch = 0;
//	while ((ch = getchar()) != EOF){//scanf��Ӧ����getchar
//		putchar(ch);//��Ӧ��printf����-putchar
//	}
//	return 0;
//}
//
//�ṹ��struct
//#include <stdio.h>
//struct book{
//	char name[20];
//	int price;
//};
//int main(){
//	struct book b={ "C���Գ������",15 };
//	printf("������%s\n", b.name);
//	printf("�۸�%d\n", b.price);
//	struct book* pb = &b;
//	printf("%p\n", b);
//	printf("������%s\n", (*pb).name);
//	printf("������%s\n",pb->name);
//		printf("�۸�%d\n", pb->price);
//����18�� �Ա��� 
//#include <stdio.h>
//struct person {
//	char name[20];
//	int age;
//};
//int main(){
//	struct person b = { "����", 18 };
//		printf("������%s\n", b.name);
//	printf("���䣺%d\n", b.age);
//	struct person* pb = &b;
//	b.age = 20;
//	printf("������%s\n", (*pb).name);
//	printf("������%s\n", pb->name);
//	printf("����:%d\n", pb->age);
//	return 0;
//}//����������
//#include <stdio.h>
//int main(){
//	int ch = 0;
//	while ((ch = getchar()) != EOF){
//		putchar(ch);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	char password[20] = { 0 };
//	int ch = 0;
//	int ret = 0;
//	printf("���������룺>");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N)��>");
//	while ((ch = getchar()) != '\n'){
//		;
//	}//��\nһֱ��ȡ��ֱ��\n����
//	ret = getchar();
//	if (ret == 'Y'){
//		printf("ȷ�ϳɹ�\n");
//	}
//	else{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char arr1[] = "bit";
//	char arr2[] = "##############";
//	char arr3[] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr1);strcpy:�����ַ�������Ӧ����
//	strcpy(arr3, "fuck you!");
//	printf("%s\n", arr3);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	char ch[] = "hello world";
//	memset(ch, "*", 5);//memset ���԰��ַ������и��ǣ����ڴ�����
//	printf("%s\n", ch);
//	return 0;
//}
//
//
//get_max;���ú�������ʵ��
//#include <stdio.h>
//int get_max(int x, int y){
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("�ϴ�ֵ��%d\n",max);
//	max = get_max(980, 100);
//	printf("max=%d\n", max);
//	return 0;
//}
//#include <stdio.h>
//get_max(int x, int y){
//	return (x > y ? (x) : (y));
//}
//int main(){
//	int a = 0;
//	int b = 0;
//	printf("�������������������жϴ�С:>");
//	scanf("%d%d", &a,& b);
//	int max=get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//���ú�����������������ͨ������֪���֣�
//#include <stdio.h>
//void Swap(int* pa, int* pb){//why?����ʵ�ֽ������֣�x,y(�β�)�� a,b(ʵ��)�޹أ����ڵĵ�ַ��ͬ����Ҫ�ı�a,b��ֵ ��Ҫ��ֵ�任
//
//	int tmp = 0;
//		tmp = *pa;
//	*pa= *pb;
//	*pb= tmp;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������a=%d b=%d\n", a,b);
//	return 0;
//}
//���ú����ж�һ�����ǲ���������100~200��
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n){
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++){
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main(){
//	int i = 0;
//	for (i = 100; i <= 200; i++){
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//���ú���д�����꣨1000~2000��
//#include <stdio.h>
//int is_let_year(int y){
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main(){
//	int year = 0;
//	for (year= 1000; year <= 2000; year++){
//		if (1 == is_let_year(year))
//			printf("%d ", year);
//	}
//	return 0;
//}
//���ֲ��� ���ú��������������
#include <stdio.h>
int binary_search(int arr[],int k,int sz){
	int left = 0;
	int right = sz - 1;
	while(left<=right){
		int mid = (left + right) / 2;
		if (arr[mid] > k){
			right = mid - 1;
		}
		else if (arr[mid] < k){
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 18;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);
	if (ret == -1){
		printf("û���ҵ�������\n");
	}
	else {
		printf("�ҵ��ˣ��±꣺%d\n", ret);
	}
	return 0;
}