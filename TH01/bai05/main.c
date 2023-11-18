#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Bài 5. Viet chuong trinh tinh can bac k cua mot so x nhap vao tu ban phim. Yeu cau khong su dung ham pow(). */

int main(int argc, char *argv[]) {
	float x, c;
	int k;
	
	printf("Nhap k:");
	scanf("%d", &k);
	
	printf("Nhap x:");
	scanf("%f", &x);
		
	c = exp(log(x) / k);
	
	printf("Can bac %d  cua  %5.2f = %5.2f", k , x, c);
	return 0;
}
