#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 10,  b = 3;
	int result = a - b;
	printf("a = %d\nb = %d\n", a, b);
	printf("result = %d\n", result);
	
	//phép nhân chia
	result = a * b;
	printf("result = %d\n", result); //30
	
	result = a / b; //CHIA NGUYÊN
	printf("result = %d\n", result); //3
	
	float r = a / b; //3 lưu trong thực là 3.000000
	printf("r = %f\n", r);	
	
	//float re = a * 1.0 / b;
	//float re = a / b * 1.0;	//sai heng
	float re = a / (b * 1.0);
	printf("re = %f\n", re);
			
	return 0;
}