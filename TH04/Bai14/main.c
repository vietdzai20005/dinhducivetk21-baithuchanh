#include <stdio.h>
#include <stdlib.h>

/*bai 14 Viet ham tinh USCNL va ham tim BSCNN cua 2 so nguyen a,b*/

int findUSCNL (int a,int b){
	while (a!=b){
		if ( a > b )
			a= a - b;
		else ( b =  b - a);
	}
	return a;
}

int findBSCNN (int a,int b){
    int uscnl = findUSCNL(a, b);
    int bscnn = (a * b) / uscnl;
    return bscnn;
}
int main(int argc, char *argv[]) {
    int a, b;

    printf("Nhap hai so nguyen a va b: ");
    scanf("%d%d", &a, &b);

    printf("USCNL cua %d va %d la: %d\n", a, b, findUSCNL(a, b));
    printf("BSCNN cua %d va %d la: %d\n", a, b, findBSCNN(a, b));



	return 0;
}
