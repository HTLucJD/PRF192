#include <stdio.h>
#include <stdlib.h>

//Nhập 1 mảng 10 số từ bàn phím. Kiểm tra xem số 10


int main(int argc, char *argv[]) {
	
	int a[10], sumOdd = 0, evenCount = 0;
	
	
	printf("Please input 10 numbers\n");
	for (int i = 0; i < 10; i++){
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	if (a[i] %2 == 0)
		evenCount++;
 	else 
 		sumOdd += a[i];
 		
 	printf("There is/are %d even number(s) in this array\n", evenCount);
 	printf("The sum of odd number(s) in this array is: %d\n", sumOdd);
 	
	return 0;
}