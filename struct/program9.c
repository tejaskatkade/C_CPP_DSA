#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct IPL{

    char sName[20];
    int tTeams;
    double prize;

    };

void main(){

    struct IPL *ptr = (struct IPL *)malloc(sizeof(struct IPL));

    
    //strcpy(*ptr.sName,"Tata");//error
    strcpy((*ptr).sName,"Tata");

    // printf("Enter the total teams\n");
    // scanf("%d",&((*ptr).tTeams));

    (*ptr).tTeams=8;
    ptr->prize=54.8900;

    printf("%s\n",ptr->sName);
    printf("%d\n",ptr->tTeams);
    printf("%f\n",ptr->prize);

}