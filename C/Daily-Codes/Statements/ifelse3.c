#include<stdio.h>
void main(){
    double prop;
    printf("Enter your property\n");
    scanf("%lf",&prop);

    if(prop>=1000000000){
        printf("you are a billinior..");
    }else{
        printf("you are not yet billinior");
    }
}