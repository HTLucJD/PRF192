#include <stdio.h>
#include <stdlib.h>

void printIntegerList();

void printIntegerListHEAP();

int main(int argc, char *argv[]) {
	
	//	printIntegerList();
	//printIntegerListHEAP();
	printIntegerListHEAPV2();
	return 0;
}

void printIntegerListHEAP() {
	int* p; 
	p = (int*)malloc(20);//malloc() là hàm,lệnh xin RAM trên HEAP
						 //20 đã được cấp cho con trỏ int
						 //hàm trả vê fđịa chỉ của byte đầu tiên
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
	printf(("The array has values of (HEAP -do)\n"));
	for (int i = 0; i < 5; i++)
		printf("%d ", p[i]);
    
}
void printIntegerListHEAPV2() {
	int* p; 
	p = (int*)malloc(20);
    *p = 5;
    *(p + 1) = 10;
    *(p + 2) = 15;
    *(p + 3) = 20;
    *(p + 4) = 25;
    
	printf(("The array has values of (HEAP -do)\n"));
	for (int i = 0; i < 5; i++)
		printf("%d ", *(p + i));
    
}

void printIntegerList() {
	int a[] = {5, -10, 15, -20, 25}; // nằm trong STACK
	printf("The array has values of\n");
	for  (int i = 0; i < 5; i++)
	printf("%d ", *(a+i));
	printf("\n");
}