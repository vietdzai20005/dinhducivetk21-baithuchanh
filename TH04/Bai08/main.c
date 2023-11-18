#include <stdio.h>
#include <stdlib.h>

/* Bai 8. Viet ham tinh  1 + 1/x + 1/x2 + … + 1/xn */


float tinhTong(float x, int n) {
    float tong = 0;
    int i;
    for (i = 0; i <= n; i++) {
        tong += 1 / pow(x, i);
    }
    return tong;
}

int main(int argc, char *argv[]) {
    float x;
    int n;
    
    printf("Nhap gia tri cua x: ");
    scanf("%f", &x);
    
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);
    
    float tong = tinhTong(x, n);
    printf("Tong la: %f", tong);
    
	return 0;
}
