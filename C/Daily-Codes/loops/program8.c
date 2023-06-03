// OUTPUT WILL BE:

// Enter the value of n to print the 'a' n*n time :6
//  a  a  a  a  a  a 
//  a  a  a  a  a  a 
//  a  a  a  a  a  a 
//  a  a  a  a  a  a 
//  a  a  a  a  a  a
//  a  a  a  a  a  a

#include<stdio.h>
void main(){

    int num;
    printf("Enter the value of n to print the 'a' n*n time :");
    scanf("%d",&num);

    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            printf(" a ");

        }
        printf("\n");
    }
}
