#include <stdio.h>
#include <stdlib.h>

/*  Bai 6. Viet chuong trinh tinh tien dien gom cac khoang sau:
- Tien thue bao dien ke: 1000d/thang
- Dinh muc su dung dien cho moi ho la: 50 KW voi gia 230d/KW
- Neu phan vuot dinh muc <= 50KW thi tinh gia 480d/KW
- Neu 50KW < phan vuot dinh muc < 100KW thi tinh gia 700d/KW
- Neu phan vuot dinh muc <= 100KW thi tinh gia 900d/KW */

int main() {
  float sodien, tiendien, tienthuebao;

  printf("Nhap so dien tieu thu: ");
  scanf("%f", &sodien);

  tienthuebao = 1000;
 
  if (sodien <= 50) {
    tiendien = sodien * 230;
  } else {
   
    tiendien = 50 * 230;
    sodien -= 50;

    if (sodien <= 50) {
      tiendien += sodien * 480;
    } else if (sodien <= 100) {
      tiendien += 50 * 480 + (sodien - 50) * 700;
    } else {
      tiendien += 50 * 480 + 50 * 700 + (sodien - 100) * 900;
    }
  }

 
  printf("Tong tien dien la: %5.0f\n", tiendien + tienthuebao);

  return 0;
}

