//pointer to a structure  OR structure pointer

#include<stdio.h>
#include<stdlib.h>
int x=5;
struct movie{
    char mName[20];
    int count;
    float price;
}obj1={"Tumbad",5, 1000.00};


void main(){
    int *ptr = &x;
    struct movie *sptr = &obj1;

    printf("%s\n",obj1.mName);
    printf("%d\n",obj1.count);
    printf("%f\n",obj1.price);
    printf("\n");

    printf("%d\n",*ptr);
    printf("%p\n",sptr);
    printf("\n");

    printf("%s\n",(*sptr).mName);
    printf("%s\n",sptr->mName);
    printf("%d\n",sptr->count);
    printf("%f\n",sptr->price);
}
