#include <stdio.h>
#include <stdlib.h>

//hiển cách đưa/truyền giá trị/đầu vào cho hàm
//vẫn hàm quen thuộc y = f(x) = x^2

void f(int x);

int main(int argc, char *argv[]) {
	//f(5);
	int x = 10; //đúng chuẩn scanf(n)
	//hỏi nhà x main() ở đâu
	printf("In main() x address is %u and value is %d\n", &x, x);
	f(x);
	printf("After calling f(), in main() x address is %u and value is %d\n", &x, x);
	return 0;
}

void f(int x) {
	printf("In main() x address is %u and value is %d\n", &x, x);
	x = 25; //éo chơi x = 10 đưa xuống, chủ động đổi x = giá trị mới
	int y = x * x;
	printf("y = f(%d) = %d\n", x, y);
	printf("After updating x; in f() x address is %u and value is %d\n", &x, x);
	//return y;
}