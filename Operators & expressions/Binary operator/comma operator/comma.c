#include <stdio.h>
void main()

{

//    int x = 10,20,30;    // ERROR   identifier expeded
//    printf("%d\n",X);


    // int y = {10,20,30};  // warning: excess elements in scalar initializer
    // printf("%d\n",y);    //10

    int z = (10,20,30);
    printf("%d\n",z);       //30
    
}