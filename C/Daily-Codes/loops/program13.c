//  OUT PUT WILL BE

//  1  2  3 
//  1  2  3 
//  1  2  3 



#include<stdio.h>
void main(){

    int num= 1;

    for(int i=0; i<3; i++){
        int num= 1;
        for(int j=0; j<3; j++){
            printf(" %d ",num);
            num++;
        }
        
        printf("\n");
    }
}