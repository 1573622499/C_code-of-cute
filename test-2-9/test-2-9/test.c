#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(){
	char password[20] = { 0 };
	int ch = 0;
		int ret = 0;
	printf("����������:>");
	scanf("%s", password);
	printf("��ȷ������(Y/N):>");
	while ((ch = getchar()) != '\n'){
		;
	}
	ret = getchar();
	if (ret == 'Y'){
		printf("ȷ���ɹ�\n");
	}
	else {
		printf("ȷ��ʧ��\n");
	}
	return 0;
}
