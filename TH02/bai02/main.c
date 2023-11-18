#include <stdio.h>
#include <stdlib.h>

/* Bai 2. Viet chuong trinh nhap vao 3 so nguyen, hay tim gia tri cuc dai trong 3 so vua nhap. */

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d", &b);
	printf("Nhap b:");
	scanf("%d", &c);
	
	int max = a;
	
	if(max < b){
	 max = b;
	} if (max < c) {
	 max = c; 
	}
	printf("Gia tri cuc dai la: %d ", max);
	return 0;
}
