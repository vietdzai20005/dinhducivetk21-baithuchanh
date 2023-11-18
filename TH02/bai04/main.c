#include <stdio.h>
#include <stdlib.h>

/* Bai 4. Viet chuong trinh nhap vao diem 3 mon thi: Toan, Ly, Hoa cua hoc sinh.
 Neu tong diem >= 15 va khong co mon nao duoi 4 thi in ket qua dau.
 Neu dau ma cac mon deu lon hon 5 thi in ra loi phe "Hoc deu cac mon", nguoc lai in ra "Hoc chua deu cac mon",
  cac truong hop khac la "Thi hong". */

int main(int argc, char *argv[]) {
	float toan, ly, hoa;
	
	printf("Nhap diem toan:");
	scanf("%f", &toan);
	
	printf("Nhap diem ly:");
	scanf("%f", &ly);
	
	printf("Nhap diem hoa:");
	scanf("%f", &hoa);
	
	if((toan + ly + hoa) >= 15 || toan >= 4 || ly >= 4 || hoa >= 4) {
		printf("Dau.\n");
		
	if(toan > 5 || ly > 5 || hoa > 5){
		printf("Deu qua mon.\n");
		
	} else {
		printf("Hoc chua deu cac mon.\n");}
		
	 } else {
		printf("Thi hong.\n");
	}
	return 0;
}
