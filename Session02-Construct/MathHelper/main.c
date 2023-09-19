#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//viết app hỗ trợ bé làm toán phép toán cơ bản
//app cung cấp tính năng meni, 1 2 3 4 5 6.... 10. Quit
//ai muốn chơi tính năng nào, chọn con số đó

//1. Tính diện tích hình tròn 	IPO
//2. Tính diện tích chữ nhật 	IPO (w, l -> area)
//3. Tính...					IPO
//10. Quit

//IPO của cả bài...
//cần gì bài menu này tổng quát???
//I: cho t cái lực chọn của m, m chọn mấy??
//			biến choice/option/menuItem;
//P: xử lí, tùy choice là gì thì ta hành xử tương ứng menu
//		có nhiều choice 1 2 3 4 5 .. -> switch case / if else
//O: tùy chọn thì có O tương ứng

int main(int argc, char *argv[]) {
	
	int choice;
	float radius,area;
	
	printf("Welcome to Math Helper Program\n ");
	printf("Please choose the following functions to play with\n");
	printf("1. Compute the disk area\n");
	printf("2. Compute the rectangle area\n");
	printf("3. Compute the triangle area\n");
	printf("4. Quit\n");
	
	printf("Choose 1...4: ");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			//CPU vào đây xử lí vụ hình tròn
			printf(" You choose 1 to compute the disk area\n");
			printf("Please input a disk's radius: ");
			scanf("%f", &radius);
			area = 3.14 * radius * radius;
			printf("The disk with r = %.2f has the area of %.2f\n", radius, area);
			break;
		case 2:
		 	break;
		case 3:
			break;
		case 4:
		 	printf("Bye bye, see you next time\n");
			break;
		default: 
		 	printf("Please choose 1...4\n");
	}
	
	return 0;
}