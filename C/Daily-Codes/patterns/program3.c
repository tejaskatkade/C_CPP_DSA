
//  _  _  _  *
//  _  _  *  *
//  _  *  *  *
//  *  *  *  *
#include <stdio.h>
void main()
{
    int row;
    printf("Enter the row:\n");
    scanf("%d",&row);

    for(int i=1; i<=row; i++)
    {
        
        for(int j=row; j>i; j--)
        {
            printf(" _ ");
        }
        for(int j=1; j<=i;j++)
        {  
            printf(" * ");
            
        }
        printf("\n");
    }
        

}

