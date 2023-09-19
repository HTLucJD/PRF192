#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//viết app nho nhỏ nhập chữ cái đầu trong tên bạn - nhập chữ Hoa
//sau đó in ra thường!!

int main(int argc, char *argv[]) {
	
	char fL; //firstletter - cú pháp con lạc đà cù lưng
			 //camel case notation
	printf("Input the 1st letter of your first name: ");
	scanf("%c", &fL);
	
	//giả bộ nhập tử tế!!! nếu không nhập tử tế gõ $, sẽ bị ăn chửi
	//dùng if mới chửi được
	printf("Your have just input the character : %c\n", fL);
	
	//đổi hoa sang thường
	fL +=32;
	printf("And it is converted to lower case as: %c\n",fL);
	
	return 0;
}