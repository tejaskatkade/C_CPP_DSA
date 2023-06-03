//10. write a program to print the reciprocal of given number

#include <stdio.h>
#include<math.h>
void main(){
    int num;
    printf("Enter the number :\n");
    scanf("%d",&num);

    printf("Reciprocal of %d is %lf",num,pow(num, -1));
}