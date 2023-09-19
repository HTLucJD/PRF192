#include <stdio.h>
#include <stdlib.h>

//viết hàm tính bình phương của 1 con số nguyên

int fV3(); //int fV4(int x); 100% hàm toán học y = f(x)

int main(int argc, char *argv[]) {
	printf("The result: %d\n", fV3());
	return 0;
}

int fV3() {
	//vì ko có phễu hứng đầu vào, nên ta phải tự tạo
	int x, y;
	printf("Input an integer to get ^2: ");
	scanf("%d", &x);
	y = x * x;
	
	//hàm đã RETURN thì ko nên có lệnh printf(in kq xử lí);
	//vì làm thế, tính re-use/tái sử dụng sẽ bị thu hẹp
	//printf("The function y = f(x) = x^2; f(%d) = %d\n", x, y);
	return y; //đọc là tên hàm = giá trị của y
			  //y được ném ra ngoài tên hàm để dùng tiếp
			  //lệnh returrn chính là gán 1 giá trị nào đố cho tên hàm
			  //tên hàm từ nay về sau xem như 1 value, dùng tới bến luôn
}

/*
int fV3() {
	//vì ko có phễu hứng đầu vào, nên ta pheir tự tạo
	int x, y;
	printf("Input an integer to get ^2: ");
	scanf("%d", &x);
	y = x * x;
	printf("The function y = f(x) = x^2; f(%d) = %d\n", x, y);
}
*/