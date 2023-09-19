#include <stdio.h>
#include <stdlib.h>

//tính tổng của các số từ 1..100

int main(int argc, char *argv[]) {
	
	int acc = 0, count = 1;
	printf("This program will show/compute the sum of 100 first integers\n");
	//tính tổng dùng do - while
	do
	{
		acc+=count;
		count++;
	} while (count <= 100);
	printf("The sum is (DO - WHILE:) %d\n", acc);
	
	
	
	return 0;
}