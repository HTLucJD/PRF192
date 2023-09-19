#include <stdio.h>
#include <stdlib.h>

//Khảo sát Ram được cấp cho mảng

int main(int argc, char *argv[]) {
	
	float c[10];
	
	//hỏi nhà của 10 biến/phần tử mảng/element ở đâu???
	
	/*printf("The address of c[0] is %u\n", &c[0]);
	printf("The address of c[1] is %u\n", &c[1]);
	printf("The address of c[2] is %u\n", &c[2]);
	printf("The address of c[3] is %u\n", &c[3]);
	printf("The address of c[4] is %u\n", &c[4]);
	*/
	printf("The address of all of elements in the array:\n");
	for (int i = 0; i < 10; i++)
		printf("The address of c[%d] is %u\n", i, &c[i]);
	
	printf("The value of c is %u\n", c);
//	%u: unsigned số nguyên ko dấu, tức là +
//	%d: số nguyên có dấu, tức là + và -
//	số nhà chắc chắn là số + nên có quyền %u %d 
	
	return 0;
}