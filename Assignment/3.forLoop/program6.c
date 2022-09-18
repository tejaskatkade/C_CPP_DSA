//6. WAP to calculate the factorial of the given program;

#include <stdio.h>
void main(){
    int num;
    int prod = 1;

    printf("Enter the num\n");
    scanf("%d",&num);

    printf("The factorial of %d is: ",num);
    for(int i=num; i>=1; i--){
        prod = prod*i;
    }
    printf("%d ",prod);
}