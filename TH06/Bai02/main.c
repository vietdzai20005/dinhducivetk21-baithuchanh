#include <stdio.h>
#include <stdlib.h>

/*Bai 2. Dinh nghia kieu du lieu phan so. Hay viet cac ham:
	a. Nhap n phan so
	b. Tim phan so lon nhat trong n phan so nay
	c. Tinh tong cac phan so
	Viet ham chinh co su dung cac ham tren. */

typedef struct {
  int tu;
  int mau;
} PhanSo;

void nhapNphanSo(PhanSo ps[], int n) {
	int i;
  for (i = 0; i < n; i++) {
    printf("Nhap phan so thu %d: ", i + 1);
    scanf("%d/%d", &ps[i].tu, &ps[i].mau);
  }
}

PhanSo timPhanSoLonNhat(PhanSo ps[], int n) {
  PhanSo psMax = ps[0];
  	int i;
  for (i = 1; i < n; i++) {
    if (psMax.tu * ps[i].mau < ps[i].tu * psMax.mau) {
      psMax = ps[i];
    }
  }
  return psMax;
}

PhanSo tinhTongNphanSo(PhanSo ps[], int n) {
  PhanSo psTong;
  psTong.tu = 0;
  psTong.mau = 1;
  int i;
  for (i = 0; i < n; i++) {
    if (ps[i].mau != 0) {
      psTong.tu = psTong.tu * ps[i].mau + ps[i].tu;
      psTong.mau = psTong.mau * ps[i].mau;
    }
  }
  if (psTong.mau == 0) {
    printf("Khong the tinh tong cac phan so co mau so bang 0");
    exit(1);
  }
  return psTong;
}


int main(int argc, char *argv[]) {

  int n;
  printf("Nhap so luong phan tu: ");
  scanf("%d", &n);

  PhanSo ps[n];
  nhapNphanSo(ps, n);

  PhanSo psMax = timPhanSoLonNhat(ps, n);
  printf("Phan so lon nhat la: %d/%d\n", psMax.tu, psMax.mau);

  PhanSo psTong = tinhTongNphanSo(ps, n);
  printf("Tong cac phan so la: %d/%d\n", psTong.tu, psTong.mau);

  return 0;
}

