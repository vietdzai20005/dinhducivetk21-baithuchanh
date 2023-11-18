#include <stdio.h>
#include <stdlib.h>

/*Bai 5 Viet ham tinh Tong 1! + 2! + … + n! */
	int giaiThua(int n){
	int giai_thua = 1;
	int i;
	for ( i = 1; i <= n; i++){
		giai_thua *= i;
	}
	return giai_thua;
}	
	int tongGiaiThua(int n) {
    int tong = 0;
    int i;
    for (i = 1; i <= n; i++) {
        tong = tong + giaiThua(i);
    }
    return tong;
}
	int main(int argc, char *argv[]) {
	int n;
	printf (" Nhap n:");
	scanf ("%d",&n);
	printf("Tong cua cac giai thua tu 1 den %d la: %d", n, tongGiaiThua(n));
	

	return 0;
}
