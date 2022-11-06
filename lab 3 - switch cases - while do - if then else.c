// BÀI THỰC HÀNH 03 - SWITCH CASES.cpp : Phạm Văn Trung PP02786. Cam copy va paste :)

#define _CRT_SECURE_NO_WARNINGS // để ẩn những lỗi bảo mật của code "scanf" khi chạy chương trình qua C++

//Thư viện cần thiết
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Phục vụ cho câu lệnh delay(x) 
void delay(float number_of_seconds)
{
    int milli_seconds = 500 * number_of_seconds; 
    clock_t start_time = clock(); 
    while (clock() < start_time + milli_seconds);
}   
char am3[] = "Tr";

// Bắt đầu chương trình
int main()
{
startover: ;
    //Khai báo biến

    int exit = 0;
    float a=0;
    float a0=0;
    int list1 = 0;
    char am2[] = "Van";
    char am1[] = "Pham";
    //Xóa sạch màn hình
    system("cls");
    //In ra màn hình menu chương trình
    printf("\n    ===== Menu chuong trinh =====\nNhap so 1 den 3 de chon chuong trinh muon chay\n  1. Chuong trinh tinh hoc luc\n  2. Chuong trinh giai phuong trinh\n  3. Chuong trinh tinh tien dien hang thang\n  4. Exit                                        Four :)\n\nBam so va nhan Enter: "); char cop[] = "Cam copy va paste :)";
    exit = 0;
    //Nhập số thứ tự chương trình trong menu
    scanf("%d", &list1);

    //Cấu trúc lặp while-do để yêu cầu người dùng nhập lại nếu họ lựa chọn linh tinh
    while (list1!=1 && list1!=2 && list1!=3 && list1!=4 && list1 !=5) {
        printf("Vui long chon mot so hop le (Tu 1 den 4)\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nNeu thay thong bao nay xuat hien qua lau\nVui long khoi dong lai chuong trinh\nChi duoc nhap du lieu la so lieu (numbers)");
        //Chờ một khoảng thời gian
        delay(7);
        //Xóa sạch màn hình
        system("cls");
        exit = 1;
        //In ra màn hình menu chương trình
        printf("\n    ===== Menu chuong trinh =====\nNhap so 1 den 3 de chon chuong trinh muon chay\n  1. Chuong trinh tinh hoc luc\n  2. Chuong trinh giai phuong trinh\n  3. Chuong trinh tinh tien dien hang thang\n  4. Info & Exit\n                                        \nSo thu tu vua chon khong hop le\nVui long chon lai va nhan Enter: ");
        //Nhập số thứ tự chương trình trong menu
        scanf("%d", &list1);
    } 

    //Switch case của Menu chương trình
    switch (list1) {
    // Chương trình số 1
    case 1:
        // Bắt đầu chương trình số 1
        system("cls");
        printf("\n\nNhap diem cua sinh vien (0-10): ");
        scanf("%f", &a); 
        a0 = a;
        while (a!=0 && a != 1 && a != 2 && a != 3 && a != 4 && a != 5 && a != 6 && a != 7 && a != 8 && a != 9 && a != 10) {
            system("cls");
            printf("\nDiem chi trong khoang tu 0 -> 10\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nNeu thay thong bao nay xuat hien qua lau\nVui long khoi dong lai chuong trinh\nChi duoc nhap du lieu la so lieu (numbers)"); 
            delay(7);
            system("cls");
            printf("\n\nNhap lai diem cua sinh vien (0-10): ");
            scanf("%f", &a);
        }
        if (a < 3.5) {
            printf(".\nHoc luc KEM\n"); delay(7);
        }
        else if (a < 5) {
            printf(".\nHoc luc YEU\n"); delay(7);
        }
        else if (a < 6.5) {
            printf(".\nHoc luc TB\n"); delay(7);
        }
        else if (a < 8) {
            printf(".\nHoc luc KHA\n"); delay(7);
        }
        else if (a < 9) {
            printf(".\nHoc luc GIOI\n"); delay(7);
        }
        else if (a >= 9) {
            printf(".\nHoc luc XUAT SAC\n"); delay(7);
        }

        else delay(1);
        goto startover;

        //Bắt đầu chương trình số 2
    case 2: {
        int list2;
        system("cls");
        printf("\n\n  Giai phuong trinh\n 1. Phuong trinh bac 1\n 2. Phuong trinh bac 2\n 3. Quay lai menu\n\nBam so va nhan Enter: ");
        scanf("%d", &list2);
        while (list2 != 1 && list2 != 2 && list2 !=3) {
            printf("\nChuong trinh khong ho tro giai phuong trinh bac %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nNeu thay thong bao nay xuat hien qua lau\nVui long khoi dong lai chuong trinh\nChi duoc nhap du lieu la so lieu (numbers)",list2); 
            delay(7);
            system("cls");
            printf("\n\n  Giai phuong trinh\n 1. Phuong trinh bac 1\n 2. Phuong trinh bac 2\n 3. Quay lai menu\n\nVui long chon lai va nhan Enter: ");
            scanf("%d", &list2);
        }
        if (list2 == 3){
        	goto startover;
		}
        switch (list2) {

        case 1: {
            //Nhánh nhỏ số 1 của chương trình số 2
            system("cls");
            float a1, b1, x1;
            printf("\n\nGiai phuong trinh bac 1: Hay nhap a va b\nPhuong trinh co dang ax + b = 0\n");
            printf("Nhap a : ");
            scanf("%f", &a1);
            printf("Nhap b : ");
            scanf("%f", &b1);
            if (a1 == 0) {
                if (b1 == 0) {
                    printf("Phuong trinh co vo so nghiem\n"); delay(15); 
                    goto startover;
                }
                else if (b1 != 0) {
                    printf("Phuong trinh vo nghiem\n"); delay(15); 
                    goto startover;
                }
            }
            else {
                x1 = -b1 / a1;
                if (x1 == (int)x1) {
                    if (x1 == -0) {
                        printf("Phuong trinh co nghiem la: 0\n"); delay(15); 
                        goto startover;
                    }
                    else printf("Phuong trinh co nghiem la: %.0f\n", x1); delay(15); 
                    goto startover;
                }
                else {
                    printf("Phuong trinh co nghiem la: %.2f\n", x1);
                    //Chuyển đổi số thập phân qua phân số
                    double a2 = x1;
                    int c2 = 10000;
                    double b2 = (a2 - floor(a2)) * c2;
                    int d2 = (int)floor(a2) * c2 + (int)(b2 + .5f);
                    while (1) {
                        if (d2 % 10 == 0) {
                            d2 = d2 / 10;
                            c2 = c2 / 10;
                        }
                        else break;
                    } printf("Dang phan so (Chua toi gian): %d/%d\n", d2, c2);
                    delay(15);
                    goto startover;
                }
            }
            delay(1);
            goto startover;
        }

        case 2: {
            //Nhánh nhỏ thứ 2 của chương trình số 2
            float a3, b3, c3, x3, x32, delta;
            system("cls");
            printf("\n\nGiai phuong trinh bac 2: \nHay nhap a, b va c\nPhuong trinh co dang ax^2 + bx + c = 0\n");
            printf("Nhap a : ");
            scanf("%f", &a3);
            printf("Nhap b : ");
            scanf("%f", &b3);
            printf("Nhap c : ");
            scanf("%f", &c3);
            
                if (a3 == 0) {
                    system("cls");
                    printf("Pt co a = 0\nChuyen ve dang bx + c = 0\n\n\n");
                    if (b3 == 0) {
                        if (c3 == 0) {
                            printf("Phuong trinh co vo so nghiem\n"); delay(15); goto startover;
                        }
                        else if (c3 != 0) {
                            printf("Phuong trinh vo nghiem\n"); delay(15); goto startover;
                        }
                    }
                    else {
                        x3 = -c3 / b3;
                        if (x3 == (int)x3) {
                            if (x3 == -0) {
                                printf("Phuong trinh co nghiem la: 0\n"); delay(15); goto startover;
                            }
                            else printf("Phuong trinh co nghiem la: %.0f\n", x3); delay(15); goto startover;
                        }
                        else {
                            printf("Phuong trinh co nghiem la: %.2f\n", x3);
                            //Chuyển đổi số thập phân qua phân số
                            double a2 = x3;
                            int c2 = 10000;
                            double b2 = (a2 - floor(a2)) * c2;
                            int d2 = (int)floor(a2) * c2 + (int)(b2 + .5f);
                            while (1) {
                                if (d2 % 10 == 0) {
                                    d2 = d2 / 10;
                                    c2 = c2 / 10;
                                }
                                else break;
                            } printf("Dang phan so (Chua toi gian): %d/%d\n", d2, c2);
                            delay(15);
                            goto startover;
                        }
                    }
                }
            
            else if (a3 != 0) {
                delta = (b3 * b3) - (4 * a3 * c3);
                if (delta < 0) {
                    printf("\nPhuong trinh vo nghiem\nDelta = %.0f < 0\n", delta); delay(15);
                }
                else if (delta == 0) {
                    x3 = -b3 / (2 * a3);
                    if (x3 == (int)x3) {
                        if (x3 == -0) {
                            printf("Phuong trinh co nghiem kep = 0", x3); delay(15); goto startover;
                        }
                        else
                            printf("Phuong trinh co nghiem kep = %.0f", x3); delay(15); goto startover;
                    }
                    else printf("Phuong trinh co nghiem kep = %.2f", x3); delay(15); goto startover;

                }
                else if (delta > 0) {
                    x3 = (-b3 + sqrt(delta)) / (2 * a3);
                    x32 = (-b3 - sqrt(delta)) / (2 * a3);
                    printf("Phuong trinh co 2 nghiem phan biet:\n");
                    printf("X1 = ");
                    if (x3 == (int)x3) {
                        if (x3 == -0) {
                            printf("0", x3);
                        }
                        else
                            printf("%.0f", x3);
                    }
                    else printf("%.2f", x3);
                    printf("\nX2 = ");
                    if (x32 == (int)x32) {
                        if (x32 == -0) {
                            printf("0\n", x32); delay(15); goto startover;
                        }
                        else
                            printf("%.0f\n", x32); delay(15); goto startover;
                    }
                    else printf("%.2f\n", x32); delay(15); goto startover;
                }
            }
                goto startover;
        }
        default: system("cls");
            printf("Vui long chon mot so hop le (Tu 1 den 2)\n");
            delay(10);
            goto startover;
            // Nếu chọn sai sẽ trả về lỗi
        }}

    case 3: {
        // Chương trình số 3
        system("cls");
        float kwh,mn;
        long int moni,vat;
        int bac1 = 1678;
        int bac2 = 1734;
        int bac3 = 2014;
        int bac4 = 2536;
        int bac5 = 2834;
        int bac6 = 2927;
        printf("\n\n\n\nNhap so kWH dien tieu thu hang thang: ");
        scanf("%f", &kwh);
        while (kwh < 0) {
            printf("\n\nSo kWH khong duoc nho hon 0\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nNeu thay thong bao nay xuat hien qua lau\nVui long khoi dong lai chuong trinh\nChi duoc nhap du lieu la so lieu (numbers)");
            delay(7);
            system("cls");
            printf("\n\n\n\nVui long nhap lai so kWH dien tieu thu hang thang: ");
            scanf("%f", &kwh);
        } 
        while (kwh > 99999) {
            printf("\n\nSo kWH khong duoc qua lon\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nNeu thay thong bao nay xuat hien qua lau\nVui long khoi dong lai chuong trinh\nChi duoc nhap du lieu la so lieu (numbers)");
            delay(7);
            system("cls");
            printf("\n\n\n\nVui long nhap lai so kWH dien tieu thu hang thang: ");
            scanf("%f", &kwh);
        }
        
        if (kwh < 51) {
            moni = kwh * bac1;
            printf("So tien can phai dong: %ld VND\n", moni);
            vat = moni / 100 * 8;
            moni = moni + vat;
            printf("Da bao gom VAT (8%%): %ld VND\n", moni); delay(15); goto startover;
        }
        else if (kwh < 101) {
            mn = kwh - 50;
            moni = (50 * bac1) + (mn * bac2);
            printf("So tien can phai dong: %ld VND\n", moni);
            vat = moni / 100 * 8;
            moni = moni + vat;
            printf("Da bao gom VAT (8%%): %ld VND\n", moni); delay(15); goto startover;
        }
        else if (kwh < 201) {
            mn = kwh - 100;
            moni = (50 * bac1) + (50 * bac2) + (mn * bac3);
            printf("So tien can phai dong: %ld VND\n", moni);
            vat = moni / 100 * 8;
            moni = moni + vat;
            printf("Da bao gom VAT (8%%): %ld VND\n", moni); delay(15); goto startover;
        }
        else if (kwh < 301) {
            mn = kwh - 200;
            moni = (50 * bac1) + (50 * bac2) + (100 * bac3) + (mn * bac4);
            printf("So tien can phai dong: %ld VND\n", moni);
            vat = moni / 100 * 8;
            moni = moni + vat;
            printf("Da bao gom VAT (8%%): %ld VND\n", moni); delay(15); goto startover;
        }
        else if (kwh < 401) {
            mn = kwh - 300;
            moni = (50 * bac1) + (50 * bac2) + (100 * bac3) + (100 * bac4) + (mn * bac5);
            printf("So tien can phai dong: %ld VND\n", moni);
            vat = moni / 100 * 8;
            moni = moni + vat;
            printf("Da bao gom VAT (8%%): %ld VND\n", moni); delay(15); goto startover;
        }
        else {
            mn = kwh - 400;
            moni = (50 * bac1) + (50 * bac2) + (100 * bac3) + (100 * bac4) + (100 * bac5) + (mn * bac6);
            printf("So tien can phai dong: %ld VND\n", moni);
            vat = moni / 100 * 8;
            moni = moni + vat;
            printf("Da bao gom VAT (8%%): %ld VND\n", moni); delay(15); goto startover;
        }
        delay(10);
        goto startover;
    }

    case 4: {
        // =))))
        char mypr[] = "Chuong trinh hoan chinh dau tien cua toi :)";
        if (exit == 1) {
            int time;
            char am4[] = "ung";
            int lo;
            lo = 2000 + 700 + 80 + 6;
            printf("\n   Loading, Just wait :)\n");
            for (time = 0; time < 14; time++) {
                // we do a little trolling
                delay(0.5);
                printf("= ", time + 1);
            } printf("\n%s %s %s%s PP0%d\n%s\n", am1, am2, am3, am4, lo, mypr);
            break;
        }
        else if (exit == 0) {
            //lmao
            system("cls");
            printf("\n\n        Okay BYE!\n\n\n");
            char am4[] = "ung";
            int lo;
            lo = 2000 + 700 + 80 + 6;
            printf("\n%s %s %s%s PP0%d\n%s\n", am1, am2, am3, am4, lo, mypr);
            delay(10);
            printf("\n%s", cop);
            return 0;
        }
        else break;
    }
    case 5: {
        goto startover;
          }
    default: goto startover;
        // Bắt đầu lại chương trình
    }
    delay(10);
    printf("\n%s", cop);
    return 0;

}
