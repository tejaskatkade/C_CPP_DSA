//Array of structure

#include<stdio.h>

struct player{

    char pName[10];
    int jerNo;
    float rev;

};
void main(){
    struct player obj1 = {"virat",18,980.5f};
    struct player obj2 = {"Messi",18,4580.5f};
    struct player obj3 = {"James",6,9500.5f};

    //int arr[10] ={1,2,3,4,5};

    struct player arr[3]={obj1,obj2,obj3}; //array of structure.

    for(int i=0; i<3; i++){

        printf("%s\n",arr[i].pName);
        printf("%d\n",arr[i].jerNo);
        printf("%f\n",arr[i].rev);
    }


}