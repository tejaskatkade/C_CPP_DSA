//program to find that letter is in uppercase or lowercase

#include <stdio.h>
void main(){
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    printf("You entered %c\n",ch);
    
    if(ch >='A' && ch <='Z' ){
        printf("%c is in UPPERCASE\n ");
    }
    if(ch>='a' && ch<= 'z'){
        printf("%c is in lowercase\n");
    }
}