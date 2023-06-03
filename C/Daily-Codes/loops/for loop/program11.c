//WAP to print the square of odd no. and cube of even no between given range

#include <stdio.h>
void main(){
    int num1, num2;
    int sqr, cube;
    
    printf("Enter the first no.\n");
    scanf("%d",&num1);
    printf("Enter the second no.\n");
    scanf("%d",&num2);

    for(int i=num1; i<= num2; i++){
        if(i%2==0){
            sqr=i*i;
            printf("%d\t",sqr);
        }else{
            cube=i*i*i;
            printf("%d\t",cube);
        }
    }
}