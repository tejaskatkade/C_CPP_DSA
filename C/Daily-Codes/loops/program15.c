//OUTPUT WILL BE;

//  1  4  9 
//  16  25  36 
//  49  64  81 




#include<stdio.h>
void main()
{
    int num=1;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf(" %d ",num*num);
            num++;
            
        }
        printf("\n");
    }
}