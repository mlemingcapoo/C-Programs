#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//Khai báo biến string cho menu
char mn[]="	||	||\n		||	||\n	+===Menu Chuong Trinh===+";
char mn1[]="1.Tinh trung binh cong";
char mn2[]="2.Xac dinh so nguyen to";
char mn3[]="3.Tinh so chinh phuong";
char ln[]="+-----------------------+";
char cho[]="Nhap lua chon cua ban:";
char back[]="\n\nNhan phim bat ki de tro lai menu";
char in[]="Nhap";
char kp[]="khong phai";
char cp[]="la so chinh phuong";
char str1[]="la so nguyen to\n";
//Bắt đầu chương trình
int main(){
	start: ;
	fflush(stdin);
	int menu=0,end=0;
	//Tập lệnh kiểm tra xem người dùng có nhập lựa chọn "vớ vẩn" vào chương trình hay không, nếu có thì reset.
	do {
		int ch, n;
		system("cls");
		printf("	%s		\n	|%s |\n	|%s|\n	|%s |\n	|4.Exit 		|\n	%s\n	 %s ",mn,mn1,mn2,mn3,ln,cho);
    	n = scanf("%d", &menu);
   		while (n == 0) {
   			system("cls");
        	printf("	%s		\n	|%s |\n	|%s|\n	|%s |\n	|4.Exit 		|\n	%s\n	 %s ",mn,mn1,mn2,mn3,ln,cho);
        	do {
            	ch = getchar();
        	} while ((ch != EOF) && (ch != '\n'));
        	n = scanf("%d", &menu);
		}
    if (n == 1) {
        printf("%d\n", menu);
    } else { /*n == EOF*/
        fprintf(stderr, "Khong hop le, vui long khoi dong lai\n");
        return 404;
    }
	}
	while (menu<1||menu>4);
	
	//Bắt đầu chuyển menu khi đã thỏa mãn điều kiện menu=1 hoặc 2,3,4 và không phải là một string/char
	switch (menu) {
		case 1: {   
		//Chương trình số 1
			system("cls");
			float min=0, max=0;
			int i=min;
			float tong = 0, biendem = 0, trungbinh = 0;
			printf("\n		%s Max: ",in);
			scanf("%f", &max);
			printf("\n		%s Min: ",in);
			scanf("\n	%f", &min);
			while (i <= max) {
				if (i % 2 == 0) {
					tong += i;
					biendem++;
				}
				i++;
			}
			trungbinh = tong / biendem;
			printf("\n 	Trung binh tong cac so tu nhien \n       chia het cho 2 tu min den max: %.1f%s",trungbinh,back);
			getch();
			goto start;
		}
		case 2: {
			//Chương trình số 2
			system("cls");
			int x1,y,count=0;
			printf("\n\n	%s so: ",in);
			scanf("%d",&x1);
			for (y=2;y<x1;y++){
				if(x1%y==0){
					count++;
				}
			}
			if (x1<2){
				count++;
			}
			if (count==0){
				printf("     %d %s%s",x1,str1,back);
			} else printf("%d %s %s%s",x1,kp,str1,back);
			getch();
			goto start;
		}
		case 3: {
			//Chương trình số 3
			system("cls");
			int x2,z,c;
			printf("\n\n	%s x: ",in);
			scanf("%d",&x2);
			for (z=0;z<=x2;z++){
				if(z*z==x2) {
					printf("   %d %s\n%s",x2,cp,back); 
					getch(); 
					goto start;
				}
				else continue;
			}
			printf("%d %s %s\n%s",x2,kp,cp,back);
			getch();
			goto start;
		}
		case 4: {
		system("cls");
		printf("\n\n		Bye!\n");
		getch();
		return 404;
		}
		default: goto start;
	}

	return 0;
}
