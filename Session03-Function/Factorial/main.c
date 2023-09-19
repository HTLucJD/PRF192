#include <stdio.h>
#include <stdlib.h>

//viết hàm tính n!
//IPO
//I: n
//P: 1.2.3.4.5...n -> nhồi heo đất, nhồi theo kiểu nhân, ko phải cộng
//O: kết quả nhân dồn
//chọn hàm loại mấy, vì có 4 loại
//viết thử cả 4

void getFactorialV1();
void getFactorialV2(int n);
int getFactorialV3();
int getFactorialV4(int n); //soái ca, y = f(x)

int main(int argc, char *argv[]) {
	//getFactorialV1();
	//getFactorialV2(6);
	//getFactorialV3();
	
	int n;
	printf("Input a number (>= 0) to get the factorial: ");
	scanf("%d", &n);
	printf("Result: %d\n", getFactorialV4(n));
	return 0;
}

void getFactorialV1() {
	int n, acc = 1; //0 dành cho tổng dồn; tích thì ban đầu tệ nhất 1
					//1 nhân với ai cũng ko ảnh hưởng ai đó
	printf("Input a number (>= 0) to get the factorial: ");
	scanf("%d", &n); //có khả năng nhập cà chớn!!! VALIDATION ĐÃ TỪNG HỌC
	
	if (n == 0 || n == 1)
		acc = 1;
	else //tạm thời chưa chặn vụ n < 0
		 //coi như tạm chấp nhận n = 2 3 4 5 6 7 8 
		 for (int i = 2; i <= n; i++)
		 	acc = acc * i;
	printf("%d! = %d\n", n, acc);
}

void getFactorialV2(int n) {
	int acc = 1;
	if (n == 0 || n == 1)
		acc = 1;
	else //tạm thời chưa chặn vụ n < 0
		 //coi như tạm chấp nhận n = 2 3 4 5 6 7 8 
		 for (int i = 2; i <= n; i++)
		 	acc = acc * i;
	printf("%d! = %d\n", n, acc);
}

int getFactorialV3() {
	int n, acc = 1; 
	printf("Input a number (>= 0) to get the factorial: ");
	scanf("%d", &n); 
	
	if (n == 0 || n == 1)
		acc = 1;
	else //tạm thời chưa chặn vụ n < 0
		 //coi như tạm chấp nhận n = 2 3 4 5 6 7 8 
		 for (int i = 2; i <= n; i++)
		 	acc *= i;
	return acc;
}

int getFactorialV4 (int n) {
	int acc = 1; 
	if (n == 0 || n == 1)
		acc = 1;
	else //tạm thời chưa chặn vụ n < 0
		 //coi như tạm chấp nhận n = 2 3 4 5 6 7 8 
		 for (int i = 2; i <= n; i++)
		 	acc *= i;
	return acc;
}