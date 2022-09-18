#include<stdio.h>
void main(){
    char ch;

    printf("Enter the character\n");
    scanf("%c",&ch);

    switch(ch){

        default:
        printf("You entered wrong input..!\n");
        break;
        // we can write default at first but we havr to use break; 

        case 'a':  
        printf("ONE\n");
        break;

        case 'b':
        printf("TWO\n");
        break;

        case 'c':
        printf("THREE\n");
        break;

        case 'd':
        printf("FOUR\n");
        break;

        case 'e':
        printf("FIVE\n");
        

        
    }

}