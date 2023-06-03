//1.output is:

// Enter the number of rows: 5
//  1  2  3  4  5 
//  2  3  4  5  6
//  3  4  5  6  7
//  4  5  6  7  8
//  5  6  7  8  9

#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    int n=1;
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num; j++)
        {
            printf(" %d ",n);
            n++;
        }
        n=n-(num-1);
        printf("\n");
    }
}