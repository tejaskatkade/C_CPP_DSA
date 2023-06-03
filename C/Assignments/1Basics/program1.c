//1 .WAP to print first 10 capital alphabats

#include <stdio.h>
void main()
{   

    int n;
    printf("Enter alphabets count: \n");
    scanf("%d",&n);

    printf("First %d capital alphabates\n",n);
    for(char i=65; i<=(65+(n-1)); i++){
        printf("%c\n",i);
    }
} 