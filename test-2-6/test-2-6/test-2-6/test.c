#include <stdio.h>
struct Book{
	char name[20];
	short price;
};
int main(){
	struct Book b1 = {
		"C���Գ������", 42
	};
	printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price);
	struct Book* pb = &b1;
	printf("������%s\n", (*pb).name);
	printf("�۸�%d\n", (*pb).price);
	printf("������%s\n", pb->name);
	printf("�۸�%c\n", pb->price);
	b1.price = 20;
	printf("�۸�%d\n", pb->price);
		return 0;
}