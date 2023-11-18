#include <stdio.h>
#include <stdlib.h>

/* Bai 3. Dinh nghia kieu du lieu so phuc. Hay viet cac ham:
	a. Nhap 1 so phuc
	b. Tinh tong 2 so phuc
	c. Tinh tich hai so phuc
	Viet ham chinh co su dung cac ham tren. */

typedef struct {
    float a;
    float b;
} Complex;

void inputComplex(Complex *z) {
    printf("Nhap phan thuc cua so phuc: ");
    scanf("%f", &z->a);
    printf("Nhap phan ao cua so phuc: ");
    scanf("%f", &z->b);
}

Complex addComplex(Complex z1, Complex z2) {
    Complex z;
    z.a = z1.a + z2.a;
    z.b = z1.b + z2.b;
    return z;
}

Complex multiplyComplex(Complex z1, Complex z2) {
    Complex z;
    z.a = z1.a * z2.a - z1.b * z2.b;
    z.b = z1.a * z2.b + z1.b * z2.a;
    return z;
}

int main() {
    Complex z1, z2, z;

    // Nhap 2 so phuc
    inputComplex(&z1);
    inputComplex(&z2);

    // Tinh tong 2 so phuc
    z = addComplex(z1, z2);
    printf("Tong 2 so phuc: %.2f + %.2fi\n", z.a, z.b);

    // Tinh tich 2 so phuc
    z = multiplyComplex(z1, z2);
    printf("Tich 2 so phuc: %.2f + %.2fi\n", z.a, z.b);

    return 0;
}

