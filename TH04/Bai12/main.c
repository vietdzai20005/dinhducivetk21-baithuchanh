#include <stdio.h>
#include <stdlib.h>

/* Bai 12. Viet ham tinh tong, hiru, tich, thuong cua 2 so nguyen */

int tinhTong(int a, int b) {
    return a + b;
}

int tinhHieu(int a, int b) {
    return a - b;
}

int tinhTich(int a, int b) {
    return a * b;
}

float tinhThuong(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    }
    else {
        printf("Loi: Khong the chia cho 0");
        return 0;
    }
}

int main(int argc, char *argv[]) {
	
    int a, b;
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);

    printf("Tong: %d\n", tinhTong(a, b));
    printf("Hieu: %d\n", tinhHieu(a, b));
    printf("Tich: %d\n", tinhTich(a, b));
    printf("Thuong: %.2f\n", tinhThuong(a, b));


	return 0;
}
