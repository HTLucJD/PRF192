#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int acc = 0; //accumuLation - tích lũy, gom góp, cộng dồn
	
	printf("This program will show the sum of 100 first integers (1..100)\n");
	for (int i=1; i <= 100; i++)
		acc +=i; //sum += i;
	
	printf("The sum is %d\n", acc);	
	
	
	return 0;
}