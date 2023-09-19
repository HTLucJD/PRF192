#include <stdio.h>
#include <stdlib.h>

//TT đi Mĩ đem theo 5000$
//sau đó về VN, Hari có đi uống cafe với TD
//TD cũng mua tặng Hari một túi HM

int main(int argc, char *argv[]) {
	
	int tt = 5000;
	int td = 4000;
	
	printf("1st, TT has %d; TD has %d\n", tt, td);
	printf("1st, vi' TT is at %u; vi' TD is at %u\n", &tt, &td);
	//2 Ví sát nhau, vùng ram TD 76-77-78-79
	//						  TT 80-81-82-83
	
	int* hari = &tt;
	//hỏi hari xem tt đang có bao nhiêu
	printf("1st, Hari said, TT has %d\n", *hari);
	//hari mua đồ hết 4000
	*hari -= 4000;
	printf("2nd, Hari said, TT now has (after 4K) %d\n", *hari);
	printf("2nd, TT said, TT now has (after 4K by Hari) %d\n", tt);
	
	//Hari xem ví TD, ta muốn có danh bạ mới, thay danh bạ cũ
	//gán giá trị mới cho biến con trỏ - là 1 biến gán = như bt
	//									CHỈ ĐƯỢC GÁN = ĐỊA CHỈ KHÁC!!!!
	hari = &td;
	printf("3rd, Hari said, TD now has %d\n", *hari);
	*hari -= 2000;
	printf("4th, TD said, TD now has (after 2K by Hari) %d\n", td);
	
	return 0;
}