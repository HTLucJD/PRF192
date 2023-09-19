#include <stdio.h>
#include <stdlib.h>

//viết app in ra tổng của dãy số sau
//1! + 2! + 3! +...

int getFactorial(int n);
int main(int argc, char *argv[]) {
	int sum = 0;
		sum += getFactorial(1) + getFactorial(2); 
	printf("Sum of factorial chain from 1! to %2! = %d\n", sum);
	return 0;
}

int getFactorial(int n)
{
	int acc = 1;
	if (n == 0 || n == 1 )
	return 1;
	for (int i = 2; i <= n; i++)
		acc *= i;
	return acc;
}