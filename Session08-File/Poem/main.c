#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void writeFile(); //ghi từ ram xuống đĩa cứng
void readFile(); //đọc từ đại cứng vào ram

int main(int argc, char *argv[]) {
	
	//writeFile();
	readFile();
	
	return 0;
}

void readFile() {
	FILE* f = fopen("tu-ay.txt", "r");
	char ch;
	do {
		ch = fgetc(f);
		printf("%c", ch);
	} while (ch != EOF);
	fclose(f);
}

void writeFile() {
	FILE* f = fopen("tu-ay.txt","a"); //append vào đuôi
	fprintf(f,"Tu ay trong toi bung code gao\n");
	fprintf(f,"Man hinh code do cua con tim\n");
	fprintf(f,"Hon toi ngap tran do-for-if\n");
	fprintf(f,"Rat nhi phan va day tieng do la");
	fclose(f); 
	printf("The file is created successfully");
}