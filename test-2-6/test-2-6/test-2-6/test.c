#include <stdio.h>
struct Book{
	char name[20];
	short price;
};
int main(){
	struct Book b1 = {
		"C语言程序设计", 42
	};
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	struct Book* pb = &b1;
	printf("书名：%s\n", (*pb).name);
	printf("价格：%d\n", (*pb).price);
	printf("书名：%s\n", pb->name);
	printf("价格：%c\n", pb->price);
	b1.price = 20;
	printf("价格：%d\n", pb->price);
		return 0;
}