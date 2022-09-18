//WAP to print the odd numbers between given range

#include <stdio.h>
void main(){
    int startNum;
    int lastNum;

    printf("Enter the start number:\n");
    scanf("%d",&startNum);
    printf("Enter the end number:\n");
    scanf("%d",&lastNum); 

    for(int i=startNum; i<=lastNum;i++){
        if(i%2==1){
            printf("%d is odd\n",i);
        }
    }
}