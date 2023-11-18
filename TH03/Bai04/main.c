#include <stdio.h>
#include <stdlib.h>

/* Bai 4. Viet chuong trinh tinh tong S = 1/2 + 2/3 + … + (n-1)/n. */

int main(int argc, char *argv[]) {
	int n, i;
	printf("Nhap n:");
	scanf("%d", &n);
	
	float S = 0;
	for(i = 1; i <= n; i++){
	float S = S + (i - 1)/ i;
}
	printf("S = 1/2 + 2/3 +...+ (%d-1)/%d = %f", n, n, S);
	
	return 0;
}
