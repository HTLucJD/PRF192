#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//ỉn ra các con số từ 1..100

int main(int argc, char *argv[]) {
	
	printf("The list of integers from 1..100\n");
	for (int i = 1; i <= 100; i++)
		printf("%d ", i);
	//i: index, chỉ mục, số đếm
	//biến siêu cục bộ - local, dùng trong for
	//hết forr hết biến
	return 0;
}