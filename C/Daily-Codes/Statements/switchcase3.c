#include<stdio.h>
void main(){
    int x =2;
    int y =3;
    int input;

    switch(input){
        case 5:
        printf("5");
        break;

       // case 3+2: //error: duplicate case value
        printf("3+2");
        break;

      //  case 2+3: //error
        printf("2+3");
        break;

        default:
        printf("In default\n");
    } 
}