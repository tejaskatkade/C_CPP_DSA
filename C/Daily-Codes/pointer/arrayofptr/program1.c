#include<stdio.h>
void main(){
    int x =10;
    int y =20;
    int z =30;

    int* arr[3] ={&x,&y,&z}; //24

    printf("%ld\n",sizeof(arr));

    printf("%p\n",arr[0]);
    printf("%p\n",arr[1]);
    printf("%p\n",arr[2]);

    printf("%d\n",*(arr[0]));  //10  
    printf("%d\n",*(arr[1]));  //20
    printf("%d\n",*(arr[2]));  //30
}  