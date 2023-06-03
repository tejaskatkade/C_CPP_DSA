#include<stdio.h>
void main()
{
    for(int i=1, j=10; i<11,j>0; i++, j-- )
    {
        printf("%d + %d = %d\n",i,j,i+j);
    }
}