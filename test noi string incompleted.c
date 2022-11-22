#include <stdio.h>
#include <string.h>
int main(){
char strA[50], strB[50], strC[50], strD[50];
int x = 0, z = 0;
printf("Nhap W = ");
gets(strA);
printf("Nhap S = ");
gets(strB);
printf("P = ");
scanf("%d", &x);
printf("Q = ");
scanf("%d", &z);
strncpy(strC, strA, x);
strC[x] = '\0';
strcat(strC, strB);
strcat(strC, strA + x);
z= z + strlen(strB);
strncpy(strD, strC, z);
strcat(strD, strB);
strcat(strD, strC + z);
printf("\nKet qua: %s", strD);
	return 0;
}
