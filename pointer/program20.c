#include<stdio.h>
void main()
{
    int arr[]={10,20,30,40,50};

    int *ptr1 = &(arr[0]);  //0X100

    printf("%d\n",(*ptr1++)); //10
    printf("%d\n",(*ptr1++)); //20

    printf("%p\n",ptr1);  //0X108
}