#include <stdio.h>
#include <stdlib.h>

/* Bai 11. Viet ham in ra cac so nguen to nho hon n */


int isPrime(int x) {
    int i;
    if (x < 2) {
        return 0;
    }
    for (i = 2; i <= x/2; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}
void printPrimes(int n) {
    int i;
    for (i = 2; i < n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    printf("Cac so nguyen to nho hon %d la: ", n);
    printPrimes(n);
  
	return 0;
}
