#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//viết app nho nhỏ in ra tính cách của bạn dựa theo tên gọi
//dùng kí tự đầu trong tên gọi để luận ra tính cách

//áp dụng công thức IPO
//để bói đucợ tính cách, làm được bài này, ta cần gì?
//INPUT   ?: kí tự đầu trong tên!!!

//PROCESS ?: tùy kí tự trong tên là gì, A, B, C, D, E thì ta
//			 sẽ in/ghép với tính cách đã được tổng kết sẵn bởi nhân
//			 loại
//if (chữ cái là A) thì tính cách là ...
//if (chữ cái tên đúng là B) thì tính cách là ...
		
//OUPUT   ?: in ra tính cách tương ứng - printf("câu gì đó");

//TIPS: cứ có bao nhiêu input, ta cần bấy nhiêu biến!!!
//		cứ có output, thì sẽ có cần thêm biến để lưu output
//		trừ trường học output là in câu gì đó, không cần biến
//		output của nghiệm pt bậc 2: 2 nghiệm cần in ra x1, x2

//		phần thuật toán xử lí/process, có khả năng cần thêm biến
//		trung gian để lưu các giá trị trong quá trình tính toán
//		bài in tuổi theo năm sinh, age = 2022 -yob;
//								  biến trung gian
//		bài giải pt bậc 2, delta = b^2 -4ac nó là trung gian
//		output thực sự cần của pt bậc 2 là x1, x2

int main(int argc, char *argv[]) {
	
	//input: chữ cái đầu trong tên gọi
	char fL; //firstletter - camel case notation
	//process: có tên thì if tương ứng và in ra
	//output: chỉ in kq, ko cần biến

	//có biến thì cần value: hoặc gán ngay - hard-code, hoặc nhập
	printf("Welcome to DELL diviner.\n");
	printf("You are required to input the 1st letter in your first name.\n");
	printf("Then I will show you your destiny/fate\n");
	printf("Input your char: ");
	scanf("%c", &fL);
	//có được tên rồi đấy, chỉ 1 kí tự hoy
	//fL = 'A'...'Z'
	if (fL == 'A')
		printf("-Du`a co*.t ko pha?i la` so*? tru*o*ng cu? ba.n...\n");	
		
	if (fL == 'B')
		printf("Ba?n na(ng gio*'i ti'nh ra^'t tu*. nhie^n...\n");

	if (fL =='C')
		printf("Ti`nh ca?m cu?a ba.n ga^`n gu~i, tha^n ma^.t...\n");	
	
	//CODE CHẠY SAII NẾU GÕ a thường, ko in ra tính cách
	//lỗi do ta chỉ hỏi/xét chữ A, A khác A về mật ONOFF, mã ASCII
	
	return 0;
}