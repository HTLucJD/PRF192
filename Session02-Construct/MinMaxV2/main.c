#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c, max;
	printf("Find max between three numbers\n");
	printf("Input three integers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	
	printf("Max number between %d %d %d is %d\n", a, b, c, max);
	
	return 0;
}