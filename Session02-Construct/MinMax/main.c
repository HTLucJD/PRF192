#include <stdio.h>
#include <stdlib.h>

//Viết app no nhỏ nhập 2 số từ bàn phím và in ra số lớn nhất
//trong 2 số vừa nhập
//IPO

//I: cần 2 con số -> 2 biến int
//P: gs có 2 con số qua 2 biến a = 5, b = 1
//	so sánh a và b, coi đúng a > b không?
//O: số lớn nhất trong 2, in ra
 
int main(int argc, char *argv[]) {
	
	int a, b;
	printf("This program will show the maximum value of two numbers\n");
	scanf("%d%d",&a, &b);
	if (a > b)
		printf("You inpudt two numbers %d, %d and the max number is %d\n", a, b, a);
	else if (a < b)
		printf("You input two numbers %d, %d and the max number is %d", a, b, b);
	else 
		printf("You have just input two equal numbers, they are %d\n", a);
	
//BÀI TƯƠNG ĐƯƠNG
	
	
	return 0;
}