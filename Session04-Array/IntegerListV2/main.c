#include <stdio.h>
#include <stdlib.h>

//Nhập 1 mảng 10 số từ bàn phím. Kiểm tra xem số 10


int main(int argc, char *argv[]) {
	
	int a[10];
	for (int i = 0; i < 10; i++){
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	if (a[i] == 10){
		printf("Hey, found 10 at position of %d\n", i);
		break;
 	}
 	
	
	return 0;
}