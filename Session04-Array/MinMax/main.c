#include <stdio.h>
#include <stdlib.h>

//Nh?p 1 m?ng 10 con s?. In ra con s? nh? nh?t, lon nh?t c?a m?ng

int main(int argc, char *argv[]) {
	int a[] = {-5, 10, 100, -50, 1000, 1, 2};
	int min, max;
	min = a[0];
	max = a[0];
	
	for (int i = 1; i < 7; i++){
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
			printf("%d\n", max);
	}
	printf("The min value of this array is: %d\n", min);
	printf("The max value of this array is: %d\n", max);
	return 0;
}