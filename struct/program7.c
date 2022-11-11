#include<stdio.h>
struct ott{
    char pName[20];
    int accounts;
    float price;

};

void main()
{
    struct ott obj1 = {"Netflix", 5,599};

    struct ott obj2;

    printf("enter platform name:\n");
    gets(obj2.pName);

    printf("Enter accounts\n");
    scanf("%d",&obj2.accounts);

    printf("Enter price\n");
    scanf("%f",&obj2.price);

    printf("%s\n",obj2.pName);
    printf("%d\n",obj2.accounts);
    printf("%f\n",obj2.price);
}