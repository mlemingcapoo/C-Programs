#include <stdio.h>
#include <string.h>

char str[]="ABCDEABCDEABCDE";
int i=0,y=0;
int main(){
 for (i=0;i<strlen(str);i++)
		{
		printf("%c",str[i]);
		y++;
		while (y>2) {
		printf("\n");
		y=0;
		}
	}
	return 0;
}