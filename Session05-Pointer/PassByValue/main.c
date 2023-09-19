#include <stdio.h>
#include <stdlib.h>

//viết hàm y = f(x) = x^2
//hàm có nhiệm vụ BÌNH PHƯƠNG ĐẦU VÀO!!!

void f(int x);

int main(int argc, char *argv[]) {
	int x = 10;
	printf("In main() x before calling f() x is: %d\n", x);
	f(x);
	printf("In main() x after calling f() x is: %d\n", x);
	return 0;
}

void f (int x) {
	printf("In f(), x before ^2 is: %d\n", x);
	x *= x;
	printf("In f(), x after ^2 is: %d\n", x);
	
}