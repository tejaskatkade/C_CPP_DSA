 // comparing teo strings
 
#include<stdio.h>
#include<string.h>
void main(){

	char *str1 ="Tejas";
	char *str2 ="Tejas";

	int diff = strcmp(str1,str2);

	if(diff==0){
		printf("Strings are same\n");
	}else{
		printf("strings are not same\n");
	}
}
