#include <stdio.h>
#include <stdlib.h>

/* Bai 10. Viet ham kiem tra so nguyen x co phai la nguyen to khong? */

int isPrime(int x){
    if (x <= 1) 
        return 0;    
    int i;
    for ( i = 2; i * i <= x; i++) {
        if (x % i == 0) 
        return 0;
    }  return 1;
}

int main(int argc, char *argv[]) {

    int x;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &x);
    
    if (isPrime(x))
        printf("%d la so nguyen to.", x);
    else
        printf("%d khong phai la so nguyen to.", x);
    
  
	return 0;
}
