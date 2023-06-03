#include<stdio.h>
void main()
{
    char ch = 127;
    ch = ch+1;
    printf("%d\n",ch); //128  at compile time when we assign value to variable then it wrap ups (Range : -128 to 127)
}

// void main()
// {
//     char ch = 127;
//     printf("%d\n",ch+1); //128  At run time it adds value 
// }