#include<stdio.h>
int x = 10;  // Global Variable


void fun()
{
    int x = 20;
    printf("IN FUN \n");
}

void main(){
    int y = 30;  //local variable
    printf("Start main\n");
    fun();
    printf("End main");
}
