#include <stdio.h>
#include <stdlib.h>

/* Bai 8.Viet chuong trinh nhap vao ban kinh cua hinh tron. Hay tinh chu vi va dien tich cua hinh tron nay */

int main(int argc, char *argv[]) {
	int a, b;
	int r;
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d", &b);
	printf("Nhap ban kinh r:");
	scanf("%d", &r);
	
	int chuvi = 2 * (a + b);
	float dthinhtron = (3.14 * r * r);
	
	printf("Chu vi = %d\nDien tich hinh tron = %5.2f", chuvi, dthinhtron );
	
	return 0;
}


