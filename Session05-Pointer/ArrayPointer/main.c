#include <stdio.h>
#include <stdlib.h>

void printArray();

void printArrayHEAP();

void inputArray();

void inputArrayV2();

void inputArrayHEAP();

int main(int argc, char *argv[]) {
	inputArrayHEAP();
	return 0;
}

void inputArray() {
	int a[50];
	printf("You are required to input 10 numbers\n");
	for (int i = 0; i < 10; i++) {
		printf("input a[%d]: ", (i+1)); 
		scanf("%d", (a + i));
	}
	
	printf("You have just input the following numbers\n");
	for (int i = 0; i < 10; i++) 
		printf("%d ", *(a + i)); 
}

void inputArrayV2() {
	int n;
	printf("How many numbers do you want to input?\n");
	scanf("%d", &n);
	int a[n];
	printf("You are required to input %d numbers\n", n);
	for (int i = 0; i < n; i++) {
		printf("input a[%d]: ", (i+1)); 
		scanf("%d", (a + i));
	}
	printf("You have just input the following numbers\n");
	for (int i = 0; i < n; i++) 
		printf("%d ", *(a + i)); 
}

void inputArrayHEAP() {
	int n;
	printf("How many numbers do you want to input? (HEAP)\n");
	scanf("%d", &n);
	int* harri = malloc(n * 4);
	printf("You are required to input %d numbers\n", n);
	for (int i = 0; i < n; i++) {
		printf("input a[%d]: ", (i+1)); 
		scanf("%d", (harri + i));
	}
	printf("You have just input the following numbers\n");
	for (int i = 0; i < n; i++) 
		printf("%d ", *(harri + i)); 
	free(harri);	
}

void printArrayHEAP() {
	int* harri;
	harri = malloc(20);
		
	harri[0] = 5;
	harri[1] = -10;
	harri[2] = 15;
	harri[3] = -20;
	harri[4] = 25;
	printf("The array has values of (dynamic array)\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(harri + i));
		
	free(harri);
}

void printArray() {
	int a[] = {5, -10, 15, -20, 25};
	printf("The array has values of (using *)\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(a + i));
	printf("\n");
	
	int* p;
	p = a;
	printf("The array has values of (using *p)\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(p + i));
	printf("\n");
}