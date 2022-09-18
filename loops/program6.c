#include<stdio.h>
void main(){
    int i,j;
    for( i=1, j=10; i<=j; ++i, --j)
    {
        printf(" %d ",i);
        printf(" %d ",j);
    }
}