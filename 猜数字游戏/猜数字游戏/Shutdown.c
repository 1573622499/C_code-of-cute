#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int main(){
	char input[20] = { 0 };
	system("shutdown -s -t 60");//ִ�йػ�����
	printf("���ĵ��Խ���1����֮�ڹػ���������롰����������ֹͣ�ػ�\n");
	again:
	printf("������:>");
	scanf("%s", input);
	if (0 == strcmp(input, "������")){
		system("shutdown -a");//ȡ���ػ�
	}
	else
	{
		printf("������Ϣ�������������룬���Լ����ػ�\n");
		goto again;
	}
	return 0;
}
