// strrev : There is no library function named strrev

#include<stdio.h>

char * mystrrev(char *str){
	char *temp = str;
	while(*temp != '\0'){
		temp++;
	}
	temp--;
	while(str < temp){
		char c = *str;
		*str = *temp;
		*temp = c;
		str++;
		temp--;
	}
}
void main(){
	//char * str = "Tejas Katkade";
	char str[]={'T','e','j','a','s',' ','K','a','t','k','a','d','e','\0'};
	puts(str);

	mystrrev(str);

	puts(str);
}
