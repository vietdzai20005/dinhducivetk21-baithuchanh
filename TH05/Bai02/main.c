#include <stdio.h>
#include <stdlib.h>

/* Bai 2. Can xay dung cac ham cho mot mang nguyen co n phan tu voi cac yeu cau sau:
	a. Ham nhap mang
	b. Ham xuat mang
	c. Ham tinh tong cac phan tu co gia tri chan
	d. Ham dem co bao nhieu phan tu co gia tri le tren mang
	Viet ham chinh co su dung tat ca cac ham tren */
	
void nhap_mang(int a[], int n) {
	int i;
  	for (i = 0; i < n; i++) {
    printf("Nhap phan tu thu %d: ", i + 1);
    scanf("%d", &a[i]);
  }
}

void xuat_mang(int a[], int n) {
	int i;
  	for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int tinh_tong_chan(int a[], int n) {
  int sum = 0;
  int i;
  for (i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      sum += a[i];
    }
  }
  return sum;
}

int main() {
  int n;
  printf("Nhap kich thuoc mang: ");
  scanf("%d", &n);

  int a[n];

  nhap_mang(a, n);

  xuat_mang(a, n);

  int sum = tinh_tong_chan(a, n);

  printf("Tong cac phan tu co gia tri chan la: %d\n", sum);
    return 0;
}
