#include <stdio.h>
#include <time.h>
int main(){
 short tuoi;
 printf("Nhap nam sinh cua ban: ");
 scanf("%hd", &tuoi);
 time_t t = time(NULL);
 struct tm tm = *localtime(&t);
 printf("Tuoi cua ban la: %d\n", tm.tm_year + 1900 - tuoi);
 return 0;
 }