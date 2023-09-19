#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 
	//1.  5 > 6 đúng k?
	int result = 5 > 6;
	printf("5 > 6? %d\n", result); // noooo, 0
	
	//2. 5 < 6 đúng k?
	result = 5 < 6;
	printf("5 < 6? %d\n", result); //yes, 1
	
	//3. 6 > 6 đúng k?
	result = 6 > 6;
	printf("6 > 6? %d\n", result); //no, 0
	
	return 0;
}