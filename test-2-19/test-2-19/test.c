//#define _CRT_SECURE_NO_WARNINGS 1
////��������Ϸ(�涨1~100)������ʵ�֡�
////#include <stdio.h>
////#include <stdlib.h>
////#include <time.h>
////void menu(){
////	printf("############################\n");
////	printf("######1.play   0.exit#######\n");
////	printf("############################\n");
////}
////void game(){
////	int ret = 0;
////	int guess = 0;
////	ret = rand() % 100 + 1;
////	while (1){
////		printf("�������:>");
////		scanf("%d", &guess);
////		if (guess > ret){
////			printf("�´��ˣ�\n");
////		}
////		else if (guess < ret){
////			printf("��С��\n");
////		}
////		else{
////			printf("��ϲ��,�¶��ˣ�\n");
////			break;
////		}
////	}
////
////}
////
////int main(){
////	int input = 0;
////	srand((unsigned int)time(NULL));//����ʱ���
////	
////	do{
////		menu();
////		printf("��ѡ��:>");
////		scanf("%d", &input);
////		switch (input){
////		case 1:
////			game();
////			break;
////		case 0:
////				printf("�˳���Ϸ\n");
////				break;
////			default :
////				printf("�������\n");
////		}
////		
////	} while (input);
////	return 0;
////}
////
////
////���ֲ���
//#include <stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int h = 11;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while(left<=right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > h){
//			right = mid - 1;
//		}
//		else if (arr[mid] < h){
//			left = mid + 1;
//		}
//		else{
//			printf("�ҵ��ˣ� �±꣺%d\n", mid);
//			break;
//		}
//
//	}
//	if (left>right){
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}