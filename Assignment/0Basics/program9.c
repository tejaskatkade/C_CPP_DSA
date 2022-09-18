//program to find that letter is in uppercase or lowercase

#include <stdio.h>
void main(){
    int var;
    printf("Enter any number\n");
    scanf("%d",&var);
    
    
    if(var >=1){
        printf("%d is a positive number\n ",var);
    }
    if(var <= -1){
        printf("%d is a negative number\n",var);
    }
}