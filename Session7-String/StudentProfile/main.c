#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void storeName();

void storeNameV2();

void storeNameV3();

void storeNameV4();

void storeNameV5();

void storeNameV6();

void storeNameV7();

void storeNameV8();

void storeNameV9();

void storeNameV10();

int main(int argc, char *argv[]) {
	storeNameV9();
	return 0;
}

void storeNameV10() {
	char n1[50] = "Ahihi";
	char n2[50] = {'A', 'h', 'i', 'h', 'i', '0'};
	char n3[50] = {'A', 'h', 'i', 'h', 'i', '\0'};
	char name[50];
	strcpy(name, n1);
	printf("After copy the string, name now is: ");
	puts(name);
}

void storeNameV9() {
	int yob = 2002;
	char name[50];
	printf("Input your name: ");
	gets(name);
	puts(name);
	printf("Hi %s", name);
}


void storeNameV8(){
	int yob = 2002;
	char name[10];
	printf("yob = %d; yob addr: %u\n", yob, &yob);
	printf("name[0] addr:%u\n", name);
	printf("Input your name: ");
	scanf("%9[^\n]", name);
	printf("Hi %s; yob: %d\n", name, yob);
}

void storeNameV7() {
	int yob = 2002;
	char name[10];
	printf("yob = %d; yob addr: %u\n", yob, &yob);
	printf("name[0] addr:%u\n", name);
	printf("Input your name: ");
	scanf("%[^\n]", name);
	printf("Hi %s; yob: %d\n", name, yob); 
}

void storeNameV6() {
	char name[50];
	printf("Input your name: ");
	scanf("%[^\n]", name);
	printf("Hi %s\n", name);
}

void storeNameV5() {
	char name[50];
	printf("Input your name: ");
	scanf("%s", name);
	printf("Hi %s\n", name);
}

void storeNameV4(){
	char name[50] = "tan.luc";
	printf("The original name: %s\n", name);
	strupr(name);
	printf("The after upper name: %s\n", name);
	//strlwr(name); đổi thành thường
}

void storeNameV3() {
	char name[50] = "tan.luc";
	printf("The original name: %s\n", name);
	for (int i = 0; i <strlen(name); i++)
		if (name[i] >= 'a' && name[i] <= 'z') 
			name[i] -= 32;
	printf("The upper case name: %s\n", name);
}

void storeNameV2() {
	char name[] = "E't-O-E't";
	printf("Your name: %s\n", name);
	printf("The length of your name: %d\n", strlen(name));
	printf("The rest of the aray after the name/NULL\N");
	for (int i = 0; i < 500; i++)
		printf("%c ", name[i]);
}

void storeName() {
	
	char name[] = {'S', 'O', 'S', '\0', '$', '#'};
	printf("Your name: %s\n", name);
	//hàm xem độ dài của chuỗi
	int len = strlen(name);
	printf("The length of your name: %d\n", len);
	printf("Your name (printed by using for):\n");
	for (int i = 0; i < 6; i++)
		printf("%c", name[i]);		
}