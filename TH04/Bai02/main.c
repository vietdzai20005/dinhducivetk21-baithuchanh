#include <stdio.h>
#include <stdlib.h>

/* Bai 2. Viet ham tinh  1 * 2* … *n.	kieu tra ve long */

long Tich1(int n){
		long s = 1;
		int i;
		for(i = 1; i <= n; i++)
		s = s * i;
		return s;
	}
int main(int argc, char *argv[]) {
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  
  printf("Tong 1 * 2 *...* %d = %ld\n", n, Tich1(n));
  
	return 0;
}

