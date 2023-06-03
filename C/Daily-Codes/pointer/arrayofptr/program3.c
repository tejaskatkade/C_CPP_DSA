#include<stdio.h>
void main(){
    char arr1[3]={'A','B','C'};
    char arr2[3]={'D','E','F'};
    char arr3[3]={'G','H','I'};

    char* cparr[3]={arr1,arr2,arr3};

    printf("%ld\n",sizeof(cparr)); //24

    printf("%C\n",*(cparr));
    printf("%C\n",*(cparr[0]));//A
    printf("%C\n",*(cparr[1]));//D
    printf("%C\n",*(cparr[2]));//G

    cparr[0] = arr1+1;
    cparr[1] = arr2+2;
    cparr[2] = arr3;

    printf("%C\n",*(cparr));
    //printf("%p\n",cparr);
    printf("%C\n",*(cparr[0])); //B
    printf("%C\n",*(cparr[1])); //F
    printf("%C\n",*(cparr[2])); //G
}