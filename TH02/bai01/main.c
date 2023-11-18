#include <stdio.h>
#include <stdlib.h>

/* Bai 1. Viet chuong trinh nhap vao so nguyen duong, in ra thong bao so chan hay le. */

int main(int argc, char *argv[]) {
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	if (n % 2 == 0) {
		printf("%d la so chan", n);
	}else {
		printf("%d la so le:", n);	
	}
	return 0;
}
