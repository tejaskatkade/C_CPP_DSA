//wap to print the character from i to l

// #include <stdio.h>
// void main(){
//     char i;
//     for(i='i';i<='l';i++){
//         printf("%c\n",i);
//     }
// }

#include<stdio.h>
void main(){
    char ch1;
    char ch2;

    printf("Enter the 1st character\n");
    scanf("%c",&ch1);
    printf("Enter the 2nd character\n");
    scanf(" %c",&ch2);

    for(char i= ch1; i<=ch2; i++){
        printf("%c\n",i);

    }
}