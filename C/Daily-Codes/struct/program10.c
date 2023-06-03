#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct society{

    char sName[20];
    int wings; 
    float avgPrice;
};
void main(){
    struct society *ptr = (struct society *)malloc(sizeof(struct society));

    strcpy(ptr->sName,"sai");
    ptr->wings = 1;
    ptr->avgPrice = 10.300;


    printf("%s\n",ptr->sName);
    printf("%d\n",ptr->wings);
    printf("%f\n",ptr->avgPrice);
    
}
