#include <stdio.h>
#include <stdlib.h>

/* Bai 1. Dinh nghia kieu du lieu phan so. Hay viet cac ham:
	a. Nhap 1 phan so
	b. Xuat 1 phan so
	c. Tinh tong 2 phan so
	d. Tinh tich hai phan so
	Viet ham chinh co su dung cac ham tren. */
typedef struct {
  int tu;
  int mau;
} PhanSo;

void nhapPhanSo(PhanSo *ps) {
  printf("Nhap tu: ");
  scanf("%d", &ps->tu);
  printf("Nhap mau: ");
  scanf("%d", &ps->mau);
}
void xuatPhanSo(PhanSo ps) {
  printf("%d/%d", ps.tu, ps.mau);
}
PhanSo tongPhanSo(PhanSo ps1, PhanSo ps2) {
  PhanSo ps;
  ps.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
  ps.mau = ps1.mau * ps2.mau;
  return ps;
}
PhanSo tichPhanSo(PhanSo ps1, PhanSo ps2) {
  PhanSo ps;
  ps.tu = ps1.tu * ps2.tu;
  ps.mau = ps1.mau * ps2.mau;
  return ps;
}
int main(int argc, char *argv[]) {

  PhanSo ps1, ps2;
  nhapPhanSo(&ps1);
  nhapPhanSo(&ps2);

  PhanSo psTong = tongPhanSo(ps1, ps2);
  PhanSo psTich = tichPhanSo(ps1, ps2);

  printf("Tong cua hai phan so la : ");
  xuatPhanSo(psTong);
  printf("\n");
  printf("Tich cua hai phan so la: ");
  xuatPhanSo(psTich);
  printf("\n");

	return 0;
}
