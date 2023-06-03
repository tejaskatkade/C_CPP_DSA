// OUTPUT WILL BE:

// Enter the number of rows :
// 4
// Enter the number of column :
// 5

//  a  a  a  a  a 
//  a  a  a  a  a
//  a  a  a  a  a
//  a  a  a  a  a


#include<stdio.h>
void main(){

    int row , col;
    printf("Enter the number of rows :\n");
    scanf("%d",&row);

    printf("Enter the number of column :\n");
    scanf("%d",&col);

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            printf(" a ");

        }
        printf("\n");
    }
}
