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
	
	for (int i = 0; i < 5; i++)
		printf("The addr of a[%d]: %u | value: %d\n", i, &a[i], a[i]);
		
	int* hari = &a[0];//trỏ vào đầu dãy
	printf("a[0] = %d\n", *hari);
	
	hari++;
	printf("a[1] = %d\n", *(hari));
	
	//in cả mảng
	hari = &a[0];//reset con trỏ
	printf("The array has values:\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(hari + i));
	//lấy tọa độ + i, rồi vào tọa độ đó, in đi value gốc
	return 0;
}