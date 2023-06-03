//WAP TO PRINT ADDITION OF 5  ELEMENTS


#include<stdio.h>
void main()
{
    int arr[5];
    int sum=0;

    printf("Enter 5 elements\n");

    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    printf("Sum of 5 number is:\n");
    for(int i=0; i<5; i++){
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
}