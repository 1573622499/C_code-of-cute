#define _CRT_SECURE_NO_WARNINGS 1
//���ֲ���
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int h = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > h){
//			right = mid - 1;
//		}
//		else if (arr[mid] < h){
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;//�ҵ��˾Ϳ�����������ѭ��
//		}
//	}
//	if (left>right){
//		printf("δ���ҵ������\n");
//	}
//	return;
//}
//
//Ӧ�õݹ�ʵ��1+2+...100=5050
//#include <stdio.h>
//int main(){
//	int add(int i);//��������
//	int n = 100;
//	int sum = add(n);//���� ʵ��  ��������
//	printf("1+2+...100=%d\n", sum);
//	return 0;
//}
//int add(int i){//���� �β�
//	if (i == 1){//����ʵ��
//		return 1;
//	}
//	else{
//		return add(i - 1) + i;//ǰһ������1�ĺ͵�������һ������1�ĺͼ��������� ʵ�ֵݹ�
//	}//ʵ��->�β�
//}
//  쳲��������� 1 1 2 3 5 8 13 21 34 55.....
//#include <stdio.h>
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int sum = FEI(n);
//	printf("��%d��쳲�����������Ϊ%d\n", n, sum);
//	return 0;
//}
//int FEI(int n){
//	if (n < 3){//ȷ������ ��ʱ����ֵ��������
//		return 1;
//	}
//	else{
//		return FEI(n - 1) + FEI(n - 2);//һ������������������֮��
//	}
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main(){
//	char ch1[] = "welcome to CQ of engineering";
//	char ch2[] = "############################";
//	int left = 0;
//	int sz = sizeof(ch1) / sizeof(ch1[0]);
//	int right = sz - 2;
//	while (left <= right){
//		ch2[left] = ch1[left];
//		ch2[right] = ch1[right];
//		left++;
//		right--;
//		//Sleep(1000);
//		printf("%s\n", ch2);//���кܹؼ� ��Ӧ��������scree������ʾ
//		system("cls");//�����Ļ
//	}
//	//printf("%s\n", ch2); ����д��
//	return 0;
//}
//���һ����¼ϵͳ��ʾ
//#include <stdio.h>
//#include <string.h>
//int main(){
//	int i = 0;//���Ƶ�¼����
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++){
//		printf("���������룬����֤������\n");//��ȷ����Ϊ5201314
//		scanf("%s", &password);//�ַ����ıȽ� strcmp string compare
//		if (0 == strcmp(password, "5201314"))//�ַ����Ƚ���ʽ if(0==strcmp(?,?))
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else {
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3){
//		printf("�����˳�����\n");
//	}
//	return 0;
//}#define n 10 ���ų���
//#include <stdio.h>
//int main(){
//	int sum(int , int );//��������ʡ��
//	int num1 = 10;
//	int num2 = 20;
//	int and = sum(num1,num2);
//	printf("���������ĺ�Ϊ%d\n", and);
//	return 0;
//}
//int sum(int x, int y){
//	int z = 0;
//	z = x + y;
//	return z;
//}
//�����������ú���ʵ��
////#include <stdio.h>
////void swap(int x, int y){//a,b ����?
////	//�����ǽ���������
////	x = x^y;
////	y = x^y;
////	x = x^y;
////}
////int main(){
////	int a = 3;
////	int b = 5;
////	printf("before %d %d\n", a, b);
////	swap(a, b);
////	printf("after %d %d\n", a, b);
////	return 0;
////}
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char arr1[] = "bit";//ʡ��\0��Ϊ�ַ���������־ ����
//	char arr2[] = "***********";
//	printf("%s\n", arr2);
//	strcpy(arr2, arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
