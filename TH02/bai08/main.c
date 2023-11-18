#include <stdio.h>
#include <stdlib.h>

/* Bai 8. Viet chuong trinh nhap vao 2 so x, y va 1 trong 4 toan tu +, -, *, /
Neu la + thi in ra ket qua x + y
Neu la – thi in ra ket qua x – y
Neu la * thi in ra ket qua x * y
Neu la / thi in ra ket qua x / y (neu y = 0 thi thong bao khong chia duoc) */

	int main() { int x, y; char op;

	printf("Nhap vao so x: "); scanf("%d", &x);

	printf("Nhap vao so y: "); scanf("%d", &y);

	printf("Nhap vao toan tu (+, -, *, /): "); scanf(" %c", &op);

	switch(op) {
 	case '+':
 	printf("Ket qua: %d ", x + y);
 		 break; 
	case '-': 
	printf("Ket qua: %d ", x - y); 
	break;
 	case '*': 
 	printf("Ket qua: %d ", x * y);
 	break;
  	case '/': 
  	if (y == 0) { 
 	printf("Khong chia duoc.\n");
   } else { 
   	printf("Ket qua: %d ", x / y); } 
	break;
	efault: 
	printf("Toan tu khong hop le.\n"); 
	break; }

return 0; }
