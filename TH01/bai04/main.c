#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Bai 4.Viet chuong trinh tinh can bac 2 cua mot so x nhap vao tu ban phim. */

int main(int argc, char *argv[]) {
	float x, c;
	printf("Nhap x:");
	scanf("%f", &x);
	
	c = sqrt(x);
	
	printf("Can bac hai cua %5.2f = %5.2f", x, c);
	return 0;
}
