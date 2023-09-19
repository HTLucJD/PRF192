#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//viết app nhập vào năm sinh, sau đó trả lời rằng đủ tuổi vào quán bar hay ko
//>= 18 được vào bar 

//để giải quyết bài này: ta cần gì???
//INPUT: tuổi, thì cần năm sinh

//PROCESS: xử lí gì???
//			có năm sinh ta ra tuổi
// 			quyết định vào bar hay không và thông báo!!!
//> biến, lưu value cho input!!!

//OUTPUT: cần xuất kết quả gì? cho vào bar hoặc không!!!

int main(int argc, char *argv[]) {
	
	int yob, age;
	printf("Welcome to Thie^n -Du+o+`ng Bar\n");
	printf("Please show your ID card/yob: ");
	scanf("%d", &yob);
	
	age = 2022 - yob;
	if (age >= 18)
		printf("Ko say ko ve^`. Say thi` sao ve^`. Let's chill\n");
	else	//bao hàm việc (age < 18)
		printf("Hey rich kid. Go home now!!!\n");
		//else có thêm tính chất loại trừ
		//nghĩa là nếu CPU chạy vào hẻm if, xong if,	
		//xong if thì nó đi luôn, không thèm hỏi else
		//khác hoàn toàn việc xài 2 lệnh if độc lập như V1
		
	
	return 0;
}