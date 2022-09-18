//4. OUTPUT IS

// Enter the number of rows: 3
//  A  B  C 
//  D  E  F
//  G  H  I

#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    char ch='A';
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num; j++)
        {
            printf(" %c ",ch);
            ch++;
        }
        printf("\n");
    }
}