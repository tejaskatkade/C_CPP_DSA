//out put is

//  a 
//  a  b
//  a  b  c

#include<stdio.h>
void main()
{
    

    for(int i=0; i<3; i++)
    {
        char ch = 'a';
        for(int j=0; j<=i; j++)
        {
            printf(" %c ",ch);
            ch++;
        }
        printf("\n");
    }
}