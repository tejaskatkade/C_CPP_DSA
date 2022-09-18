//WAP to print the first 3 digit number

#include<stdio.h>
void main(){

    int n;
    printf("Enter count to print first 3 digit no\n");
    scanf("%d",&n);

    printf("First %d three digit Numbers\n",n);
    for(int i=100;i<=100+(n-1);i++){
        printf("%d\n",i);
    }


}