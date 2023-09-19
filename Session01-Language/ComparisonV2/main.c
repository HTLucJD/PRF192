#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Kiểm tra xem tuổi của mình cólà thanh xuân hay không?
	int age = 20;
	if (age >= 20 && age <= 30)
		printf("Cha`o thanh xua^n!\n");
	else 
		printf("I don't care!!! You are too old or too young!!!\n'");
		
	//viết đoạn code mới nhập cao 1 con số nguyên bất kì
	//sau đó thông báo rằng con số này có nằm ngoài
	//miền/đoạn [1..100] hay ko
	//vd gọi con số cần nhập là x
	//gõ x = -5 -> ngoài đạo [1.100]
	//gõ x = 101 -> ngoài đoạn
	//gõ x=50 -> trong đoạn
	int x;
	printf("Input a number integer. I will check if this number is in the range of [1..100] or not\n");
	printf("Input an integer: ");
	scanf("%d", &x);
	if (x < 1 || x > 100) 
		printf("Number %d is out of the range of [1..100]\n", x);
	else
		printf("Number %d is in the range of [1..100]\n", x);
	
	return 0;
}