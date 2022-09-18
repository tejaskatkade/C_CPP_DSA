//WaP to print the character whose ascii is a multiple of 3

#include<stdio.h>
void main(){
    for(int i=0; i<=127;i++){
        if(i%2==0){
            printf("%c\n",i);
        }
    }
}