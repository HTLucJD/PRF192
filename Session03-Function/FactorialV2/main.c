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
	
	int n;
	printf("Input a number (>= 0) to get the factorial: ");
	scanf("%d", &n);
	printf("Result: %d\n", getFactorialV4(n));
	return 0;
}

int getFactorialV4 (int n) {
	int acc = 1; 
	if (n == 0 || n == 1)
		return 1;
		
		for (int i = 2; i <= n; i++)
		acc *= i;
	return acc;
	
}