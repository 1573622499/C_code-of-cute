#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF){
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	char ch[20] = { 0 };
//	system("shutdown -s -t 120");
//	again:
//	printf("你的电脑将在两分钟后关机，如果你输入: 我是猪，我将为你取消关机程序\n");
//		scanf("%s", ch);
//	if (strcmp(ch, "我是猪" == 0)){
//		system("shutdown -a");
//	}
//	else{
//		goto again;
//	}
//	return 0;
//}
#include <stdio.h>
int main(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);

	}

	return 0;
}



