//4

// Enter no. of rows: 3
//  I  H  G 
//  F  E  D
//  C  B  A

#include<stdio.h>
void main()
{
    int num;
    char ch;
    printf("Enter no. of rows: ");
    scanf("%d",&num);
    ch=64+(num*num);

    for(int i=1; i<=num; i++)
    {
        for(int j=1;j<=num; j++)
        {
            printf(" %c ",ch);
            ch--;
        }
        
        printf("\n");
    }
}