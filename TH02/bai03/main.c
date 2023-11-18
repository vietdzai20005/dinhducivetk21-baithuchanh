#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Bai 3. Su dung bai 6 (BAI THUC HANH SO 1: Bai 6. Viet chuong trinh nhap vao 3 canh cua mot tam giac 
(gia su so lieu nhap vao luon dam bao tao thanh tam giac). 
Hay tinh chu vi va dien tich cua tam giac nay), 
nhung them dieu kien kiem tra co phai la tam giac khong? 
Neu phai thi tinh chu vi, dien tich; neu khong thi in ra khong phai. */

int main(int argc, char *argv[]) {
	int a, b, c;
	float dientich;
	
	printf("Nhap canh a:");
	scanf("%d", &a);
	
	printf("Nhap canh b:");
	scanf("%d", &b);
	
	printf("Nhap canh c:");
	scanf("%d", &c);
	
	if (a + b <= c || a + c <= b || b + c <= a) {
  	printf("Khong phai la tam giac\n");
  	return 0;
}
	int chuvi = a + b + c;
	float s = (a + b + c) / 2;
	
	if (s == 0) {
  	printf("Dien tich: Khong co dien tich\n");
  	return 0;
  	
}  	else {
  	dientich = sqrt(s * (s - a) * (s - b) * (s - c));
}
  	printf("Chu vi: %d\n", chuvi);
  	printf("Dien tich: %.0f\n", dientich);

  return 0;
}
	
