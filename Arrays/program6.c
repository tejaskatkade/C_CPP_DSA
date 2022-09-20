// ???

#include<stdio.h>
void main()
{
    int iarr[5];
    printf("Enter the 5 numbers:\n");
    for(int i=0; i<=4; i++)
    {
        scanf("%d\n",&iarr[i]);
    }
    printf("5 numbers are:\n");
    for(int i=0; i<=4; i++)
    {
        printf("%d\n",iarr[i]);
    }
}