//2.output is:

// Enter the number of rows: 4
//  1  2  3  4 
//  a  b  c  d
//  1  2  3  4
//  a  b  c  d



#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++)
    {
        int n=1;
        char ch='a';
        for(int j=1; j<=num; j++)
        {
            if(i%2==1)
            {
                printf(" %d ",n);
                n++;
                
            }
            else
            {
                printf(" %c ",ch);
                ch++;
                
            }
            
        }
        printf("\n");
    }
}