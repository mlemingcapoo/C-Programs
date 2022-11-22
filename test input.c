#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch, menu, n;

    n = scanf("%d", &menu);
    while (n == 0) {
        fprintf(stderr, "wrong input, integer expected\n");
        do {
            ch = getchar();
        } while ((ch != EOF) && (ch != '\n'));
        n = scanf("%d", &menu);
    }
    if (n == 1) {
        printf("%d\n", menu);
    } else { /*n == EOF*/
        fprintf(stderr, "reading input failed\n");
        exit(EXIT_FAILURE);
    }
    return 0;
}

/*					OR YOU CAN DO DIS
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
    } else { // n == EOF
        fprintf(stderr, "Khong hop le, vui long khoi dong lai\n");
        return 404;
    }
	}
	while (menu<1||menu>4);
	*/