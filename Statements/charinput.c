#include <stdio.h>
void main(){

    int ticket;
    char rowName;
    float rating;

    printf("Enter no of ticket:\n");
    scanf("%d",&ticket);

    printf("Enter row name:\n");
    scanf(" %c",&rowName); // space require before %c

    printf("Enter the rating:\n");
    scanf("%f",&rating);

    printf("No of ticket is %d\n",ticket);
    printf("Row name is %c\n",rowName);
    printf("The rating is %f\n",rating);



}