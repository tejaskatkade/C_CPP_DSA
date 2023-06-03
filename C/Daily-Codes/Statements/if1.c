#include<stdio.h>
void main(){
    float income;
    printf("Enter your salary: ");
    scanf("%f",&income);
    if(income >=0 && income <= 500000){
        printf("Tax slab is 0%");
    }
    if(income >=500001 && income <= 1000000){
       printf("Tax slab is 10%"); 
    }
    if(income >=1000001 && income <= 1600000){
       printf("Tax slab is 15%"); 
    }
    if(income >=1600001 && income <= 2000000){
       printf("Tax slab is 20%"); 
    }
    
}