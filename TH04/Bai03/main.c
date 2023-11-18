#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Bai 3. Viet ham tinh 1 + 1/2 + … + 1/n.			 Kieu tra ve double */
double Tong(int n){
	double s = 0;
	int i;
	for(i = 1; i <= n; i++){
		s = s + 1.0/i;
	}
		return s;
}
int main(int argc, char *argv[]) {
	double n;
	printf("Nhap n:");
	scanf("%lf", &n);
	printf("Ham tinh 1 + 1/2 +...+ 1/%.0lf = %.2f.", n, Tong(n));
	
	return 0;
}

