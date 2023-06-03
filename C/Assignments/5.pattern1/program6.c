//6.output is:

// Enter the number of rows: 6
//  $  =  $  =  $  = 
//  $  =  $  =  $  =
//  $  =  $  =  $  =
//  $  =  $  =  $  =
//  $  =  $  =  $  =
//  $  =  $  =  $  =

#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++)
    {
        
        for(int j=1; j<=num; j++)
        {
            if(j%2==0)
            {
                printf(" = ");
                
            }
            else
            {
                printf(" $ ");
                
            }
            
        }
        printf("\n");
    }
}