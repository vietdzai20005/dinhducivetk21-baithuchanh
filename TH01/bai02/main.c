#include <stdio.h>
#include <stdlib.h>

/* B�i 2. Hay nhap vao 2 so nguyen, sau do hay tinh tong, hieu, tich, thuong */

int main(int argc, char *argv[]) {
	int a,b;
	int tong, hieu, tich;
	float thuong;
	
	printf("Nhap 2 so nguyen a,b:\n");
	scanf("%d%d", &a, &b);
	
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (a / b);
	
	printf("%d + %d = %d\n", a, b, tong);
	printf("%d - %d = %d\n", a, b, hieu);
	printf("%d * %d = %d\n", a, b, tich);
	printf("%d / %d = %.0f\n", a, b, thuong);



	return 0;
}
