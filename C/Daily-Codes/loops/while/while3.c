// Reverse the number 

#include<stdio.h>
void main(){
    int rev;
    
    int x = 123;
    while(x!=0){
        rev=x%10;
        printf("%d",rev);
        x=x/10;
    }

}