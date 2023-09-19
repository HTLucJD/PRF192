#include <stdio.h>
#include <stdlib.h>

//viết app nho nhỏ in ra danh sách các số tự nhiên từ 1..100
//IPO


int main(int argc, char *argv[]) {
	
	printf("This program will show the list of 100 first integers (FOR - DO)\n");
	int count = 1;
	for  (;;)
	{
		printf("%d ", count);
		count++;
		if (count == 101)
			break;
	}
	
	count = 1;
	printf("\n\nThis program will show the list of 100 first integers (DO - WWHILE)\n");
	do {
		printf("%d ", count);
		count++;
	} while (count <= 100);
	
	count = 1;
	printf("\n\nThis program will show the list of 100 first integers (DO - WWHILE -do^.)\n");
	do {
		printf("%d ", count);
		count++;
		if (count == 101)
			break;
	} while (69 < 96);
	
	count = 1;
	printf("\n\nThis program will show the list of 100 first integers (WHILE)\n");
	while (count <= 100)
	{
		printf("%d ", count);
		count++;
	}
	
	count = 1;
	printf("\n\nThis program will show the list of 100 first integers (WHILE - -do^.)\n");
	while (69 < 96)
	{
		printf("%d ", count);
		count++;
		if (count == 101)
			break;
	}
	
	return 0;
}