#include <stdio.h>
#include <stdlib.h>

//In ra các số tự nhiên từ 1..n (n > 1)
//IPO
//I: cần n trước đã, tức là  phải có n trước đã
//P: ko sợ luôn for và if  nếu cần, miễn for đến đâu, đến n
//O: quá quen cho bài 1..100

int main(int argc, char *argv[]) {
	
	int n;
	printf("I am here to show the list of numbers from 1 to n (>1)\n");
	printf("Please input n > 1: ");
	scanf("%d", &n);
	
	if (n < 1)
		printf("Do ku know how to input a number > 1?\n");
	else
	{
		printf("Again, the list of numbers from 1 to %d:\n", n);
		for (int i = 1; i <= n; i++)
			printf("%d ", i);
	}
	
	return 0;
}