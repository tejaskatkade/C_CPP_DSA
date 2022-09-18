//output is

//  _  _  _  _  A 
//  _  _  _  A  B 
//  _  _  A  B  C 
//  _  A  B  C  D 
//  A  B  C  D  E 

#include<stdio.h>
void main()
{
    
    for(int i=1; i<=5; i++)
    {
        char ch = 'A';
        for(int j=1; j<=5; j++)
        {
            if(j<=5-i)
            {
                printf(" _ ");

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