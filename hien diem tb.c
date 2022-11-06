
#include <stdio.h>
int main(){
float TB;
printf("Moi ban nhap diem trung binh: ");
scanf("%f", &TB);
if (TB>10) {
	printf("Diem khong hop le"); return 1;
} else if (TB<0) {
	printf("Diem khong hop le"); return 1;
} else
printf("\nDiem trung binh cua ban la: %.2f", TB);
return 0;
}
