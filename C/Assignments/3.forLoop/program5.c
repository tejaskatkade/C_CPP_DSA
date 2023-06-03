//WAP to take number input and print all the factors of that numbers;

#include <stdio.h>
void main(){
    int num;

    printf("Enter the num\n");
    scanf("%d",&num);

    printf("The factors are: ");
    for(int i=1; i<=num; i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
    
    
}