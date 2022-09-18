//OUTPUT IS 

// ABC
// DE
// F

#include<stdio.h>
void main()
{
    char ch = 'A';
    for(int i=3 ; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}


// #include<stdio.h>
// void main()
// {
//     char ch = 'A';
//     for(int i=1 ; i<=3; i++)
//     {
//         for(int j=3; j>=i; j--)
//         {
//             printf("%c",ch);
//             ch++;
//         }
//         printf("\n");
//     }
// }