#include <stdio.h>
#include <stdlib.h>

//Nhập 1 mảng 10 số từ bàn phím. Kiểm tra xem số 10


int main(int argc, char *argv[]) {
	
	int a[10];
	int found = 0;
	for (int i = 0; i < 10; i++){
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	if (a[i] == 10){
		found = 1;
		break;
 	}
 	if (found == 0) 
	 	printf("10 not found!!!\n");
	else 
		printf("10 found!!!\n");	
	return 0;
}