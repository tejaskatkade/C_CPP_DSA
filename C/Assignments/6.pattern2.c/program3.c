//3

// Enter no. of rows: 4
//  4  4  4  4 
//  3  3  3  3
//  2  2  2  2
//  1  1  1  1

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
            
        }
        x--;
        printf("\n");
    }
}