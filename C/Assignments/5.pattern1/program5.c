//5.output is:

// Enter the number of rows: 4
//  A  B  C  D 
//  B  C  D  E
//  C  D  E  F
//  D  E  F  G


#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);

    char ch = 'A';
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num; j++)
        {
            printf(" %c ",ch);
            ch++;
        }
        ch=ch-(num-1);
        printf("\n");
    }
}


//or

// #include<stdio.h>
// void main()
// {
//     int num;
//     printf("Enter the number of rows: ");
//     scanf("%d",&num);

    
//     for(int i=0; i<num; i++)
//     {
//         char ch = 'A';
//         for(int j=0; j<num; j++)
//         {
//             printf(" %c ",ch+i);
//             ch++;
//         }
        
//         printf("\n");
//     }
// }