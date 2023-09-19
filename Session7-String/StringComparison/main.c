#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[50] = "Ahihi";
	char s2[50] = "ahihi";
	int r = strcmp(s1, s2);
	printf("s1 vs. s2: %d\n", r);
	if (strcmp(s1, s2) > 0)
		printf("%s > %s\n",s1, s2);
	else
		printf("%s < %s\n",s1, s2);
		
	strcpy(s1, "Ahihi");
	strspy(s2, "z");
	return 0;
}