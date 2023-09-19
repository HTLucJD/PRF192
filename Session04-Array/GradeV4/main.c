#include <stdio.h>
#include <stdlib.h>

//kĩ thuật khai báo mảng và gán luôn giá trị
//int a = 10; mảng có trò này ko. có

int main(int argc, char *argv[]) {
	
	float c[10] = {1, 1, 2, 3, 5, 8};
	printf("Your ten grades\n");
	for (int i = 0; i < 10; i++)
		printf("Grade [%d] = %.2f\n", i, c[i]);
	
	float col[] = {2, 4, 6, 8, 10};
	//câu lệnh này ko nó rõ bao nhiêu biến được cấp. Nhưng lại
	//gán sẵn value cho 1 số biến. Mảng sẽ tự động được cấp 5 biến
	//tùy theo số lượng value được gán; bài này là 5
	//bài này chính là mảng [5]
	
	return 0;
}