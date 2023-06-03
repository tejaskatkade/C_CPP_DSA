//out put is

//  A 
//  C  E
//  G  I  K

#include<stdio.h>
void main()
{
    
    char ch = 'A';
    for(int i=0; i<3; i++)
    {
        
        for(int j=0; j<=i; j++)
        {
            printf(" %c ",ch);
            ch++;
            ch++;
        }
        printf("\n");
    }
}