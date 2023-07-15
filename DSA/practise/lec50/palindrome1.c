//madam

#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(char *temp1, char *temp2){

	if(temp1 > temp2)
		return true;

	if(*temp1 != *temp2)
		return false;

	return isPalindrome(temp1+1, temp2-1);
}
void main(){

	char str[] = {'m','a','d','b','a','m','\0'};
	char *temp1 = str;
	char *temp2 = str;

	while(*temp2 != '\0'){
	
		temp2++;
	}
	temp2--;
	bool ans = isPalindrome(temp1,temp2);
	if(ans == true){
		printf("Palindrome\n");
	}else{
	
		printf("Not palindrome\n");
	}


}
