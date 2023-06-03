#include<stdio.h>
void main(){
    int x =2;
    int y =3;
    int input;

    scanf("%d",&input);

    switch(input){
        case 5:
        printf("5");
        break;

        //Scase y: //error: case label does not reduce to an integer constant
        // we have to give constant value
        printf("3");
        break;

        case 3+1: // we can use like this. we can use operator
        printf("2+3");
        break;

        default:
        printf("In default\n");
    } 
}