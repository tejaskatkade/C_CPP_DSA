//void pointer:

#include<stdio.h>
void main(){

    int x=10;
    int *iptr =&x;

    void *vptr=&x;

    
    printf("%p\n",iptr);
    printf("%p\n",vptr);

    

    printf("%d\n",*iptr);
    //printf("%d\n",*vptr);   //warning(*vptr): dereferencing 'void *' pointer
                            //error(printf): invalid use of void expression

        //void pointer dereference is not allowed;

    printf("%d\n",*(int*)vptr);    //10
    printf("%d\n",*((int*)vptr));  //10
}