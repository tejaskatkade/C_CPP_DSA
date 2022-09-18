// WAP to print the count of no divisible by 5 between range

#include <stdio.h>
void main(){
    int x,y;
    int count = 0;

    printf("Enter the start num: \n");
    scanf("%d",&x);
    printf("Enter the end num: \n");
    scanf("%d",&y);
    for(int i = x ; i<=y; i++){
        if(i%5==0){
            count= count+1;
        }
    }
    printf("Total count of numbers divided by 5 betweem %d and %d is %d",x,y,count);
}