#include <stdio.h>
#include <stdlib.h>

//mình có xài đồ nhà người khác được không?
//anh có nhìn thấy em ko?
int yob = 2002;

void printYob();
void printLatestYob();
void seeNothing();

int main(int argc, char *argv[]) {
	seeNothing();
	printf("In main(), your yob is: %d\n", yob);
	return 0;
}

void seeNothing() {
	int yob = 2010; //biến local trùng tên với global
					//ưu tiên ở gần, ưu tiên người nhà
					//hiện tượng local lấn át/che/hide global
					
	printf("In seeNothing(), your yob is: %d\n", yob);
}

void printYob() {
	int age = 2022 - yob;
}

void printLastYob() {
	int age;
	printf("Your age is: %d\n", age);
}