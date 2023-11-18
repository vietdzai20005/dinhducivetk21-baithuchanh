#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Bai 6 Viet ham tinh 1 + 2^2 + 3^3 + … + n^n */

int pow(int base, int exponent) {
    if (exponent > 0) {
        int result = base;
        int i;
        for ( i = 1; i < exponent; i++) {
            result *= base;
        }
        return result;
    } if (exponent == 0) {
        return 1;
    }
 return -1;
}

int sum(int n) {
    int total = 0;
    int i;
    for ( i = 1; i <= n; i++) {
        total += pow(i, i);
    }
    return total;
}

int main(int argc, char *argv[]) {
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    
    int result = sum(n);
    printf("Tong 1 + 2^2 + 3^3 + ... + %d^%d = %d", n, n, result);
    

	return 0;
}
