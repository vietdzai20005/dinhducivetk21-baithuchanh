#include <stdio.h>
#include <stdlib.h>

/* Bai 1. Viet chuong trinh tinh tong S = 1 + 2 + … + n. */

int main(int argc, char *argv[]) {
	int n, i;
	printf("Nhap n:");
	scanf("%d", &n);
	
	long S = 0;
	
	for(i = 1; i <= n; i++){
		S = S + i;	
	}
	printf("Tong 1 + 2 +...+ %d = %ld\n", n, S);
	
	return 0;
}
