//  *  *  *  *  *  *  *
//  _  *  *  *  *  *
//  _  _  *  *  *
//  _  _  _  *

#include <stdio.h>
void main()
{
    int row;
    printf("Enter the row:\n");
    scanf("%d",&row);

    for(int i=1; i<=row; i++)
    {
        
        for(int j=1; j<i; j++)
        {
            printf(" _ ");
        }
        for(int j=1; j<=2*row-2*i+1;j++)
        {  
            printf(" * ");
            
        }
        printf("\n");
    }
        

}

