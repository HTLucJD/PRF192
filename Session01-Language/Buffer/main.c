#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//viết app nho nhỏ, nhập vào năm sinh của bạn
//và nhập thêm kí tự đầu tiên trong tên của bạn
//sau đó in ra: năm sinh, tuổi, kí tự tên!!!

int main(int argc, char *argv[]) {
	
	int yob, age;
	char fL;
	
	printf("You required to input your profile\n");	
	printf("1st, input your yob: ");
	scanf("%d", &yob);
	
	age = 2022 - yob;
	
	//trước lệnh nhập chuỗi/kí tự ta xóa bộ đệm/dọn rác
	fflush(stdin); //flush: dọn, rửa
					//std in: standard input
					//vùng ram chuẩn dành cho việc nhập data
	//MAC, Linux: fpurge(stdin), __fpurge(stdin);
	
	printf("2nd, input 1st letter in your first name: ");
	scanf("%c", &fL);
	
	printf("Your profile is: \n");
	printf("Your yob: %d\n", yob);
	printf("Your age: %d\n", age);
	printf("Your name (brief): %c\n", fL);
	
	//nhập từ bàn phím 2 con số nguyên x, y.Sau đó in ra tổng của chúng
	int x, y;
	
	printf("You are required to input two integers\n");
	//scanf("%d", &x);
	//scanf("%d", &y);	
	scanf("%d%d", &x, &y);
	printf("The sum of %d and %d is %d\n", x, y, (x+y));
	//làm biếng tạo biến tạo biến trung gian sum = x + y
	//xét cho cùng x + y là 1 value, ta in luôn, khỏi cần giá 
	//trị trung gian/biến trung gian sum
	
	return 0;
}