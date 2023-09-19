#include <stdio.h>
#include <stdlib.h>

//viết hàm mô phỏng lai hàm toán học y = f(x) = x^2
//hàm là quy tắc cử lí đầu vào để có được 1 đầu ra!!!

//hàm là cách đặt tên cho 1 nhóm các câu lệnh liên quan làm 1 việc
//gì đó - những thứ, những lệnh phải làm và đặt 1 cái tên
//Lợi ích:
//- re-use tái sử dụng, gọi lại dùng lại đoạn lệnh này chỉ qua tên gọi
//- easy to maintain - dễ bảo trì/sửa code!!!

void fV2(int x);

void fV1();



int main(int argc, char *argv[]) {
	
	//fV1();
	//fV1();
	//for (int i = 1; i <= 5; i++)
	//	fV1();
	
	//fV2(5); //hard-code đầu vào, fix cứng đầu vào, muốn linh hoạt
			//chưa thấy
	//fV2(tớ chỉ cần 1 con số/value int ở đây thôi mà)
	//value đó là value cứng, hay value từ bàn phím, đều là value!!!
	
	int n;
	do
	{
		printf("Input an integer to get ^2: ");
		scanf("%d", &n);
	} while (n == 0);
	
	fV2(n);
	
	return 0;
}

void fV2(int x)
{
	//chỉ có thằng ngáo mới làm lệnh scanf(x) ở đây
	//vì lệnh ở đây chính là công thức tính toán giá trị
	//đầu vào nên ta phải xem như đầu vào đã biết rồi
	//nó là con số nào đó sẽ nói sau, nhưng được gọi tạm là
	//x, nói cách khác x là 1 giá trị nào đó được đưa vào!!!
	//ko cần scanf(), vì lát hồi xài hàm, giống toán
	//thảy/đưa value vào cho x ở chỗ dấu ()
	
	int y = x * x;
	printf("y = f(x) = x^2; f(%d) = %d\n", x, y);
	
}

void fV1() //hàm loại  1 - ko vào ko ra
{
	//quy tắc xử lí bên trong hàm. Xử lí vào, để có cái ra
	//IPO được nhét hoàn toàn trong hàm!!!
	int x, y;
	printf("Please input an integer to get ^2\n");
	scanf("%d", &x);
	
	y = x * x;
	
	printf("y = f(x) = x^2; f(%d) = %d\n", x, y);
}