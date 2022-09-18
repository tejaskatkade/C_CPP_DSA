//wap that prints the squre of the odd number between given range;

#include <stdio.h>
void main(){
    int fn;
    int ln;

    printf("Enter the first number: \n");
    scanf("%d",&fn);

    printf("Enter the last number: \n");
    scanf("%d",&ln);

    for(int i=fn; i<= ln; i++){
        if(i%2==1){
            printf("The squre of %d is %d\n",i,i*i);
        }
        
    }
}