#include<stdio.h>
void main(){
    int a;
    int b;

    printf("Enter first number: \n");
    scanf("%d",&a);

    printf("Enter second number: \n");
    scanf("%d",&b);

    printf("The smaller number is : ");
    if(a<b){
        printf("%d",a);
    }else{
        printf("%d",b);
    }
}