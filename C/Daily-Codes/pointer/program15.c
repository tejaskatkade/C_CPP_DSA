#include<stdio.h>
void main()
{
    char arr[]={'A','B','C','D'};

    char *ptr1 = &arr[2];
    char *ptr2 = &arr[3];

    printf("%c\n",*ptr1);  //C
    printf("%c\n",*(ptr1)); //C

    printf("%c\n",*ptr2);  //d

    printf("%c\n",*(ptr1+2)); //Garbage value
    printf("%c\n",*(ptr2+1)); //Garbage value
}