#include<stdio.h>
void main()
{
    int num;

    printf("Enter num\n");
    scanf("%d",&num);
    if(num%3==0){
        printf("The %d is multiple of 3",num);
    }else{
        printf("The %d is not multiple of 3",num);
    }
}