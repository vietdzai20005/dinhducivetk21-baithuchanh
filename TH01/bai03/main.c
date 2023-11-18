#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Bai 3. Viet chuong trinh tinh Sin, Cos cua mot so x nhap vao tu ban phim, voi x là so do can tinh. */

int main(int argc, char *argv[]) {
	int x;
	printf("Nhap so x:");
	scanf("%d", &x);
	
	float sinx = sin(x * 3.1416/ 180);
  	float cosx = cos(x * 3.1416/ 180);
  	
	printf("Sin (%d) = %5.2f\nCos (%d) = %5.2f\n", x, sinx, x, cosx);
	
	return 0;
}

