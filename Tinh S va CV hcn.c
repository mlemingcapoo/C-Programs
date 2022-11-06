#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Bắt đầu
int main()
{
    //Tạo các biến integer
    int a, b;
    //Hiện chữ
    printf("Nhap chieu dai HCN: ");
    //Nhập biến 
    scanf("%d", &a);
    //Hiện chữ
    printf("Nhap chieu rong HCN: ");
    //Nhập biến 
    scanf("%d", &b);
    //Hiển thị kết quả
    printf("\nChu vi HCN la: %d\n", (a+b)*2);
    printf("Dien tich hcn la: %d\n", a*b);
    return 0;
}


