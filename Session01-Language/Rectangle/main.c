#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Viết app tính diện tích hình chữ nhật với 2 cạnh nhập
//từ bàn phím in ra kết quả
//Công thức tính S = dài x rộng

int main(int argc, char *argv[]) {
	
	int width, lenght, area; //tạm dùng số nguyên
	printf("You are required to input the size of rectangle\n");
	printf("Input the width: ");
	scanf("%d", &width); 
	printf("Input the length: ");
	scanf("%d", &lenght);
	area = width * lenght;
	printf("The area a rectangle (%d, %d) is %d\n", width, lenght, area);
	
	return 0;
}