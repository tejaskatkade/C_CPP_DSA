// wap to print the num in reverse order of the given range

#include <stdio.h>
void main()
{
    int fn;
    int ln;

    printf("Enter the bigger num\n");
    scanf("%d", &ln);
    printf("Enter the smaller num\n");
    scanf("%d", &fn);
    for (int i = ln; i >= fn; i--)
    {
        printf("%d\n", i);
    }
}