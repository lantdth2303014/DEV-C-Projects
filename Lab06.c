#include <stdio.h>
#include <conio.h>

int main(){
	
	float diemToan = 0;
	float diemLy = 0;
	float diemHoa = 0;
	
	printf("Enter diem mon Toan: ");
	scanf("%f", &diemToan);
	
	printf("Enter diem mon Ly: ");
	scanf("%f", &diemLy);
	
	printf("Enter diem mon Hoa: ");
	scanf("%f", &diemHoa);
	
	printf("Tong diem 3 mon la: %.1f \n", diemToan+diemLy+diemHoa);
	printf("Diem trung binh 3 mon la: %.1f \n", (diemToan+diemLy+diemHoa)/3);
	
	getch();
	return 0;
}
