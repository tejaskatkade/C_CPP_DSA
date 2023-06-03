#include<stdio.h>
void main(){
    char ch;
    printf("Are you alive ? \n");
    printf("enter 'Y' or  'y' ");

    scanf("%c",&ch);

    if(ch=='Y'||ch=='y'){
        printf("User is alive");
    }else{
        printf("User died...!");
    }
}