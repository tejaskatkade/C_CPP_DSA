//string compair ignore case.
#include<string.h>
#include<stdio.h>
int mystrcmpi(char * str1, char *str2){
	while(*str1 != '\0' ){
		if(*str1 == *str2 || *str1-*str2 ==  32 || *str1 - *str2 == -32){
			str1++;
			str2++;
		}else{
			return *str1 - *str2;
		}
	}
	return 0;

}

void main(){
	
	char *str1="Tejas";
	char *str2 ="Tejas";
	
	int diff = mystrcmpi(str1,str2);
	
	if(diff == 0){
		printf("Strings are same\n");
	
	}else{
		printf("Strings are Not same\n");
	}
}
