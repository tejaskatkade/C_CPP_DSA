#include<stdio.h>
void main(){
    int x =10;
    char ch = 'A';
    double d= 20.85;

    void* arr[3] ={&x,&ch,&d}; //24

    

    printf("%d\n",arr[0]);  //0X101
    printf("%d\n",arr[1]);  //0X100
    printf("%d\n",arr[2]);  //0X105

    //dereferencing a void pointer

    printf("%d\n",*((int*)(arr))); //0X100

    printf("%d\n",*((int*)(arr[0]))); //10
    printf("%d\n",*((int*)(arr[0]))); //10
    printf("%d\n",*((int*)(arr[0]))); //10

}