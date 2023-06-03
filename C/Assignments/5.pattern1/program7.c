//7. OUTPUT IS

// Enter the number of rows: 4
//  1   2   9   4  
//  25   6   49   8
//  81   10   121   12
//  169   14   225   16


#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);

    int n =1;
    
    for(int i=1; i<=num; i++)
    {
        
        for(int j=1; j<=num; j++)
        {
            if(j%2==0)
            {
                printf("  %d  ",n);
                n++;
                
            }
            else
            {
                printf(" %d ",n*n);
                n++;
                
            }
            
        }
        printf("\n");
    }
}