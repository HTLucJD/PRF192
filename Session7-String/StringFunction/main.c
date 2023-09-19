#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Độ lại hàm strcpy()

void strcpy161(char* dest, char* src);

void removeChar();

void removeCharV2();

void removeCharV3();

int main(int argc, char *argv[]) {
//	char name[50], n[50] = "Ahihi - do^` ngok. SOS";
//	strcpy161(name, n);
//	printf("Name: ");
//	puts(name);
	removeCharV3();
	return 0;
}

void removeCharV3() {
	char n[50] = "A111H";
	for (int i = 0; i < strlen(n); i++)
	{
		if (n[i] >= '0' && n[i] <= '9')
		{
			for (int j = i; j < strlen(n); j++)
				n[j] = n[j + 1];
			i--;
		}	
	}
	printf("After removing: ");
	puts(n);
}

void removeCharV2() {
	char n[50] = "SOS$#Ahihi";
	int pos = 4;
	for (int i = pos; i < strlen(n); i++)
		n[i] = n[i+1];
	printf("After removing: ");
	puts(n);
}

void removeChar() {
	char n[50] = "A1hihi";
	for (int i = 1; i < strlen(n); i++)
		n[i] = n[i+1];
	printf("After removing: ");
	puts(n);
}

//dest: sẽ trỏ vào đầu 1 mảng cần đổ data vào
//src: trỏ mảng đang có data, chữ, cần ném cho ai đó
void strcpy161(char* dest, char* src) {
	for (int i = 0; i <= strlen(src); i++)
		dest[i] = src[i];
}