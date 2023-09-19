#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int tt = 5000;
	int td = 4000;
	int* hari;
	
	printf("1st, TT has %d; TD has %d\n", tt, td);
	printf("1st, vi' TT is at %u; vi' TD is at %u\n", &tt, &td);
	//2 Ví sát nhau, vùng ram TD 76 77...
	//						  TT 80 81...
	
	hari = &td;
	//hỏi td có bao nhiêu
	printf("1st, Hari said, TD now has %d\n", td);
	printf("1st, Hari said, TD now has %d\n", *hari);
	
	//tui mún, hari lấy ví tt, vậy làm sao?
	//hari = &tt; //quá quen hông thèm làm
	hari++; //tui là danh bạ, ++ tui nghĩ là đi sang căn kế bên, địa chỉ
	//Hari ơi, nhà em đang trỏ có gì, bao nhiêu tiền
	printf("2nd, Hari said, ai d-o' now has %d\n", *hari); 
	
	//++ nhưng là + 4, vì 1 biến int chưa 4 byte
	//tui đang trỏ tọa độ 84, 84++ ko là 85, nhảy cóc 1 căn
	
	(*hari)++; //vào vùng ram tt, tăng value lên 1
				//++ -- của bến bình thường
	printf("TT now has %d\n", tt);
	
	hari--;
	printf("3rd, Hari points to %u\n", hari);
	
	return 0;
}