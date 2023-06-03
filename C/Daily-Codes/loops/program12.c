//  OUT PUT WILL BE

//  a  c  e 
//  g  i  k
//  m  o  q



#include<stdio.h>
void main(){

    char ch ='a';

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf(" %c ",ch);
            ch=ch+2;
            
        }
        
        printf("\n");
    }
}