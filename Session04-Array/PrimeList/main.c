#include <stdio.h>
#include <stdlib.h>

//cho 1 mảng các số tự nhiên (nguyên dương)
//in ra những số nguyên tố xuất hiện trong mảng này

int isPrime(int n);

void printPrimeList(int a[], int size);

int main(int argc, char *argv[]) {
	
	//printf("23? %d\n", isPrime(23));
	int a[] = {5, 10, 15, 23, 7, 9, 11, 13};
	printPrimeList(a, 8);
	return 0;
}

void printPrimeList(int a[], int size) {
	printf("The array has values of\n");
	for (int i = 0; i < size; i++)
	printf("%d ", *(a + i));
	
	printf("\nThe list of prime numbers in this array is\n"); 
	for (int i = 0; i < size; i++)
	if (isPrime(a[i]) == 1)
		printf("%d ",a[i]);
}

int isPrime(int n) {
	
	int dicisorCount = 0;
	
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dicisorCount++;
	
	if (dicisorCount == 2)
		return 1;
	return 0;
}