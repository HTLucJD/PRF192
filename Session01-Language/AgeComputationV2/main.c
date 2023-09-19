#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int yob, age;
	printf("Please input yob: ");
	scanf("%d", &yob);
	age = 2022 - yob;
	printf("As I guess, you are %d years old\n", age);
	
	return 0;
}