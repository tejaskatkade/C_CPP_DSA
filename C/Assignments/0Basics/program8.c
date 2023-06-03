//program to find that letter is in uppercase or lowercase

#include <stdio.h>
void main(){
    char var;
    printf("Enter any character\n");
    scanf("%c",&var);
    printf("You entered %c\n",var);
    
    if(var >='A' && var <='Z' ){
        printf("You entered the UPPERCASE character\n ");
    }
    if(var>='a' && var<= 'z'){
        printf("You entered thelowercase character\n");
    }
}