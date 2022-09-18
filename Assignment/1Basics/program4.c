//4.WAP to print even no. to print even numbers 1-100

#include<stdio.h>
void main(){

    printf("Even numbers 1-100\n");
    

    
    for(int i=1;i<=100;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }


}