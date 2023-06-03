//concat strings

#include<stdio.h>
#include<string.h>

void main(){
	char str1[20]={'T','e','j','s','\0'};
	char *str2 = "Katkade";

	puts(str1);
	puts(str2);

	strcat(str1,str2);
	
	puts(str1);
	puts(str2);

}
