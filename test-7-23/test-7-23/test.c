//#define _CRT_SECURE_NO_WARNINGS 1
////C���Ի���֪ʶ����
//ԭ��->����->���루�������ڴ��д洢�� ����������
//���� / �޷�����  ԭ������ͬ
//����    ԭ->(����λ���䣬~)����->(��һ)����
//�ֲ�����ǰ��ʡ����auto
//int a = 10; (autoʡ����)
//auto int a = 10; 
//extern �ⲿ������Ҫ��
//�洢���ݵ��ĸ��ط�   �ٶ��ɵ͵��� �ռ��ɶൽ��   Ӳ�̣�500G��->�ڴ棨4 / 8G��->���ٻ�����->�Ĵ�����register��
//cpu(���봦����) ����
//register int a = 10;//�����a���ڼĴ�������
//signed int  int  ��дunsignedĬ��Ϊ�з�����
//union - ���� ��ͬ��
//	typedef - �����ض���
//	unsigned int a = 10;
//typedef unsigned int u_int �����ͽ��м�
//u_int num = 20; unsigned int num = 20; һ��
//static(��̬)
//1.static+�ֲ����� �ֲ��������������ڱ䳤����һ��ʱ���ڲ��ᱻ����
//2.static+ȫ�ֱ��� ȫ�ֱ���������ı䣨�����Լ�Դ�ļ��ڲ��������ᱻ���ʵ�
//3.static+������ �������������Ա��ı� �ⲿ������������->�ڲ��������Կ�����
//�������������������ɹؼ�������
//extern�����ⲿ���� ���ͼ���
//#define MAX 10(#define ����ĳ���)
//#define ��(����)  �� ����
//int Add(int x, int y){
//	return (x + y);
//}
//#define Max(x,y) (x>y ? x:y)
//int max = Max(a, b);
//ָ�루pointer��
//������ŵ�ַ
//int a = 10;
//int* p=&a;//p�����a�ĵ�ַ pָ��a
//*p = 20;//*�����ò�����/��Ӳ����� pͨ��a�ĵ�ַ���ҵ�a����������ֵ�ĸı�
//��ַ��32bit 64bit�� ������ַ��
//����ͨ��������ź� ����1������0��
//�γɶ���������
//�ֱ��� 2^32  2^64 �ֿ���
//ָ������Ĵ�Сȡ���ڵ���ƽ̨ w32��4��X64��8��
//һ���ڴ浥Ԫ��СΪһ���ֽ�
//�ڴ��������
//����ת��8421��
//struct �����������Ӷ��� ������ �� ����
//struct book{
//	char name[20];
//	int price;
//};//;Ϊ������־
//struct book b1 = { "ƽ��������", 55 };//�Խṹ��������г�ʼ��
//struct book* p=&b1;//�ṹ��ָ��
//���Դ�ӡ �������¸�ֵ
//b1.price = 20;
//(p).price = 30;
//p->price = 40;
//p->name = "c++";//����д���Ǵ����
//��Ҫ�õ��ַ���������֪ʶ
//strcpy(p->name/b1.name, "c++");
//����ָ�� ���������Ǻ����ĵ�ַ
//���� void test(){}
//void *p() = test; ����һ������ָ�� pָ��test()�������
//
//
//
//
//
//
//