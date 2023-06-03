#include<stdio.h>
void main(){
    int num;
    char chr;
    float rs;
    double crMoney;

    printf("Enter the int: \n");
    scanf("%d",&num);

    printf("Enter the character\n");
    scanf(" %c",&chr);

    printf("Enter the float\n");
    scanf("%f",&rs);

    printf("Enter the double\n");
    scanf("%lf",&crMoney);

    printf("The value of the int is %d\n",num);
    printf("The value of the char is %c\n",chr);
    printf("The value of the float is %f\n",rs);
    printf("The value of the double is %lf\n",crMoney);

    printf("Size of the int = %lf\n",sizeof(int));
    printf("Size of the char = %lf\n",sizeof(char));
    printf("Size of the float = %lf\n",sizeof(float));
    printf("Size of the double= %lf\n",sizeof(double));
    
}