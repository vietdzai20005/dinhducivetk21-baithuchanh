#include <stdio.h>
#include <stdlib.h>

/* Bai 7 Viet ham tinh 1 + 2^n + 3^n + ... + n^n* */
	
long long int tinhTong(int n){
	long long int sum = 0;
	int i;
    for ( i = 1; i <= n; i++) {
        sum += pow(i, n);
    }
    return sum;	
}

int main(int argc, char *argv[]) {
	int n;
	printf( "Nhap n: \n");
	scanf ( " %d",&n);
	long long int result = tinhTong(n);
	 printf(" Tinh tong 1 + 2^n + 3^n + ... + n^n: %lld", result);
	return 0;
}

