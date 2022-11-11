#include<stdio.h>

struct movie{
    char mName;
    int noOfTicket;
    float price;

}

fun(){
    struct movie obj3 = {"Vikram Veda",7,1250.50};

    printf("%s\n",obj3.mName);
    printf("%s\n",obj3.noOfTicket);
    printf("%f\n",obj3.price);

}
obj1={"Kantara",2,300.00};

void main(){
    struct movie obj2={"Drishyam2",2,450.50};
    fun();
    printf("%s\n",obj1.mName);
    printf("%d\n",obj1.noOfTicket);
    printf("%f\n",obj1.price);

    printf("\n");

    printf("%s\n",obj2.mName);
    printf("%d\n",obj2.noOfTicket);
    printf("%f\n",obj2.price);

    printf("\n");

    printf("%s\n",obj3.mName);
    printf("%d\n",obj3.noOfTicket);
    printf("%f\n",obj3.price);

    
}