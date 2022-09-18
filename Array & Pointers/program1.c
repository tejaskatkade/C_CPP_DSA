#include<stdio.h>
void main(){
    int iarr[5]={10,20,30,40,50};
    printf("%d\n",iarr);  //6422284
    printf("%p\n",iarr);  //0061FF0C

    char carr[] = {'A','B','C'};
    printf("%d\n",carr);    //6422301
    printf("%c\n",carr[2]);  //c
    printf("%d\n",carr[2]);  //67

}