//Function withe 1 input and one output

#include<stdio.h>
void fun();
void main(){

    fun(10);
    fun('A');

}

void fun(int x){
    printf("%d\n",x);

}

//output:
//10
//65