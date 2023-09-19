#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.14; //biến toàn cục, global variable 
					   //hàm nào cũng dùng được

//tư duy viết hàm cho bài MathHelper
void printMenu();

void computeDiskArea();

int main(int argc, char *argv[]) {
	
	int choice;//sự lựa chọn option
	do { //CHƯA BẰNG 5 THÌ CHƯA THOÁT
		
		printMenu();
		
		printf("Choose 1..5: ");
		scanf("%d", &choice);
		
		switch (choice) {
			case 1:
				computeDiskArea();
				break;
			case 2:
				printf("You choose to compute the retangle area\n");
				break;
			case 3:
				printf("You choose to compute the triangle area\n");
				break;
			case 4:
				printf("You choose to compute the ... area\n");
				break;
			case 5:
				printf("Bye bye. See you next time\n");
		}
	} while (choice != 5);
	
	return 0;
}

void printMenu() {
	printf("\n=============================\n");
	printf("Welcome to Math Helper program\n");
	printf("Choose the following functions to play with: \n");
	printf("1. Compute the disk area\n");
	printf("2. Compute the rectangle area\n");
	printf("3. Compute the triangle area\n");
	printf("4. Compute the ... area\n");
	//...
	printf("5. Quit\n");
}

void computeDiskArea() {
	float radius;
	printf("You choose to compute the disk area\n");
	printf("Please input a radius (> 0): ");
	scanf("%f", &radius);
	printf("The disk with r = %.2f has the area of %.2f\n", radius, (PI * pow(radius, 2)));
}