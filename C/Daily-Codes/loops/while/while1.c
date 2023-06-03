//WAP to print the no. divisible by 4 and 5

#include<stdio.h>
void main(){
    int i=1;
    while(i<=100){
        if(i%4==0 && i%5==0){
            printf("%d\n",i);
        }
        i++;
    }
}