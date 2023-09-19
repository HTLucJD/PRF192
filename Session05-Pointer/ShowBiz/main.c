#include <stdio.h>
#include <stdlib.h>

//Trấn Thành đem 5K$ đi Mỹ, cùng Hari sắm đồ
//Trấn Thành xài tiền, bình thường
//Hari lấy ví của TT xài tiền, bình thường luôn!!!

int main(int argc, char *argv[]) {
	
	int tT = 5000; //Đem theo dùng!!!
	//Gỉa bộ TT mua 1 bộ đồ tốn 1K, hỏi TT còn bao nhiêu
	//mô phỏng được việc TT tiêu tiền\
	//tT = 4000; //gán biến = giá trị mới
	//TT tiêu tiền, tức là tiền bị giảm, bđ 5, trừ 1 còn 4
	tT -= 1000; //tiêu 1K tT = tT - 1000; tăng giảm tự thân
	
	//Hải xài, ví TT phải giảm, TT ddauw ví cho Hari tự do mua!!!
	int* hari = &tT;//hành động đưa ví cho ai đó
					//&tT tọa độ, địa chỉ của hộp TT đang chưa 4K
					//cho vị trí của cái ví
					
	//int* là 1 data type mới
	//nó dùng để địa diện, lưu trữ danh bạ, lưu địa chỉ của biến
	//int khác. Địa chỉ của biến cũng là con số, ko phải là số bình thường
	//mà còn mang ý nghĩa địa chỉ
	
	//Kiểm tra 
	printf("Vi' TT is at %u\n", &tT);
	printf("After buying a LV bag, TT now has %d$\n", tT);
	
	printf("Vi' TT is at %u\n", hari); 
	printf("Hari said: TT now has %d\n", *hari);//*hari: jump/zoom phóng tới
												//địa chỉ danh bạ
	//*hari ~~ ví TT rồi
	*hari = *hari - 3000;
	printf("After Hari buying a Dior bag, TT now has %d$\n", tT);
	//dùng biến con trỏ can thiệp vào biến gốc
	//cho tao địa chỉ t can thiệp liền!!!
	
	return 0;
}