//print the table of given no 
#include<stdio.h>
void main(){
    int x;
    printf("Enter the num : ");
    scanf("%d",&x);

    int num =1;
    while(num<=10){
        printf("%d\n",num*x);
        num++;
    }
}