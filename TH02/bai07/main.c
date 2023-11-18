#include <stdio.h>
#include <stdlib.h>

/* Bai 7. Viet chuong trinh tro choi oan tu ti sao cho nguoi choi luon thua may.
Huong dan: su dung lenh switch…case
	Khai bao: bien nguyen n
	Nhap DL: cho bien n (trong do n=1 tuong trung cai bua, 2 – bao, 3 – keo)
	Tinh toan va in an:
		switch(n)
			truong hop 1: 
				In ra man hinh: Vay may ra bao, thua nhe!!!
				break;
			truong hop 2: 
				In ra man hinh: Vay may ra keo, thua nhe!!!
				break;
			truong hop 3: 
				In ra man hinh: Vay may ra bua, thua nhe!!!
				break;
Ghi chu: Hay sua doi chuong trinh sao cho nguoi choi luon thang may. */

#include <stdio.h>

int main() {
  int n;
  printf("Nhap n trong do n = 1 tuong trung cai bua, 2 la bao, 3 la keo\n  ");
  printf("Ban la nguoi choi va ban chon la:");
  scanf("%d", &n);

  switch(n) {
    case 1:
      printf("Vay may ra bao, thua nhe!!!\n");
      break;
    case 2:
      printf("Vay may ra keo, thua nhe!!!\n");
      break;
    case 3:
      printf("Vay may ra bua, thua nhe!!!\n");
      break;
    default:
      printf("Loi nhap du lieu\n");
  }

  return 0;
}

