#include <stdio.h>
#include <stdlib.h>

void saveAChar();
void openAChar();
void openChars(); //hàm fgetc() chỉ đọc 1 kí tự
void openCharsV2();
void saveADocument();

int main(int argc, char *argv[]) {
	//saveAChar();
	//openAChar();
	openCharsV2();
	saveADocument();
	return 0;
}

void saveADocument() {
	char ch;
	FILE* f = fopen("don-doi-chuyen-nganh.txt", "a");
	printf("You are required to input a document. Hit Ctrl-S to stop & save your work to drive\n");
	
	do {
	ch = getchar(); //gõ-gán-save, đến khi nhấn Ctrl+S
	//fprintf(f, "%c", ch);
	fputc(ch, f);
	} while (ch != 19); //chưa gõ Ctrl+S thì chưa cho thoát
	printf("Your document is saved to the drive successfully!!!\n");
	fclose(f);
}

void openCharsV2() {
	char ch;
	FILE* f = fopen("don-doi-chuyen-nganh.txt", "r");
	printf("The contents of char.txt:\n");
	
	do {
		ch = fgetc(f);
		printf("%c", ch);
	} while (ch != EOF);
	fclose(f);
}

void openChars() {
	char ch;
	FILE* f = fopen("char.txt", "r");
	printf("The contents of char.txt:\n");
	
	ch = fgetc(f);
	printf("%c", ch);
	
	ch = fgetc(f);
	printf("%c", ch);
	fclose(f);
}

void openAChar() {
	FILE* f = fopen("char.txt", "r");
	printf("The contents of char.txt:\n");
	char ch = fgetc(f);
	printf("%c", ch);
	fclose(f);
}

void saveAChar() {
	FILE* f = fopen("char.txt", "a"); //tên tập tin có thể kèm đường dẫn path
	fprintf(f, "%c", '$');
	fclose(f);
	printf("The $ character has been written to the file successfully\n");
}