//wap to print the countdown of days to submit the assignment

#include<stdio.h>
void main(){
    int days;
    printf("Enter the no of days\n");
    scanf("%d",&days);

    int i=days;

    while(i>=1){
        if(i==1)
        {
               printf("%d day remaining\n", i );
        }
        else
        {
            printf("%d days remaining\n", i );
        }
        i--;
    }
    printf("0 due dates\n");
}