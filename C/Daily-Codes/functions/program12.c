// CALL BY VALUE

#include<stdio.h>

void swap(int,int);

void main(){
    int x=10;
    int y=20;

    swap(x,y);

    printf("\n\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);

}

void swap(int x, int y){

    printf("x = %d\n",x);
    printf("y = %d\n",y);

    printf("\n");
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("x = %d\n",x);
    printf("y = %d\n",y);

    
}