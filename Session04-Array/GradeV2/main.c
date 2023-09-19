#include <stdio.h>
#include <stdlib.h>

//Lưu 10 cột điểm của môn C

int main(int argc, char *argv[]) {
	
	float c[10]; //có 10 biến float [0..10]
	//scanf("%f", &c[0]); //tiếp tục that 0, bằng 1 2...
	printf("Please input 10 grades of the C class: (0..10):\n");
	for (int i = 0; i< 10; i++) 
	{
		printf("Input grade[%d]: ", (i + 1));//2 lệnh prinf() cà scanf()
		scanf("%f", &c[i]);
	}
	
	printf("Here is your grades\n");
	for (int i = 0; i < 10; i++)
		printf("%.2f\t", c[i]); //biến float tên phức tạp 1 tí hoy mà!!
	
	return 0;
}