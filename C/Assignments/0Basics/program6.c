#include<stdio.h>
void main(){
    int var;
    printf("Enter the number\n");
    scanf("%d",&var);
    
    if(var%2==0){
        printf("%d is an even number\n ",var);
    }else{
        printf("%d is an odd number\n ",var);
    }
    
}