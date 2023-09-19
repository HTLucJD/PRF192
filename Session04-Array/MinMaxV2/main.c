#include <stdio.h>
#include <stdlib.h>

//tìm min max trong 1 mảng nhập từ bàn phím

int main(int argc, char *argv[]) {
	
	int a[10], min, max;
	
	printf("Input 10 numbers\n");
	for (int i = 0; i < 10; i++){
		printf("Input number #%d ", i+1);
		scanf("%d", &a[i]);
	}
	min = a[0];
	max = a[0];
	for (int i = 0; i < 10; i++){
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];	
	}
	printf("Min of array is: %d\n", min);
	printf("Max of array is: %d\n", max);
	return 0;
}