#include <stdio.h>
#include <stdlib.h>

//cho 1 mảng 10 phần từ, 10 biến có value
//tìm con số nhỏ nhất trong mảng, đưa nó lên đầu mảng!!!

int main(int argc, char *argv[]) {
	
	int a[] = {-5, 10, 100, -50, 100, -1001, 1};
	int t;
	
	printf("Before swaping, the array is:");
	for (int i = 0; i < 7; i++)	
		printf("%d ", a[i]);
		
	for (int i = 0; i < 6; i++)
	for (int j = i+1; j < 7; j++) 
		if (a[i] > a[j]) {
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}

	printf("\n");
	printf("After swaping, the array now :");
	for (int i = 0; i < 7; i++)	
		printf("%d ", a[i]);
	
	return 0;
}