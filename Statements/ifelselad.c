#include <stdio.h>
void main()
{

    float pMoney;

    printf("Enter your pocker Money \n");
    scanf("%f", &pMoney);

    if (pMoney >= 2000)
    {
        printf("CO2");
    }
    else if (pMoney >= 1500)
    {
        printf("Happypola");
    }
    else if (pMoney >= 1000)
    {
        printf("sarovar");
    }
    else if (pMoney >= 500)
    {
        printf("Vaishali");
    }
    else
    {
        printf("Geetanjali Mess ");
    }
}