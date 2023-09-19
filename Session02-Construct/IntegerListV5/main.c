#include <stdio.h>
#include <stdlib.h>

//vòng lặp vô tận, vô cực
//in các số tự nhiên từ 1..100

int main(int argc, char *argv[]) {
	
	printf("The list of numbers from 1 to 100\n");
	for (int i = 1; 1 < 100; i++)
		printf("%d ", i);
	
	return 0;
}