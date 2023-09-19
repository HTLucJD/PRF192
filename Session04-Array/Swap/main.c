#include <stdio.h>
#include <stdlib.h>

//hoán đổi giá trị của 2 biến cho nhau!!!

int main(int argc, char *argv[]) {
	
	int a = 23; 
	int b = 100, c;
	printf("Before swaping, a = %d; b = %d", a, b);
	c = a;
	a = b;
	b = c;
	printf("After swaping, a = %d; b = %d", a, b);
	
	return 0;
}