#define _CRT_SECURE_NO_WARNINGS 1
//�ṹ��
#include <stdio.h>
int main(){
	struct stu{
		char name[10];
		int age;
		char sex[3];
		int length;
	};
	struct stu s1 = { "С��", 18, "��", 180 };
	//�ṹ������
	struct stu* p = &s1;
	printf("%s\n", s1.name);
	printf("%s\n", p->name);
	printf("%s\n", (*p).name);

	return 0;
}

