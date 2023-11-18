#include <stdio.h>
#include <stdlib.h>

/* Bai 5. Viet chuong trinh nhap so gio lam va luong/gio roi tinh so tien luong tong cong. 
Neu so gio lam lon hon 40 thi nhung gio lam doi ra duoc tinh 1,5 lan. */

int main(int argc, char *argv[]) {
	int gio, luong;
	float tongluong;
	
	printf("Nhap gio:");
	scanf("%d", &gio);
	
	printf("Nhap luong:");
	scanf("%d", &luong);
	
	tongluong = gio * luong;
	
	if(gio > 40){
		tongluong += (gio - 40) * luong * 1.5;
	}else {
	printf("Thi Hong.\n");
	}
	printf("Tong tien luong: %.2f\n", tongluong);

	
	return 0;
}
