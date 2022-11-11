#include<stdio.h>

void fun(int x, int y, int z){
    printf("Add = %d\n",x+y+z); //60
}

void main(){
    int x = 10;
    int y = 20;
    int z = 30;

    fun(x,y,z);
    //fun(x,y);  //error: too few arguments to function ‘fun’
}

//void fun(int x, int y, int z=50)  //error: expected ‘;’, ‘,’ or ‘)’ before ‘=’ token