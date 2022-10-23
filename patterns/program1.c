//  *
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *
//  *  *
//  *

#include <stdio.h>
void main()
{
    int row;
    int col;
    printf("Enter the row:\n");
    scanf("%d",&row);

    for(int i=1; i<=2*row-1; i++){
        if(i<=row)  
            col=i;
        else
            col=2*row-i;
        for(int j=1; j<=col; j++)
            printf(" * ");
        
        printf("\n");

    }

}


// #include <stdio.h>
// void main()
// {
//     int row;
//     printf("Enter the row:\n");
//     scanf("%d",&row);

//     for(int i=1; i<=2*row-1; i++){
//         if(i<=row)
//         {
//             for(int j=1; j<=i; j++)
//             {
//                 printf(" * ");
//             }
        
//         }else{
//             for(int j=1; j<=2*row-i; j++)
//             {  
//                 printf(" * ");
//             }
//         }
//         printf("\n");

//     }

// }

