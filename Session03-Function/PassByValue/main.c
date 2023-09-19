#include <stdio.h>
#include <stdlib.h>

//hiển cách đưa/truyền giá trị/đầu vào cho hàm
//vẫn hàm quen thuộc y = f(x) = x^2

void f(int x);

int main(int argc, char *argv[]) {
	//f(5);
	int n = 10; //đúng chuẩn scanf(n)
	f(n);
	return 0;
}

void f(int x) {
	int y = x * x;
	printf("y = f(%d) = %d\n", x, y);
	//return y;
}