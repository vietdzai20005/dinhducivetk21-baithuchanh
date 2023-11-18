#include <stdio.h>
#include <stdlib.h>

/* Bai 5. Viet chuong trinh tinh S = 1! + 2! + … + n! */

int main(int argc, char *argv[]) {
	int n, i, j;
	long S, P;
	printf("Nhap n:");
	scanf("%d", &n);
	
	S = 0;
	for(i = 1; i <=	n; i++){
		P = 1;
		for(j = 1; j <=	i; j++)
		P = P * j;
		S = S + P;
	}
	printf("Tong 1! + 2! +...+ %d! = %ld\n", n, S);
	return 0;
}
