//  wap that accepts 2 strings from the user and concat the string and print the concated string use mystrcat().

#include<stdio.h>
void mystrcat(char *arr1,char *arr2){
	
	while(*arr1 != '\0'){
		arr1++;
	}
	while(*arr2 != '\0'){
		*arr1=*arr2;
		arr++;
		arr2++;	
	}

	
}
void main(){
	char src[100];
	char desr[100];

	printf("Enter string\n");
	gets(src);

}
