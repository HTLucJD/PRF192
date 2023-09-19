#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int yob = 2004;	//số thập phân lưu vào trong RAM
	int grade = 10;	//số thập phân lưu vào trong RAM
	
	printf("Your year of birth is %d\n", yob);
	printf("Your grade is %d\n", grade);	
	
	//hỏi 1 câu, các biến nằm ở đâu trong RAM
	printf("Bien yob nam o vi tri byte thu %u\n", &yob);
	printf("The address of variable grade is %u\n", &grade);
	return 0;
}