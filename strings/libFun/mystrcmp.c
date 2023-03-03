 // comparing teo strings
 
#include<stdio.h>
int mystrcmp(char *str1, char *str2){
	while(*str1 != '\0'){
		if(*str1 == *str2){	
			str1++;
			str2++;
		}else{
			return (*str1-*str2);
		}
	}
	return 0;

}
void main(){

	char *str1 ="Tejas";
	char *str2 ="Sejas";

	int diff = mystrcmp(str1,str2);

	if(diff==0){
		printf("Strings are same\n");
	}else{
		printf("strings are not same\n");
	}
}
