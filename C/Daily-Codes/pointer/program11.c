#include<stdio.h>
void main()
{
    int x =10;
    int y =20;

    int *ptr =&x;

    printf("%d\n",*ptr); //10
    printf("%d\n",*(ptr+1));//20 or Garbage value
}