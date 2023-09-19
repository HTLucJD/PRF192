#include <stdio.h>
#include <stdlib.h>

//sắp xếp mảng các số nguyên, giảm dần

void swap(int* a, int* b);

void sortArray(int a[], int size);

int main(int argc, char *argv[]) {
//	int x = 10, y = 100;
//	printf("Before swaping, x = %d; y = %d\n", x , y);
//	swap(&x, &y);
//	printf("After swaping, x = %d; y = %d\n", x , y);

	int n[] = {5, -10, -15, 20, -25, 1000};
	sortArray(n, 6);
	return 0;
}

void sortArray(int a[], int size){
	printf("The array before sorting\n");
	for (int i = 0; i < size; i++)
		printf("%d ", *(a+i));
		
	for (int i = 0; i < size-1; i++)
		for (int j = i+1; j < size; j++)
		if (a[i] < a[j]) 
			swap(&a[i], &a[j]);
			
	printf("\nThe array after sorting descending\n");
	for (int i = 0; i < size; i++)
		printf("%d ", *(a+i));
}

void swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}

