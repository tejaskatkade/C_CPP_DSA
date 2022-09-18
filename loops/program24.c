
//output is 
//  _  _  _  * 
//  _  _  *  * 
//  _  *  *  *
//  *  *  *  *

// #include<stdio.h>
// void main()
// {
//     for(int i =1; i<=4; i++)
//     {
//          for(int sp =3; sp>=i; sp--)
//         {
//             printf(" _ ");

//         }
//         for(int j =1; j<=i; j++)
//         {
//             printf(" * ");

//         }
//         printf("\n");
//     }
// }


#include<stdio.h>
void main()
{
    for(int i = 1; i<=4; i++)
    {
        for(int j = 1;j<=4; j++)
        {
            if(j<= 4 - i)
            {
                printf(" _ ");
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
}