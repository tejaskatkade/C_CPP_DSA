//  _  _  _  *
//  _  _  *  *
//  _  *  *  *
//  *  *  *  *
//  _  *  *  *
//  _  _  *  *
//  _  _  _  *

#include <stdio.h>
void main()
{
    int row,space,col;
    printf("Enter the row:\n");
    scanf("%d",&row);

    for(int i=1; i<2*row; i++)
    {
        if(i<=row)  
            space=row-i;
        else
            space=i-row;
        for(int j=1; j<=space; j++)
        {
            printf(" _ ");
        }
        if(i<=row)  
            col=i;
        else
            col=2*row-i;
        for(int j=1; j<=col;j++)
        {  
            printf(" * ");
            
        }
        printf("\n");
    }
        

}

