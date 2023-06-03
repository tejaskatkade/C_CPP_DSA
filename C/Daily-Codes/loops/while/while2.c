//WAP to print the no. divisible by 4 and 5

#include<stdio.h>
void main(){
    int start;
    int end;

    printf("Enter the first no.\n");
    scanf("%d",&start);
    printf("Enter the last no.\n");
    scanf("%d",&end);

    int i=start;
    while(i<=end){
        if(i%4==0 && i%5==0){
            printf("%d\n",i);
        }
        i++;
    }
}