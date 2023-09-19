#include <stdio.h>
#include <stdlib.h>

//số nhà/địa chỉ là 1 con số!!! hiển nhiên
//nhưng con số thì ko hẳn là số nhà!!! 
//&yob -> con số, nhưng nó là số nhà, tọa độ vùng ram
//			6M80

//lật ngược vấn đề: - cheat engine: khi có 1 con số
// và t muốn nói rằng nó là tọa độ của 1 biến khác
//có cách nào convert 1 số bt thành địa chỉ ko??

//xưa nay, lấy tọa độ phải là dấu &bien

//tự nhiên bi giờ có 1 số, và muốn nói rằng đó là địa chỉ

int main(int argc, char *argv[]) {
	
	int yob = 2002;
	int* hari;
	printf("The address of yob:%u\n", &yob);
	printf("Yob: %d\n", yob);
	//6684188 địa chỉ của điểm game, và giờ sửa điểm game
	
	//hari = & yob;
	//hari = cần 1 địa chỉ, cho em 1 địa chỉ int nào đố
	//hari = 6684188; //ko ổn vì đây là 1 con số
	
	hari = (int*)6684180; //cast/casting
						  //đưa địa chỉ/con số qua (int*)
						  //tức là lấy địa chỉ
						  
    printf("Yob now is (via Hari) %d\n", *hari);
    //sửa điểm game
    *hari = 101010;
    printf("Finally, yob now is (via Hari) %d\n", yob);
	
	return 0;
}