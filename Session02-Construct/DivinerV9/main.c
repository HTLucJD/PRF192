#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main(int argc, char *argv[]) {
	
	
	char fL;
	printf("Welcome to DELL diviner.\n");
	printf("You are required to input the 1st letter in your first name.\n");
	printf("Then I will show you your destiny/fate\n");
	printf("Input your char: ");
	
	scanf("%c", &fL); 
 	fL = toupper(fL); //chơi so sánh chữ Hoa, $, ~
	
	switch (fL)
	{
		case 'A':
			printf("-Du`a co*.t ko pha?i la` so*? tru*o*ng cu? ba.n...\n");
			break;
		case 'B':
			printf("Ba?n na(ng gio*'i ti'nh ra^'t tu*. nhie^n...\n");
			break;
		case 'C':
			printf("Ti`nh ca?m cu?a ba.n ga^`n gu~i, tha^n ma^.t...\n");	
			break;
		case 'D':
			printf("Ti`nh ca?m cu?a ba.n no^`ng na`n, ma~nh lie^.t\n");
			break;	
		default:
			printf("Coming soon...\n");	
	}
	
	/*
	if (fL == 'A')
		printf("-Du`a co*.t ko pha?i la` so*? tru*o*ng cu? ba.n...\n");	
	else if (fL == 'B')
		printf("Ba?n na(ng gio*'i ti'nh ra^'t tu*. nhie^n...\n");	
	else if (fL =='C')
		printf("Ti`nh ca?m cu?a ba.n ga^`n gu~i, tha^n ma^.t...\n");	
	else
		printf("Coming soon...\n");	
	*/
	return 0;
}