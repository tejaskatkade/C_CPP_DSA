#include<stdio.h>
void main()

{
    int arr[5]={10,20,30,40,50};
    int x=10;
    char ch='A';

    printf("%d\n",x);  //10
    printf("%c\n",ch);  //A

    printf("%p\n",&x);  //0061FF08
    printf("%p\n",&ch);  //0061FF07

    printf("%p\n",arr);  //0061FF0C
    printf("%p\n",&arr); //0061FF0C
    
}