#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Bai 4. Viet ham tinh  1/2 + 2/3 + … + (n-1)/n */

	double tinhTong(int n){
		double tong = 0.0;
		int i;
		for(i = 1; i < n; i++){
		
		tong = tong +(double)i / (i +1);
	}
	return tong;
}
int main(int argc, char *argv[]) {
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	
	double kq = tinhTong(n);
	printf("Ket qua la:%.2lf", kq);

return 0;}
 
