#include <stdio.h>
#include <stdlib.h>

//Nhập 1 mảng 10 số từ bàn phím. Kiểm tra xem số 10


int main(int argc, char *argv[]) {
	
	int a[10];
	int position = -1;	//lưu vị trí tìm thấy, nếu tìm thấy!!!
	
	printf("Please input 10 numbers\n");
	for (int i = 0; i < 10; i++){
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	if (a[i] == 10){
		position = i;
		break;
 	}
 	if (position == -1) 
	 	printf("10 not found!!!\n");
	else 
		printf("10 found at the position of %d!!!\n", (position + 1));	
	return 0;
}