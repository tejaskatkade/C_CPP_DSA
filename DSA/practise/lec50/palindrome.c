// madam

#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(char str[]){
	char *temp = str;
	while( *temp != '\0'){
		temp++;
	}
	temp--;
	while(str < temp){
		if(*str != *temp){

			return false;
		}
		str++;
		temp--;
	}
	return true;

}

void main(){

	char str[20]={'m','a','b','a','a','m','\0'};
	bool ans = isPalindrome(str);
	if(ans == true)
		printf("Palindrome\n");
	else	
		printf("Not Palindrome\n");
} 
