#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Hãy lưu 1 kí tự và in ra màn hình
int main(int argc, char *argv[]) {
	
	char firstChar = 'L'; //Cặp nháy đơn lưu 1 kí tự
	
	//unsigned char firstChar = 'Ω';//234;//một kí tự có thể chơi theo 2 cách
						 //chơi theo mã số chống lưng	
	
	//1 byte trong RAM on off thành kí tự L
	//dùng %c để chỉ cho CPU biết cách on-off
	//mò cào chip BIOS/UEFI trên mainboard để tìm cách 
	//ánh xạ thành kí tự trên màn hình
	//đây là  sự phối hợp của CPU +RAM + Keyboard
	//						+ VGA Card + Printer + Monitor
	//						+HDD/SSD + BIOS/UEFI
	
	printf("The 1st letter in your name is %c\n", firstChar);
	printf("The ASCII code of %c is %d\n", firstChar, firstChar);
	
	firstChar += 32;//đổi sang thường
	firstChar += 32;
	printf("After converting to lower case...\n");
	printf("The 1st letter in your name now is %c\n",firstChar);
	printf("The ASCII code of %c is %d\n", firstChar, firstChar);
	
	return 0;
}