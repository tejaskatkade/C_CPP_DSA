//  OUT PUT WILL BE

//  1  2  3 
//  4  5  6 
//  7  8  9 



#include<stdio.h>
void main(){

    int num= 1;

    for(int i=0; i<3; i++){
       
        for(int j=0; j<3; j++){
            printf(" %d ",num);
            num++;
        }
        
        printf("\n");
    }
}