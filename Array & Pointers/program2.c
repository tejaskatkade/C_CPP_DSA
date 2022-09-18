#include<stdio.h>
void main(){
    int iarr[5]={10,20,30,40,50};
    int x =10;
    char ch = 'A';

    printf("%d\n",x);   //10
    printf("%c\n",ch);  //A

    printf("%p\n",x);   //0000000A
    printf("%p\n",ch);  //00000041

    printf("%p\n",iarr);  //0061FF04
    printf("%p\n",&iarr); //0061FF04

    printf("%d\n",iarr); //6422276
}