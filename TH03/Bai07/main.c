#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Bai 7. Viet chuong trinh tinh S = 1 + 2^n + 3^n + … + n^n */

int main(int argc, char *argv[]) {

  int n, i ;
  float S = 0;

  printf("Nhap n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    S = S + pow(i, i);
  }

  printf("S = %.2f\n", S);


  return 0;
}



