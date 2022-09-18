//1


#include<stdio.h>
void main()
{
    int num;
    char ch1, ch2;
    printf("Enter no. of rows: ");
    scanf("%d",&num);
    ch1=64+num;
    ch2=96+num+1;

    // printf(" %c ",ch1);
    // printf(" %c ",ch2);
    for(int i=1; i<=num; i++)
    {
        for(int j=1;j<=num; j++)
        {
            if(i%2==1)
            {
                printf(" %c ",ch1);
                ch1--;

            }
            else
            {
                
                printf(" %c ",ch2);
                ch2--;
                
            }
        }
        ch1=num+1;
        ch2=num+1;
        printf("\n");
    }
}