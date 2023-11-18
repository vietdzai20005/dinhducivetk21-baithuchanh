#include <stdio.h>
#include <stdlib.h>

/* Bai 6. Viet chuong trinh nhap vao 3 canh cua mot tam giac
 (gia su so lieu nhap vao luon dam bao tao thanh tam giac).
  Hay tinh chu vi va dien tich cua tam giac nay. */

int main(int argc, char *argv[]) {
	float a, b, c, p, s;
	
	printf("Nhap a:");
	scanf("%f", &a);
	printf("Nhap b:");
	scanf("%f", &b);
	printf("Nhap c:");
	scanf("%f", &c);
	
	p = (a + b + c) / 2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("chu vi = %5.2f, va dien tich tam giac = %5.2f", 2*p, s);
	
	return 0;
}
