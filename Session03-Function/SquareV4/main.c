#include <stdio.h>
#include <stdlib.h>

//viết đoạn code theo style hàm tính bình phương của 1 con số

int fV4(int x);



int main(int argc, char *argv[]) {
	
	int n;
	printf("Input a number to get ^2: ");
	scanf("%d", &n);
	printf("Result: %d", fV4(n));
	return 0;
	
}

int fV4(int x) {
	//coi như x đã có rồi, quy ước hàm nhập vào x; cứ giả bộ x sẽ có sau
	//cứ xử lí trên tương đương với tương lai sẽ xử lí trên value thật
	//xử lí trên công thức chính là xử lí trên calue thật sau này

	return x * x;
}