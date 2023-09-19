#include <stdio.h>
#include <stdlib.h>

//void f(int x);  // mỗi lần xài hàm, hãy đưa tui 1 value thường hoi
				//tui cần 1 biến int thường
				//TRUYỀN THAM TRỊ,CHỈ CẦN 1 VALUE/GIÁ TRỊ THƯỜNG

void f(int* x);  //mỗi lần xài hàm, đừng đưa
				//TRUYỀN THAM CHIẾU, CHIẾU TỪ XA
				//T CẦN 1 TỌA ĐỘ, CHO TỌA ĐỘ NÀO ĐÓ Ko đưa value thường

int main(int argc, char *argv[]) {
	int x = 10;  //biến Local
	printf("In main, before calling f() x is: %d\n", x);
	f(&x);
	printf("In main, after calling f() x is: %d\n", x);
	return 0;
}

//CHỐT DEAL: MUỐN THAY ĐỔI GIÁ TRỊ Ở NƠIGỌI HÀM, THÌ CẦN ĐƯA ĐỊA CHỈ
//CHO HÀM, HÀM SẼ THAY ĐỔI NƠI GỐC GỌI HÀM!!!

void f(int* x) {
	*x = *x * *x;
}