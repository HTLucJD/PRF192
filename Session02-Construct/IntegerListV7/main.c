#include <stdio.h>
#include <stdlib.h>

//vòng lặp vô tận, vô cực
//in các số tự nhiên từ 1..100

int main(int argc, char *argv[]) {
	
	printf("The list of numbers from 1 to 100\n");
	int count = 1;
	for (;;) //ko khởi đầu, ko kết thúc, ko đếm gì cả
	{
		printf("%d ", count);
		count++;
		if (count == 100)
			break;
	}
	
	return 0;
}