//1

// Enter no. of rows: 4
//  4  3  2  1 
//  5  4  3  2
//  6  5  4  3
//  7  6  5  4

#include<stdio.h>
void main()
{
    int num;
    int x;
    printf("Enter no. of rows: ");
    scanf("%d",&num);
    x=num;
    for(int i=1; i<=num; i++)
    {
        for(int j=1;j<=num; j++)
        {
            printf(" %d ",x);
            x--;
        }
        x=x+num+1;
        printf("\n");
    }
}