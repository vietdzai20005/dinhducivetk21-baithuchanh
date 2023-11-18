#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Bai 6. Viet chuong trinh tinh S = 1 + 2^2 + 3^3 + … + n^n */

int main(int argc, char *argv[]) {

  int n, i;
  float S = 0, P = 1;

  printf("Nhap n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    P = 1;
    P = pow(i, i);
    S += P;
  }

  printf("S = 1 + 2^2 + 3^3 +...+ %d^%d = %.2f\n", n, n, S);

  return 0;
}



