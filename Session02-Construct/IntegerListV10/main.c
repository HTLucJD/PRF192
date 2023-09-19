#include <stdio.h>
#include <stdlib.h>

//Tính tổng của dãy số từ 1...n (n > 1)

int main(int argc, char *argv[]) {
	
	int n,acc = 0; //accumuLation - tích lũy, gom góp, cộng dồn
	
	printf("This program will show the sum of n first integers (1..n)\n");
	printf("Please input n > 1: ");
	scanf("%d", &n);
	if (n <=1 )
		printf("Do ku know how to input an integer > 1?\n");
	else
	{
	for (int i=1; i <= n; i++)
		acc +=i; //sum += i;
	
	printf("The sum is %d\n", acc);	
	}
	
	return 0;
}