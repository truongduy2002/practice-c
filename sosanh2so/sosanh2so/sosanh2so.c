#define _CRT_SECURE_NO_WARNINGS // ti luon luon co dong nay, neu muon code tren visual studio 2019
// Voi visual studio 2019: ti phai vao Properties -> C/C++ -> Advanced -> chon ....
// Ti se go lai cac dong code cho dung, dung copy nha
#include <stdio.h> // cai nay ti biet chua?
#include <conio.h> //
void main(void)
{
	int ia, ib;
	printf("Nhap vao so a: "); // dong nay in ra man hinh
	scanf("%d", &ia); // dong nay chuong trinh cho minh nhap vao 1 so
	printf("Nhap vao so b: ");
	scanf("%d", &ib); // dong nay chuong trinh cho minh nhap vao 1 so dua vao ib

	if (ia == ib)
		printf("a bang b\n");
	else
		printf("a khong bang b\n");

	_getch(); // phai dung _getch thay vi getch neu muon code tren visual studio 2019.
}