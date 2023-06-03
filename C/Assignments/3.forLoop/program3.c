// 3.WAP to print all even numbers in reverse order and odd numbers in the standard way. Both separately. Within a range.

#include <stdio.h>
void main()
{
    int sNum;
    int eNum;
    int i;
    printf("Enter the start number\n");
    scanf("%d", &sNum);
    printf("Enter the end number\n");
    scanf("%d", &eNum);

    for (i = sNum; i <= eNum; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");

    for (i = eNum; i >= sNum; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
}