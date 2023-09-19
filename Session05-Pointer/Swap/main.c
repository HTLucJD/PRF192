#include <stdio.h>
#include <stdlib.h>

//viết hàm hóa đổi 2 value!!!

void swapV1(int a, int b);

int main(int argc, char *argv[]) {
	int a = 10, b = 100;
	printf("In main(), before swaping, a = %d; b = %d\n", a, b);
	swapV1(a, b);
	printf("In main(), after swaping, a = %d; b = %d\n", a, b);
	return 0;
}

void swapV1(int a, int b) {
	printf("Before swaping, a = %d; b = %d\n", a, b);
	int t;
	t = a;
	a = b;
	b = t;
	printf("After swaping, a = %d; b = %d\n", a, b);
}