#include<stdio.h>
void main(){

    const int x = 10;
    printf("%d\n",x);
    //x=30;    error: assignment of read-only variable 'x'
    printf("%d\n",x);
}