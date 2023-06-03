//9.wap to calculate the square root of a number ranging from 100 to 300

#include<stdio.h>
#include<math.h>
void main(){
    int num1,num2;
    printf("Enter first and last number: \n");
    scanf("%d %d",&num1,&num2);

    for(int i = num1; i<=num2; i++){
        printf("The squre root of %d = %lf\n",i,sqrt(i));
    }
}
