//9
// Enter the no of row: 
// 3
//  2  5  10 
//  17  26  37
//  50  65  82


#include<stdio.h>
void main()
{
    int n=1;
    int row=1; 

    printf("Enter the no of row: \n");
    scanf("%d",&row);

    for(int i=1; i<=row; i++)
    {
        
        for(int j=1; j<=row; j++)
        {
            int num=(n*n)+1;
            printf(" %d ",num);
            n++;
        }
        printf("\n");
    }
}