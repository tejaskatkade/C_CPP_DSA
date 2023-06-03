#include<stdio.h>
void main()
{
    char ch1 = 'x';
    char ch2 = 'y';
    

    char *ptr = &ch1;

    printf("%p\n",ptr);
    printf("%c\n",*ptr);

    //printf("%p\n",(ptr+1.5)); //error: invalid operands to binary
    //printf("%c\n",*(ptr+1.5)); //error: invalid operands to binary

    printf("%p\n",(ptr+'A')); //address
    printf("%c\n",*(ptr+'A')); //Garbage value

   
}