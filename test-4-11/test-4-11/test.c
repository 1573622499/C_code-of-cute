#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////���������ࣺ����(�����͸�����) ��λ λ  ��ֵ ��Ŀ ��ϵ �߼� ���� ���� �±����� �������úͽṹ��Ա
//int main(){
//	int a = 5/2;//��2
//	int b = 5 % 2;//����1 % ֻ�������
//	printf("a=%d b=%d\n", a, b);
//	double c = 5/ 2.0;//2.500000 double Ĭ�ϱ�����λС�� double /������һ������С��
//	printf("c=%lf\n", c);//double ��Ӧ��ӡ����%lf  float %f �����Ⱥ�˫����
//	
//	return 0;
//}
//��λ������ << >>  * /
////<< ����������ұ߲�0
//#include <stdio.h>
//int main(){
//	int a = 16;
//	//a 00000000000000000000000000010000(16)
//	//���Ʋ�����>>  �г�2��Ч�� �ƶ����Ƕ�����λ ����1���������� �ұ߶��� ��߲�����λ+- ��������λΪ0 ��������λΪ-1 ��һ���õ����������ƣ�  2,�߼����� �ұ߶�����߲�0
//	//000000000000000000000000001000(8)
//	int b = a >> 1;
//	printf("b=%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = -1;
//	//�����Ķ����Ʊ�ʾ�У�ԭ�루��ʾ����ӡ�� ���� ���루����,������
//	int b = a >> 1;//��ԭ�뵽���루���ж�������λ�������ٵ�ԭ�루���д�ӡ��
//	//a 10000000000...1  ����ʼ��Ϊԭ�룩 11111111111111111111111110   11111111111111111111111111111111
//	//>>���� 111111111111111111111111111111111111111111->100000000000000000000000000000000001(ԭ��) b=-1;
//	printf("b=%d\n", b);//��-1�ұ���λ����λ��Ϊ-1��û�б仯��
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 5;
//	int b = a << 1;//b=10
//	printf("b=%d\n", b);
//	return 9;
//}
//λ��������&��λ�루ͬʱΪ1��Ϊ1�� |��λ����һ��Ϊ1��Ϊ1�� ^��λȡ������ͬΪ0 ����Ϊ1��ע�⣺����������Ϊ���� ��Զ�����λ
//#include <stdio.h>
//int main(){
//	int num1 = 1;//001
//	int num2 = 2;//010
//	int a = num1&num2;
//	int b = num1 | num2;
//	int c = num1^num2;
//	printf("a=%d\n", a);//0 0
//	printf("b=%d\n",b );//011 3
//	printf("c=%d\n", c);//011 3
//
////	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 3;//011
//	int b = 5;//101
//	int c = a&b;//001
//	printf("c=%d\n", c);//1
//	int d = a | b;
//	printf("d=%d\n",d);//111  7
//	int e = a^b;
//	printf("e=%d\n", e);//110  
//	return 0;
//}
//ʵ�ֽ���������(�ѻ����ַ���)
//#include <stdio.h>//1��������
//int main(){
//	int a = 3;
//	int b = 5;
//	printf("before:a=%d b=%d\n", a, b);//3 5
//	int tmp = 0;//��ʱ���� ��ƿ����
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("after:a=%d b=%d\n", a, b);//5 3
//	return 0;
//}
//#include <stdio.h>
//int main(){//2 �Ӽ���
//	int a = 3;
//	int b = 5;
//	printf("before:a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;//a b��ʼ���� �������ܴ������������������㹻���ʱ��
//	a = a - b;
//	printf("after:a=%d b=%d\n", a, b);
//	return 0;
//}
//#include <stdio.h>//��Դ��һ����̬�������� ^��ʹ�ã�ʵ���������Ľ���
//int main(){//3^˼�� ��ͬΪ0 ����Ϊ1
//	int a = 3;//011
//	int b = 5;//101
//	printf("before:a=%d b=%d\n", a, b);//��a^bΪ������ ��������һ��^ Ϊ��һ��
//	a = a^b;//a 110
//	b = a^b;//b  110 101  011(a) a b��ʼ����
//	a = a^b;//110 011 101(b)
//	printf("after:a=%d b=%d\n", a, b);
//	return 0;
//}
//practice:��һ�������洢���ڴ��еĶ�������1�ĸ���   ˼·��>> &1 ��λͳ��
//#include <stdio.h>//�������������ȫ��
//int main(){
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++){//һ��ʼͳ�Ƶ�ʱ���ƶ�
//		if (((a >> i) & 1) == 1){//&��λ�� ����ͬʱΪ1��Ϊ1
//			count++;
//		}
//	}
//	printf("%d��������������ڴ��еĶ�������һ�ĸ���Ϊ%d\n", a, count);
//	return 1;
//}
//ƫ
//#include <stdio.h>
//int main(){//����ͳ�Ƹ�������� -1%2= -1
//	int a = 10;
//	int count = 0;//��������
//	while (a){//ͳ��a�Ĳ������м���1��   ��%2==1����
//		if (a % 2 == 1){
//			count++;
//		}
//		a = a / 2;
//	}
//	printf("�����洢�ڵĶ�����λ���к�1�ĸ���λ%d\n",count);
//	return 0;
//}
//���һ������ �洢�Ķ�����Ϊ���� >>���ұ��ƶ�
//#include <stdio.h>
//int main(){
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;//�����ƶ�λ��
//	int count = 0;//������
//	for (i = 0; i < 32; i++){
//		if (1 == ((a >> i) & 1)){
//			count++;
//		}
//	}
//	printf("%d�д洢�Ķ�����λ�к���1�ĸ���Ϊ%d\n", a, count);
//	return 0;
//}
//�Ż�һ�� unbelievable��
//#include <stdio.h>//num&��- �����뵽��
//int main(){
//	int num = -1;
//	int i = 0;
//	int count = 0;
//	while (num){
//		count++;
//		num = num&(num - 1);//ţ������λ��
//	}
//	printf("��������1�ĸ���=%d\n", count);
//	return 0;
//}
//#include <stdio.h> ��1
//int main(){
//	char ch[] = "abcckjkjkljjcc";
//	char* pch = ch;
//	int count = 0;
//	while (*pch){
//		if (*pch == 'c'){
//			count++;
//		}
//		pch++;
//	}
//	printf("%d\n", count);//4
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main(){
//	char ch[] = "abcjksahkhkccc";
//	int count = 0;
//	int i = 0;
//	int sz = sizeof(ch)-2;//-1!   ����һ�� strlen(ch)�ַ�����-1  (����±�)
//	  //int sz = strlen(ch)-1 ;
//	for (i = 0; i <= sz; i++){//i<=sz? sz��ȡֵ������important!
//		if (ch[i] == 'c'){
//			count++;
//		}
//	}
//	printf("��c�ĸ���Ϊ%d\n", count);//count=4
//	return 0;
//}
//��ֵ������  �ܰ� ���Ը��Լ�һ�������ֵ
//#include <stdio.h>
//int main(){
//	int weight = 120;
//	weight = 80;//���߼��� �����ı�
//	printf("�ҵ�������%d\n", weight);//80
//	int salary = 10000;
//	salary = 2000000;//������н
//	printf("�ҵ�нˮ��%d\n", salary);
//	return 0;
//}//��ֵ���ұ�����߽��н��� ��ֵ����������������
//���ϲ����� += -= /= *= %= >>= <<= &= |= ^=        ����Ч��
//��Ŀ������ !�߼�����������ٽ����� -��ֵ +��ֵ  &ȡ��ֵ sizeof �����������ͳ��ȣ����ֽ�Ϊ��λ�� ~��һ�����Ķ���������λȡ�� --ǰ����--  ++ǰ���� *��ӷ��ʲ������������ò������� �����ͣ�ǿ������ת��
//#include <stdio.h>���ϲ�������ʾ
//int main(){
//	int a = 10;
//	a = a + 2;
//	a += 2;//���ϲ�����
//	a = a >> 1;
//	a >>= 1;
//	a = a & 1;
//	a &= 1;
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 10;//��ٽ��� ����Ϊ�� ��Ϊ��
//	printf("%d\n", !a);//���Ϊ0
//}
//#include <stdio.h>
//int main(){
//	int a = 10;
//	int* pa = &a;//ȡ��ֵ&  scanf  ָ���Ӧ�����ĵ�ַ
//	//ָ������ 1��������ʱ�����ڴ���� 2��ָ����Ծ���ȣ���������λΪ�ֽ� 
//	*pa = 20;//*�����ò���
//	printf("a=%d\n", a);//sizeof(ָ��) ��ƽ̨  32ƽ̨4���ֽ�  64ƽ̨8���ֽ�
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 10;
//	char c = 'r';
//	char* pc = &c;
//	int arr[10] = { 0 };
//	//sizeof������or������ ���������ռ�ڴ�ռ�Ĵ�С����Ŀ������ ��λ���ֽ�
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int ));//4
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(pc));//4 ->��ƽ̨Ϊ32ƽ̨
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof a);//��������ʡ�ԣ���
//	//printf("%d\n", sizeof int );//����д��
//	return 0;
//}
//for ecample
//#include <stdio.h>
//int main(){
//	int a = -10;
//	//int* p = NULL;
//	printf("%d\n", !2);//0
//	printf("%d\n", !0);//1
//	//mistake sizeof(��������)����ش� sizeof(����)����
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int[10]));//40//���������Ϊ�������������������֣�segment/section��
//	return 0;
//}
//sizeof(���ʽ) ����ı��ʽû����ʵ����
//#include <stdio.h>
//int main(){
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//short 2(s)  The outcome is 2 
//	printf("%d\n", s);//��Ȼ��0 û����ʵ����
//
//	return 0;
//}
//~��λȡ����0 1������
//#include <stdio.h>
//int main(){
//	int a = 0;
//	//00000000000000000000000000   111111111111111111111111111111  11111111111111111111111111(����)  111111111111111111111111111111110       100000000000000000000001(ԭ��)-1
//	printf("%d\n", ~a);//-1
//	int b = 3;
//	printf("%d\n", ~b);//00000000000000000000000000000000011   ����ԭ�� ���� ���붼��ͬ   11111111111111111111111111111111100�����룩 111111111111111111111111011  1000000000000000000000100��-4��
//	int c = 2;
//	//000000000000000000000010   1111111111111111111111111111111101         1111111111111111111111111111100        1000000000000000000000011(-3)
//	printf("%d\n", ~c);
//	return 0;
//}
//11->15
//#include <stdio.h>
//int main(){
//	int a = 11;
//	int b=a | (1 << 2);//���ʽ��Ҫ����
//	printf("b=%d\n", b);
//	return 0;
//}
//15->11
//#include <stdio.h>
//int main(){
//	int a = 15;
//	a = a&(~(1 << 2));
//	printf("a=%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 10;
//	//printf("%d\n", ++a);//11
//	printf("a=%d\n", a);//11
//	int b = ++a;//b=10
//	int c = a++;//11
//	printf("c=%d\n", c);
//	printf("b=%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = (int)3.14;//ע������ֵ��ǰ�棨ת�����ͣ�
//	printf("a=%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main(){//sizeof(������)��������Ԫ�ش���ռ��С ������ʵ�ε�ʱ�� �������������Ԫ�ص�ַ  �β�Ӧ��Ҫ��ָ�������ܣ���ַ��
//	void test1(int arr[]);
//	void test2(int arr[]);
//	int arr[10] = { 0 };
//	char ch[10] = { 0 }; 
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//void test1(int arr[]){
//	printf("%d\n", sizeof(arr));
//}
//void test2(int ch[]){
//	printf("%d\n", sizeof(ch));
//}
//��ϵ������ > >=  < <= !="���ڲ��Բ���� "  =="���ڲ������" ע�� =��ֵ  ==�ж��಻���
 //�߼���&&  �߼���|| &&���߶�Ϊ���Ϊ�� ||������������
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 5;
//	int c = a || b;//1 (��)
//	printf("c=%d\n", c);
//	int d = a&&b;//0 &&����Ҫ����ͬʱΪ���Ϊ�� ��֮Ϊ��
//	printf("d=%d\n", d);//0
//
//	return 0;
//}
//insert 360������
//#include <stdio.h>
//int main(){
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++&&++b&&d++;//0&&=0 ������ʽ���ü���ģ�  1234
//	i=a++||++b||d++;//0||3|| ������ʽ������ģ�  1334
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//	return 0;
//}
//ifa=1?
//#include <stdio.h>
//int main(){
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++&&++b&&d++;2335
//	i = a++||++b||d++;//2234 ��||��������ݲ�������!
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);//
//	return 0;
//	}
//���������� exp1?exp2:exp2;
#include <stdio.h>
//int main(){
//	//���������Ľϴ�ֵ������������ָ���󷨣�
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b){
//		printf("�ϴ�ֵΪ%d\n", a);
//	}
//	else{
//		printf("�ϴ�ֵ:%d\n", b);
//	
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int d = a > b ? a : b;
//	printf("�ϴ�ֵ:%d\n", d);
//	return 0;
//}
//����ʵ��
//#include <stdio.h>
//int main(){
//	int MAX(int x, int y);//��������
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int d = MAX(a, b);
//	printf("�ϴ�ֵ��%d\n", d);
//	return 0;
//}
//int MAX(int x, int y){//��������
//	return x > y ? x : y;
//}
//ָ��ʵ��
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//��������Ҳû������
//	int* pa = &a;
//	int* pb = &b;
//	//int c = *pa > *pb ? *pa : *pb;
//	if (*pa > *pb){
//		printf("�ϴ�ֵ��%d\n", *pa);
//	}
//	else{
//		printf("�ϴ�ֵ��%d\n", *pb);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	if (a > 5){
//		b = 3;
//	}
//	else{
//		b = -3;
//	}
//	printf("b=%d\n", b);//-3
//	//a>5?b=3:b=-3;
//	return 0;
//}
//���ű��ʽ
//#include <stdio.h>
//int main(){
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//(,,,,)���ű��ʽ ִ�е����ս��Ϊ���һ�����ź�ı��ʽ �٣�0����12��12��13 �����������μ���
//		printf("c=%d\n", c);//13 ��ϸ�۲죡����
//	return 0;
//}