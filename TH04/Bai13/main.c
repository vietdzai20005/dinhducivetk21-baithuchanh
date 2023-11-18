#include <stdio.h>
#include <stdlib.h>

/* Bai 13 Tuong tu bai 12, hay viet ham tinh chu vi, dien tich cua mot tam giac */


float tinhDienTich( float a,float b,float c);
float tinhChuVi( float a,float b,float c);


float tinhChuVi(float a, float b, float c) {
    return a + b + c;
}

float tinhDienTich(float a, float b, float c) {
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main(int argc, char *argv[]) {
	float a,b,c;

	printf ( " Nhap canh a cua mot tam giac : \n");
	scanf ("%f",&a);
	printf ( " Nhap canh b cua mot tam giac : \n");
	scanf ("%f",&b);
	printf ( " Nhap canh c cua mot tam giac : \n");
	scanf ("%f",&c);

	float chuVi=tinhChuVi(a,b,c);
	float dienTich=tinhDienTich(a,b,c);
  	printf("Chu vi cua tam giac la: %.2f \n", chuVi);
    printf("Dien tich cua tam giac la: %.2f \n", dienTich);
		
	return 0;
}
