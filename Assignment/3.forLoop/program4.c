//4.WAP to find the sum of numbers that are divisible by 5 in the given range

#include<stdio.h>
void main(){
    int sNum;
    int eNum;
    int i;
    int sum = 0;
    printf("Enter the start number\n");
    scanf("%d", &sNum);
    printf("Enter the end number\n");
    scanf("%d", &eNum);

    for (i = sNum; i <= eNum; i++)
    {
        if (i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("The sum is %d",sum);
}