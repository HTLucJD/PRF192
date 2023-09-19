#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//có 2 loại hàm:
//hàm có sẵn à thiên hạ viết sẵn rồi, cho mình xài. Tìm đem về xài
//PRE-DEFINED FUNCTIONS
//tolwr(kí tự) -> chữ thường
//sqrt(con số) -> căn bậc 2
//abs(con số) -> trị tuyệt đối
//sin(độ góc cung) -> sin cho mày lượng giác
//pow(5, 2) -> trả về 5^2
//pow(10, 10) -> trả về 10^10
//pow(a, b) -> a^b
//...
//ngăn tủ ở trong C chứa những hàm được phân loại rồi thì gọi là thư viện
//.h
//#include <math.h> ta sẽ mở ngăn math, 1 đống hàm toán học cho mình dùng
//Hầu hết hàm loại 4, re-use

//#include <ctype.h> mở ngăn toàn hàm xử lí ASCII
//#include <string.h> mở ngăn toàn là hàm xử lí câu văn/string/chuỗi

//mình có thể làm .h cho riêng mình, bữa nào rảnh chỉ!!1

//2. hàm tự làm, nhận vào và trả về, giống hàm nhà người ta
//CUSTOMIZED FUNCTION/CUSTOM FUNCTIONS
//getFactorial() 

int main(int argc, char *argv[]) {
	//tui muốn lấy căn bậc 2 của 100 -> coi có được 10 hem?
	//double sqrt(double x)
	printf("Ca(n ba^.)c 2 cu?a %d = %.2lf\n", 100, sqrt(100));
	
	double sum = sqrt(9) + sqrt(25);
	printf("Sum of ca(n:  %.2lf\n", sum);
	
	printf("Tri. tuye^.t -do^'i cu?a %d is %d\n", 500, abs(500));
	
	return 0;
}