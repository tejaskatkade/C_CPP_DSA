//space pattern

//  _  _  _ 
//  _  _ 
//  _ 

#include<stdio.h>
void main()
{
    for(int i =1; i<=3; i++)
    {
        for(int j =3; j>=i; j--)
        {
            printf(" _ ");

        }
        printf("\n");
    }
}