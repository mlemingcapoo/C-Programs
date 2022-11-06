
#include <stdio.h>

int main(){
	float a,b;
	float kq;
	printf("Nhap so chia: ");
	scanf("%f", &a);
 	printf("\nNhap so bi chia: ");
	scanf("%f", &b);
	kq = a/b;
	printf("Ket Qua %.2f/%.2f =%5.2f",a,b,kq);
	return 0;
}