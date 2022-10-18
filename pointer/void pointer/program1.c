#include<stdio.h>
void main(){

    int x=48;
    int *iptr =&x;
    
    
    char *cptr =&ch;  //warning: initialization from incompatible pointer type
    char ch ='A';

    printf("%d\n",*iptr);
    printf("%d\n",*cptr);

    

    printf("%d\n",*iptr);
}