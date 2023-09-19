#include <stdio.h>
#include <stdlib.h>

//Lễ tình nhân/ 8.3, tặng phiếu mua hàng, $?
//anh í có tặng mình tiền/phiếu mua hàng hay ko?
//?$

int main(int argc, char *argv[]) {
	
	int gift = 16164; //trong ram lưu con số 4 byte
					  //2 byte đầu onoff thành con số 63 36
	int* hari = &gift;
//	char* hack = & biến char khác;
//	char* hack = & địa chỉ biến char khác; 
	char* hack = &gift; //hơi lầy, cũng địa chỉ hoy mà!!
	//nhưng mình chỉ nhìn 1 byte hoy
	
	//hỏi Hari, em đang lưu toạn độ, địa chỉ gì
	printf("Gift addr = %u\n", hari); //địa chỉ nè
	
	//hỏi rằng hari đang trỏ đến value cụ thể nào???
	printf("Gift = %d\n",*hari);
	
	//hỏi hack chứa đang trỏ kí tự gì
	printf("Hack ? $$$$ = %c\n", *hack); //$
	hack++; //lên 73 
			//char nhay từng byte
	printf("Finally hack? ???? = %c\n", *hack);
	
	return 0;
}