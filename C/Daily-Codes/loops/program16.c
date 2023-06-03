//OUTPUT WILL BE;


//  1  4  9 
//  1  4  9 
//  1  4  9 



#include<stdio.h>
void main()
{
    for(int i=0; i<3; i++)
    {
         int num=1;
        for(int j=0; j<3; j++)
        {
            printf(" %d ",num*num);
            num++;
        }
        
        printf("\n");
    }
}