#define _CRT_SECURE_NO_WARNINGS 1
//static + �ֲ����� �ı�ֲ��������������ڣ��䳤���ֲ�������һ��ʱ�䲻����
//static + ȫ�ֱ��� �ı�ȫ�ֱ�����������   ��extern��ʱ���޷�����ȫ�ֱ���
//static + ���� �ı亯������������ �ڲ���������->�ⲿ��������
//��ֵ�����㣩->������ѭ��
//for��int i = 0; i < 10; i++ ��{
//	if (i = 5)
//	printf("%d\n", i);//��ӡ5��ѭ��
//}
//switch ()�����case default ˳��û�о��� ֻҪû��break �ͼ���ִ�����
//1����������С��� (���� ���������� )
////2�����ı���
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++){
//		if (i % 3 == 0)//��ʾ���ܹ��������� �������ı���
//		{
//			printf("%d ", i);
//			count++;//ͳ���ܱ����������ĸ���
//		}
//	}
//	printf("\n�ܱ�3����������%d��\n", count);
//	return 0;
//}scanf("��ʽһ��")�̣�/�� ������%��
//3�����Լ��->շת�����
//m 24 n 18 �ô����ȥ%С���� ���m%n==0 n(����)�������Լ�� ��r=m%n  ���� m=n n=r ����% �Ϳ����ҵ����Լ�� 
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;//r��������m%n��ֵ
//	printf("������������:>");
//	scanf("%d%d", &m, &n);
//	while (r = m%n){//���m%n==0 ���Լ����n���ҵ� ���ҽ���ѭ��
//	//r = m%n;
//		m = n;
//		n = r;//�������� շת�����
//		//֤�������ͱ������Խ��н���
//	}
//	printf("���Լ��Ϊ:>%d\n", n);
//
//	return 0;
//}
//4���ж�����
//���������� 1���ܱ�4�������Ҳ��ܱ�100���� 2���ܱ�400����
//��ӡ1000~2000֮����� ͳ���������
//#include <stdio.h>
//int main(){
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++){
		//һ��forѭ����ʼ�����ж� ��������ҿ�ԭ����� �˽�ѭ������
		//if (year % 4 == 0 && year % 100 != 0){
		//	printf("%d ", year);
		//	count++;
		//}
		//else if (year % 400 == 0){//�������˫��֧ ���Լ򻯺ϲ�

		//	printf("%d ", year);
		//	count++;
		//}
//		if (((year%4==0) && (year%100!=0)) || (year % 400 == 0)){//��������һ��ϲ�
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n1000~2000��������������%d��\n", count);
//
//	return 0;
//}
//5�������������ܱ��Լ���1���������� �Գ�����2~i-1������% if:ȫ�������ܱ����� ��������
//�Ƽ�����������n�־���   ע�⣺����������������
//#include <stdio.h>
//int main(){
//	//�Գ������
//	//�ж�i�Ƿ�Ϊ����
//	int i = 0;
//	int j = 0;
//	printf("������һ���������ж��Ƿ�Ϊ����:>");
//	scanf("%d", &i);
//	while(1){
//		for (j = 2; j < i; j++){
//			if (i%j == 0)
//				break;//����ѭ��  //���� ��һ�֣��������� �ڶ��֣�2~i-1��֮����������ܱ�����->�����Ҫ�ж�
//		}//breakֱ������ѭ�� ��˻���Ҫһ��ѭ��
//		if (j == i){
//			printf("%d������\n");
//			break;//Ȼ������ѭ��
//		}
//		if (j < i){
//			printf("%d��������\n", i);
//			break;
//		}
//	}
//	return 0;
//}
//�ж�200~300֮������� ����ͳ����������
//#include <stdio.h>
//#include <math.h>
//int main(){
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 201; i <= 300; i+=2){//�Ż�1�������������� i+=2  i=i+2 ���ߵĵȼ�
//		for (j = 2; j <= sqrt(i); j++){//�Ż�2�� i=a*b(�ֽ�������)a/b <=sqrt(i) �������ƽ��<i/2
//			if (i%j == 0)//��i-1��Ϊ sqrt(i)  �����sqrt()֮ǰ��û�ҵ��ܱ��������� ֮��Ͳ�������
//				break;//�Ż�3��������ѧ֪ʶ�ڽ��з��� �������滻��i/2
//		}
//		if (j>sqrt(i)){//���ܱ����� ��Ϊ����
//			printf("%d ", i);//��Ȼ����ѭ�� ��������
//			count++;
//		}
//	}
//	printf("\n200~300֮�京��%d������\n", count);
//	return 0;
//}
//i=a*b(���������ʽ) a/b< sqrt(i) < i / 2����
//����(1~100֮��)�ĸ���
//#include <stdio.h>//ȡ%��ʱ�� %10 ����0(����)~9
//int main(){
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++){
//		if (i % 10 == 9)//�Ŵ��ڵ�λ�� ��λ ʮλ
//		{
//			printf("%d ", i);
//			count++;
//		}//ͳ�Ƹ�λΪ9���� 
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//			//ͳ��ʮλΪ9����
//		}
//	}
//	//99  ->   ��λ��ʮλ�ֱ���һ��
//	printf("\n1~100֮���������9��һ����%d��\n", count);
//	return 0;
//}
//�������  1/1+1/2+1/3+...1/100?
//#include <stdio.h>
//int main(){
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++){//�Ӽ�����
//		sum +=flag* 1.0 / i;//���������ӷ�ĸ������һ��Ϊ������ �����Ϊ������
//		flag = -flag;//��������
//	}
//	//printf("1/1+1/2+1/3+...+1/100=%lf\n", sum);
//	printf("1/1-1/2+1/3+1/4+...-1/100=%lf\n", sum);
//	return 0;
//}
//ʮ�������ֵ ѭ��
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 30, 70, 59 };//������ֵ 70
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int max = arr[0];//Ϊʲô����max��ʼ��Ϊ0 ��Ϊ0����Ϊ���ֵ ������ȫΪ������
//	for (i = 0; i < sz; i++){
//		if (max < arr[i])
//			max = arr[i];//���maxС�������Ԫ�� �ͽ��Ǹ�Ԫ�ظ���max
//	}
//	printf("���ֵΪ%d\n", max);
//	return 0;
//}
//�žų˷���
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++){//ȷ������  n��n�� ��������������
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%-2d ", i, j, i*j);//��ӡÿһ�е�����
//		}//%d->��ӡ���� %2d��ӡ����λ�ã�û�����ݿո��룩%-2d(��ӡ����λ�ò��������)
//		printf("\n");//ÿһ�����ݽ�������
//	}
//
//
//
//
//
//	return 0;
//}
//��һ�ָ�ʽ
//1*1 1*2 ......1*9
//2*1  2*2...�ظ���ʽ��
//#include <stdio.h>
//int main(){
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++){
//		for (j = 1; j <= 9; j++){
//			printf("%d*%d=%d\t ", i, j, i*j);//\tΪת���ַ� ˮƽ�Ʊ��
//		}
//		printf("\n");
//	}
//	return 0;
//}
//���ֲ���->��������
//#include <stdio.h>
//int main(){
//	void BinSearch(int arr[], int sz, int k);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//������7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BinSearch(arr, sz,k);//���ֲ��ң��۰���ң����� ���Ҵ���
//
//
//	return 0;
//}
//void BinSearch(int arr[], int sz,int k){
//	int left = 0;//ȷ�����±�
//	int right = sz - 1;//ȷ�����±�
//	while (left <= right){
//		int mid = (left + right) / 2;//ͳ���м��±� ׼�������۰����
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;//���ҵ������������break����ѭ��
//		}
//	}
//	if (left>right){
//		printf("û�з��������\n");
//	}
//}
//��������� rand(); -> srand(�仯����)->srand((unsigned int)time(NULL));ʱ�亯�� ������һ�����Σ�time(ָ��)
//��������Ϸ
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu(){
//	printf("********************************************\n");
//	printf("*******1.Play                  0.Exit*******\n");
//	printf("********************************************\n");
//
//}
//void game(){
//	int guess = 0;//rand() 0~�����  %100 ����0~99 +1  1~100
//	int ret = rand() % 100 + 1;//1~100
//	printf("���������ϵͳ�Զ�����\n");
//	while (1){
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess>ret){
//			printf("�´���!\n");
//		}
//		else if (guess < ret){
//			printf("��С��!\n");
//		}
//		else{
//			printf("��ϲ�㣬�¶��ˣ������Ϊ%d\n", ret);
//			break;//���¶������ʱ�˳�ѭ�� ������Ϸ
//		}
//	}
//}
//int main(){
//	int input = 0;
//	srand((unsigned int)time(NULL));//����ʱ������������
//	do{
//		menu();//�����˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�����˳���Ϸ\n");
//			break;
//		default:
//			printf("������� ����������\n");
//			break;
//
//		}
//
//	} while (input);//if inputΪ0 ����ѭ��
//
//
//	return 0;
//}
//�������ʼʱ�� 1970��1��1�� 00��00��00  ʱ�����ǰʱ���ȥ�������ʼʱ�� ���룩
//goto ��� һ����� ��ѭ��Ƕ���г��� 
//goto again://һ�㲻����ʹ�� ���״��Ҵ���ִ��˳�� �߼�
//again:
//һ���򵥵Ĺػ�����
#include <stdio.h>
#include <stdlib.h>//system�⺯�� ��Ҫ����Ӧͷ�ļ�
#include <string.h>
int main(){
	char input[20] = { 0 };
	system("shutdown -s -t 60");//ϵͳ���� ���������һ���Ӻ�ػ�
	printf("��ĵ��Խ���һ���Ӻ��Զ��ػ���IF�����롰��������ȡ���ػ�\n");
	//again:
	//printf("������;>");
	//scanf("%s", input);
	//if (strcmp(input, "������") == 0){
	//	system("shutdown -a");//ϵͳָ�� ȡ���ػ�
	//}
	//else{
	//	goto again;
	//}
	//����ѭ��
	while (1){
		printf("������;>");
		scanf("%s", input);
		if (strcmp(input, "������") == 0){
			system("shutdown -a");//ϵͳָ�� ȡ���ػ�
			break;
		}
	}
	return 0;
}







