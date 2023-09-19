#include <stdio.h>
#include <stdlib.h>

int yob; //yob là biến toàn cục, global, hàm nào cũng sờ/sửa được

//bài lẻ, hiểu kiến thức lí thuyết.Bài này minh họa cái khái niệm
//scope của 1 biến, tức là ta đứng ở đầu thì ta mới sờ được
//biến, chỗ nào thì biến bị che khuất/ko thấy - local va global
//liên quan đến scope

void printYob();

void printLatestYob();

int main(int argc, char *argv[]) {
	printf("In main(), yob is %d\n", yob);
	//yob = 2002;
	printYob();
	printLatestYob();
	printf("In main(), after calling printYob() yob finally is %d\n", yob);
	return 0;
}

void printYob() {
	printf("In printYob(), yob is %d\n", yob);
	yob = 2010;
	printf("In printYob(), after updating yob, yob now is %d\n", yob);
}

void printLatestYob() {
	yob = 2022;
	printf("In printLatestYob(), after updating yob, yob now is %d\n", yob);
}