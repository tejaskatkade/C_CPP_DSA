#include<stdio.h>
void main(){
    int x = 1;

    printf("Start the code\n");
    
    if(--x){
        printf("In first if block\n");
    }if(++x || x++ ){
        printf("In second if block\n");
    }

    printf("The value of x = %d\n",x);
    printf("End of the code");

}