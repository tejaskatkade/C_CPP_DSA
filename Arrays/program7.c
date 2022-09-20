//print array element of divisible 2

#include<stdio.h>
void main()
{
    int arr[5];

    printf("Enter 5 elements\n");

    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    printf("Numbers divisible by 2\n");
    for(int i=0; i<5; i++){
        if(arr[i]%2==0){
            printf("%d\n",arr[i]);
        }
    }
}