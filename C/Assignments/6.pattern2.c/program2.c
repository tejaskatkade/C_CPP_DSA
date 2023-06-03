//2.
// Enter no. of rows: 4
//  3  2  1 
//  c  b  a
//  3  2  1
//  c  b  a


#include<stdio.h>
void main()
{
    int num;
    int x;
    char ch;
    printf("Enter no. of rows: ");
    scanf("%d",&num);
   
    for(int i=1; i<=num; i++)
    {
        x=num-1;
        ch=95+num;
        for(int j=1;j<=num-1; j++)
        {
            if(i%2==1)
            {
                printf(" %d ",x);
                x--;
            }
            else
            {    
                printf(" %c ",ch);
                ch--;
            }
        }
        printf("\n");
    }
}