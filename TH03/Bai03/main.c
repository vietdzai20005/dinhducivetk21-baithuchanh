#include <stdio.h>
#include <stdlib.h>

/* Bai 3. Viet chuong trinh tinh tong S = 1 + 1/2 + … + 1/n */

int main(int argc, char *argv[]) {
	int n,i;
	printf("Nhap n:");
	scanf("%d",&n);
	
	float S = 0;
	for(i = 1; i <= n; i++){
		S = S + 1.0/i;
	} 
	printf(" S = 1 + 1/2 +...+ 1/%d = %f ", n, S);
	return 0;
}
