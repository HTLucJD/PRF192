#include <stdio.h>
#include <stdlib.h>

const float PI = 3.1415;
//Kí hiệu cho vùng RAM read-only

//Viết app nhập vào bán kính hình tròn, sau đó in ra diện tích
//công thức: S= Pi * r^2

int main(int argc, char *argv[]) {
	
	float radius, area;
	
	printf("Input a radius of a disk: ");
	scanf("%f", &radius);
	
	area = PI * radius * radius;
	printf("The area of a disk (r = %f) is %f\n", radius, area);
	//default số thực in 6 phần thập phân
	printf("The area of a disk (r = %.2f) is %.2f\n", radius, area);
	
	return 0;
}