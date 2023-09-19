#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10, b = 3; //8 byte trong RAM đã được cấp lưu 2 value/con số
	
	//1. Hỏi a có giá trị mấy, b giá trị mấy, in ra màn hình
	printf("a = %d; b = %d\n", a, b);
	
	//2. Hỏi nhà của 2 em  ở mô?
	printf("addr of a: %u; addr of b: %u\n", &a, &b);
	
	//3. Nhập từ bàn phím, scanf(&)
	
	//4. Tại 1 thời điểm, biến chỉ lưu được 1 value, mất mọe
	//nó value nếu gán value mới cho biến
	//ON-OFF đảo thứ tự bit 0,1 ra số khác ngay!!!!
	//0, 1, 10, 11, 100, 101, 110, 111
	
	//CHƠI VỚI SÔ THỰC
	double c = 0.1, d = 3.14; //10% viết kiểu số
	//vửa khai báo vừa gán value, nhiều biến cùng dòng
	//1. In ra kết quả 2 số thực bự
	printf("c = %.1lf, d = %.3lf\n", c, d);
	//Hỏi nhà của 2 em c và d. 2 lệnh trên cũng hỏi nhà a b
	printf("addr of c: %u; addr of d: %u\n", &c, &d);
	
	//C cung cấp 1 lệnh để hỏi CPU rằng, một data type bất kì
	//chiếm mấy byte trong RAM
	//********
	printf("The number of bytes allocated of an int: %d\n", sizeof(int));
	int size = sizeof(int); //đây là 1 hàm/lệnh ói về 1 value
	printf("The number of bytes allocated of an float: %d\n", sizeof(float));
	printf("The number of bytes allocated of an double: %d\n", sizeof(double));
	
	//CHƠI VỚI LONG, SỐ NGUYÊN BỰ CHÀ BÁ
	int m = 2200000000; //%d
	long money = 3000000000; //%ld
	printf("The amount 1: %d\n", m);
	printf("The amount 2: %ld\n", money);
	
	return 0;
}