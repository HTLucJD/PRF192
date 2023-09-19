#include <stdio.h>
#include <stdlib.h>

//BÀ CON GIỮA MẢNG VÀ CON TRỎ
//MẢNG TĨNH, MẢNG ĐỘNG, CON TRỎ CÓ BÀ CON!!!
//TRUYỀN THAM CHIẾU, MẢNG/CON TRỎ LÀ ĐẦU CÀO CỦA HÀM
//lưu và in ra mảng 10 con số nguyên bất kì


int main(int argc, char *argv[]) {
	int a[] = {5, -10, -15, 20, -25};
	//mảng là khai báo nhiều biến cùng lúc, cùng kiểu, cùng tên
	//ở sát nhau!!!
	
	//Tên mảng cũng là 1 biến, value của biến mảng là địa chỉ A[0] đầu dãy
	//Tên mảng là con trỏ
	for (int i = 0; i < 5; i++)
		printf("The addr of a[%d]: %u | value: %d\n", i, &a[i], a[i]);
	
	printf("a has value of %u\n", a);
	
	printf("The array has values(using pointer): \n");
	for (int i = 0; i < 5; i++)
	printf("a[%d] = %d\n", i, *(a+i));	
	

	return 0;
}