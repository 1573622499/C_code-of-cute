#define _CRT_SECURE_NO_WARNINGS 1
     /* =    ��ֵ���ұߵ����
	  if ()  while ()  (���ʽ)Ϊ���ִ����� Ϊ�پ���Ծ*/
		  //�õ�һ���ַ�Ȼ���ӡ���� ���
//#include <stdio.h>
//int main(){
//	int ch = 0;//����һ������Ȼ�����
//	while((ch = getchar())!=EOF){//EOF-�ļ�������־ ��-1�� �ַ���������־ ��\0�� (0)
//		putchar(ch);//putchar()����ַ�'0' ASCII��ֵ ��48��  A��65�� a��97�� ��СдASCII��ֵ���32
//	}
//	return 0;
//}
//scanf() getchar() �������뻺����  
//��¼ ȷ������
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main(){

	//char password[20] = { 0 };
	//int ret = 0;//getchar()ר��
	//printf("����������:>");
	//scanf("%s", password);//��������֮����һ���س�  ��\n�� ASSCII��ֵ(10)
	//printf("��ȷ��(Y/N):>");
	//ret = getchar();//�������ԭ�����뻺���� ���滹��һ��\n(ת���ַ�)���� û�б����� 
	//	/*while ((ret = getchar()) != '\n'){*///ret�����뻺��������ַ����� ֱ��\n����
	//		;//ʲô���� �����
	//	}
	//	ret=getchar();//�ڽ������� ����ַ�
	//	if (ret == 'Y'){
	//		printf("ȷ�ϳɹ�\n");
	//
	//	}
	//	else{
	//		printf("ȷ��ʧ��\n");
	//	}
	//	//while((ret=getchar())!='\n'){
	//	;
	//}//��δ����ʾret�����뻺�����������ַ� ֱ����\n��ȫ������ Ϊ�˲�����ȷ�ϳɹ�/ʧ�ܵ��ж�
	////ֻ��ӡ0~9������
	//	int ret = 0;
	//	while ((ret = getchar()) != EOF){
	//		if (ret<'0'|| ret>'9')//if����δ��{�����} ִֻ��һ�����
	//			continue;//ֱ�ӽ�������ѭ�� �ص�ѭ�������ж��Ƿ�ִ����һ��ѭ��
	//	putchar(ret);//ֻ��ӡ0~9������
	//}

	/*for (;;)��ʼ�� �ж����� ���� ������ʡ�� ����ж�����Ϊ�� ��������Ϊ�棩һֱִ�� ��ѭ��
		for ()ѭ������ŵ㣺ֱ�� �����޸� ��ϵ���� ���ڲٿ� easily tangible
		ע��for()ѭ����� continue ���������������½����ж� ��while()ѭ�����continue������ѭ�� ��֮ͬ��
		*/
	/*ѭ������Ϊ��ֵ������k=0 ����Ϊ��ֱ���˳�ѭ����������ֵ�ͻᵼ����ѭ��
		do{} while (���ʽ); ����ִ��һ��  stmt(ѭ�����)
		�ܽ᣺while����{} ��do{}while ();��� continue�÷�����*/
	//n�Ľ׳�
	//int n = 0;
	//printf("������һ������:>");
	//scanf("%d", &n);
	//int ret = 1;
	//for (int i = 1; i <= n; i++){
	//	ret *= i;//ret��1*��n
	//}
	//printf("%d�Ľ׳�Ϊ%d\n", n,ret);

	//���1��+2��+...n!
	//���ȡ�����ÿһ�����Ľ׳� Ȼ������Ӽ��ɡ�
	//int n = 0;
	//int i = 0;
	//int j = 0;
	//int sum= 0;
	//int ret = 0;
	//printf("������һ������:>");
	//scanf("%d", &n);//n�൱��һ������
	//for (int i = 1; i <= n; ++i){//һ��n��
	//	ret = 1;//ÿһ���ڲ�ѭ����Ҫ���³�ʼ��
	//	for (int j = 1; j <= i; j++){
	//		ret *= j;//����ÿһ�����Ľ׳�
	//	}
	//	sum+= ret;
	//}
	//printf("%d\n", sum);
	//1!+2!+...n!�Ż�
	/*int n = 0;
		printf("������һ������:>");
		scanf("%d", &n);
		int ret = 1;
		int sum = 0;
		for (int i = 1; i <= n; ++i){
		ret *= i;
		sum += ret;

		}
		printf("%d\n", sum);

		*/
	//���ֲ���(ʱ�临�Ӷ�O��logN��)->˳������
	//void binsearch(int* p, int sz, int k);//��������
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8,9, 10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int k = 8;//��Ҫ���ҵ��� �±�Ϊ 7
	//binsearch(arr, sz,k);
	//���ҽ���
	/*hello bit
		h#######t
		he#####it
		hel###bit
		hell##bit
		hello#bit
		hello bit*/ /*ʵ�����ַ��*/
	
//	char arr1[] = "hello bit";
//char arr2[] = "#########";
//int left = 0;
//int right = strlen(arr1) - 1;
//while (left <= right){
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	left++;
//	right--;
//	printf("%s\n", arr2);
//	Sleep(1000); // ˯��һ����Sleep(���治��Ҫ��"")
//
//}
//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//int k = 7;
//int i = 0;
//int sz = sizeof(arr) / sizeof(arr[0]);
//for (i = 0; i < sz; ++i){
//
//	if (arr[i] == k){
//		printf("�ҵ��ˣ��±�Ϊ%d\n",i);//����ѭ����������(�������)
//		break;
//	}
//}
//if (i ==sz){
//	printf("�Ҳ��������!\n");
//}
//sizeof(�ַ���)ͳ�ư��� '\0'
//windows.h->Sleep();
//stdlib.h->system();
//�Ƚ��ַ����Ƿ���Ȳ����á� == �� ����Ҫ��strcmp()->string.h
//ģ���¼
char password[20] = { 0 };
int ch = 0;
int i = 0;
printf("��ӭ������¼ҳ��\n");
for ( i = 0; i < 3; i++){
	printf("����������:>");
	scanf("%s", password);
	printf("��ȷ������(Y/N):>");
	while ((ch = getchar()) != '\n'){
		;
	}
	ch = getchar();//�ٴ�������֤
	if (ch == 'Y'){
		printf("ȷ������ɹ�\n");//ȷ���ɹ��ڽ����ж�
		
	}
	else{
		printf("ȷ������ʧ��\n");
	}
	if (strcmp(password, "123456")==0){
		printf("��¼�ɹ�\n");
		break;//�˳�ѭ��
	}
	else{
		printf("�����������������\n");
	}

	
	
	

}














if (i == 3){
	printf("���λ��������꣬�����˳�����\n");
}




	return 0;
}

void binsearch(int* p, int sz, int k){
	int left = 0;
	int right = sz - 1;
	while (left <= right){
		int mid = (left + right) / 2;//ȷ���м��±�
		if (p[mid] > k){
			right = mid - 1;
		}
		else if (p[mid] < k){
			left = mid + 1;
		}
		else{
			printf("��ϲ���ҵ���!%d���±�Ϊ%d\n", k, mid);
			break;//�ҵ���ֱ���˳�ѭ��
		}
		if (left>right){
			printf("û���ҵ������\n");
		}
	}
}

