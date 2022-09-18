//OUTPUT IS 

//  1  3  5 
//  7  9
//  11

#include<stdio.h>
void main(){
    int num=1;

    for(int i=1; i<=3; i++)
    {
        for(int j=3; j>=i; j--)
        {
            printf(" %d ",num);
            num++;
            num++;
        }
        printf("\n");
    }
}