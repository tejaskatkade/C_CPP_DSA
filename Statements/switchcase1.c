#include<stdio.h>
void main(){
    char ch;

    printf("Enter the character\n");
    scanf("%c",&ch);

    switch(ch){
        case 'a':  // similar to = case 97:
        printf("ONE\n");
        break;

        case 'b':
        printf("TWO\n");
        break;

        case 99:
        printf("THREE\n");
        break;

        case 'd':
        printf("FOUR\n");
        break;

        case 'e':
        printf("FIVE\n");
        break;

        default:
        printf("You entered wrong input..!\n");
    }

}