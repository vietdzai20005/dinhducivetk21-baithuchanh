#include <stdio.h>
#include <stdlib.h>

/* Bai 1. Nhap gia tri cho mang nguyen co n phan tu (n duoc nhap tu ban phim),
 sau do tinh tong cua cac phan tu co gia tri chan tren mang. */

int main(int argc, const char * argv[]) {
    
    int n;
     printf("Nhap kich thuoc mang: ");
     scanf("%d", &n);

     int a[n];
     int i;
     for (i= 0; i < n; i++) {
       printf("Nhap phan tu thu %d: ", i + 1);
       scanf("%d", &a[i]);
     }

     int sum = 0;
     for (i = 0; i < n; i++) {
       if (a[i] % 2 == 0) {
         sum += a[i];
       }
     }

     printf("Tong cac phan tu co gia tri chan la: %d\n", sum);

    return 0;
}
