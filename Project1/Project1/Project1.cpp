#define _CRT_SECURE_NO_WARNINGS

/*tinh tong*/
#include <stdio.h>
int main(void)
{
	int a, b, sum;
	printf("day la chuong trinh tinh tong 2 so a va b\n");

	printf("nhap vao so a va b:");
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("%d+%d=%d", a, b, sum);
	getch();

	return 1;
}