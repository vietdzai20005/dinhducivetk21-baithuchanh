#include <stdio.h>
#include <stdlib.h>

/* Bai 2. Viet chuong trinh tinh tich P = 1*2* … *n.*/

int main(int argc, char *argv[]) {
	int n, i;
	printf("Nhap n:");
	scanf("%d", &n);
	
	long P = 1;
	for(i = 1; i <= n; i++){
		P = P * i;
	}
	printf("Tinh 1 * 2 *...* %d = %ld", n, P);
	return 0;
}
