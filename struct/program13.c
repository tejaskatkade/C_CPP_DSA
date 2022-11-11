//Array of structure

#include<stdio.h>

struct player{

    char pName[10];
    int jerNo;
    float rev;

};
void main(){
    struct player obj1;
    struct player obj2 ;
    struct player obj3;

    //int arr[10] ={1,2,3,4,5};

    struct player arr[3]={obj1,obj2,obj3}; //array of structure.

    printf("Enter the player\n name:\n Jersey no:\n revenue:\n");
    for(int i=0; i<3; i++){

        gets(&arr[i].pName);
        scanf("%d\n",&arr[i].jerNo);
        scanf("%f\n",&arr[i].rev);
    }
    printf("players information:\n");
    for(int i=0; i<3; i++){

        printf("%s\n",arr[i].pName);
        printf("%d\n",arr[i].jerNo);
        printf("%f\n",arr[i].rev);
    }

}