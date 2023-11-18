#include <stdio.h>
#include <stdlib.h>

/* Bai 3. Can xay dung cac ham cho mot mang nguyen co n phan tu voi cac yeu cau sau:
	a. Ham nhap mang
	b. Ham kiem tra mang co phai la mang chua cac phan tu duong khong?
	c. Ham kiem tra mang co doi xung khong?
	d. Ham kiem tra mang co tao thanh day tang dan khong? */

void nhapmang(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

bool kiemtra_mang_duong(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			return false;
		}
	}

	return true;
}

bool kiemtra_mang_doixung(int a[], int n) {
	int n_du = n / 2;
	for (int i = 0; i < n_du; i++) {
		if (a[i] != a[n - 1 - i]) {
			return false;
		}
	}

	return true;
}

bool kiemtra_mang_tangdan(int a[], int n) {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			return false;
		}
		min = a[i];
	}

	return true;
}

bool kiemtra_mang_capsocong(int a[], int n) {
	int delta = a[1] - a[0];
	for (int i = 2; i < n; i++) {
		if (a[i] != a[i - 1] + delta) {
			return false;
		}
	}

	return true;
}

int main() {
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);

	int a[n];
	nhapmang(a, n);

	if (kiemtra_mang_duong(a, n)) {
		printf("Mang chua cac phan tu duong.\n");
	} else {
		printf("Mang khong chua cac phan tu duong.\n");
	}

	if (kiemtra_mang_doixung(a, n)) {
		printf("Mang doi xung.\n");
	} else {
		printf("Mang khong doi xung.\n");
	}

	if (kiemtra_mang_tangdan(a, n)) {
		printf("Mang tang dan.\n");
	} else {
		printf("Mang khong tang dan.\n");
	}

	if (kiemtra_mang_capsocong(a, n)) {
		printf("Mang cap so cong.\n");
	} else {
		printf("Mang khong cap so cong.\n");
	}

	return 0;
}

