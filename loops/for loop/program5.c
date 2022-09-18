//WAP that takes inputs of 5 subject marks and print the addition of the marks

#include<stdio.h>
void main(){
    int marks;
    int sum=0;

    for(int i=1; i<=5; i++){

        printf("Enter the marks of %d subject\n",i);
        scanf("%d",&marks);
        sum = sum + marks;
    }
    printf("The addition of marks of 5 subject is : %d",sum);
}