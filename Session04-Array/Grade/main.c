#include <stdio.h>
#include <stdlib.h>

//lưu 10 cột điểm của môn C
//IPO: 10 biến

int main(int argc, char *argv[]) {
	float c1, c2, c3, c4, c5, c6, c7, c8, c9, c10; //khai báo lẻ
	float c[10]; //y chang câu lệnh trên
				 //c[0], c[1],..., c[9]
	
	c1 = 10.0; // biến lẻ 
	c[0] = 10.0; // biến kiểu mảng, vẫn là biến float hot mà
				 //tên phức tạp hơn tí
	printf("Bie^'n le?: %.2f %.2f %.2f\n", c1, c2, c3);
	printf("Bie^'n ma?ng: %.2f %.2f %.2f", c[0], c[1], c[2]);
	//mỗi phần tử trong mảng, tính từ 0, được gọi là 1 phần tử mảng, Element
	
	//muốn nhập giá trị cho biến thường/biến mảng/phần tử của mảng
	printf("Input 2 grade(0..10): ");
	scanf("%f", &c2); //biến thường
	scanf("%f", &c[1]);//biến mảng, mày là biến float hoy mà
	
	printf("After inputing two grades, the curent grades are:\n");
	printf("Bie^'n le?: %.2f %.2f %.2f\n", c1, c2, c3);
	printf("Bie^'n ma?ng: %.2f %.2f %.2f", c[0], c[1], c[2]);
	return 0;
}