#include <stdio.h>
#include <stdlib.h>

/* Bai 1. Viet ham tinh tong 1 + 2 + … + n. */

long Tong1(int n){
		long s = 0;
		int i;
		for(i=1; i<=n; i++)
		s = s + i;
		return s;
	}

int main(int argc, char *argv[]) {
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  
  printf("Tong 1 + 2 +...+ %d = %ld\n", n, Tong1(n));
  
	return 0;
}

