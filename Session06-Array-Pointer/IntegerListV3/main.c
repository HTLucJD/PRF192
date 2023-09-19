#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a[5] = {5, -10, -15, 20, -25};
	
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %4d; address: %u\n", i, a[i], &a[i]);
		
	printf("A store/holds the value: %u\n", a);
	
	*(a + 1) = 69;
	printf("\nArray after 69\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %4d; address: %u\n", i, a[i], &a[i]);
		
	int* hari;
	hari = a;
	printf("\nThe array has value (via Hari):\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", *(hari + i));
	
	return 0;
}