#include<stdio.h>
void main(){
    int x;

    printf("Enter the value between 1 to 5:\n");
    scanf("%d",&x);

    switch(x){
        case 1:
        printf("ONE\n");
        break;

        case 2:
        printf("TWO\n");
        break;

        case 3:
        printf("THREE\n");
        break;

        case 4:
        printf("FOUR\n");
        break;

        case 5:
        printf("FIVE\n");
        break;

        default:
        printf("You entered wrong input\nEnter the value between 1 to 5..!\n");
    }

}