#include <stdio.h>
#include <stdlib.h>

/* Bai 7 Viet chuong trinh nhap vao 2 canh cua hinh chu nhat. Hay tinh chu vi va dien tich cua hinh chu nhat nay */

int main(int argc, char *argv[]) {
	int a, b;
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d", &b);
	
	int chuvi = 2 * (a + b);
	int dientich = a * b;
	
	printf("Chu vi = %d\nDien tich = %d", chuvi , dientich);
	
	return 0;
}
