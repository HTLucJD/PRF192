#include <stdio.h>
#include <stdlib.h>

//in ra các số lẻ từ 1..1000

int main(int argc, char *argv[]) {
	
	printf("The list odd numbers from 1..1000\n");
	for (int i = 1; i <= 1000; i++)
		if (i % 2 == 1)
			printf("%d ", i);
			
	printf("\n");
	
	for (int i = 1; i <= 1000; i++)
		if (i % 2 != 0)
			printf("%d ", i);
		
	return 0;
}