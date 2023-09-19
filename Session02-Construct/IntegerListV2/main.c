#include <stdio.h>
#include <stdlib.h>

//viết app nho nhỏ in ra các số chẵn từ 1..100	

int main(int argc, char *argv[]) {
	
	printf("The list of even numbers from 1..100\n");
	
	for (int i = 1; i <= 100; i++)
		if (i % 2 == 0) 
			printf("%d ", i);
	
	return 0;
}