//WAP TO MAKE AN ARRAY OF THE TABLE OF GIVEN NUMBER

#include<stdio.h>
void main()
{
    int num;
    int arr[10];

    printf("Enter the number \n");
    scanf("%d",&num);

    int count = num;
    for(int i=0; i<10; i++)
    {
        arr[i]=num;
        num=num+count;

        //printf("%d",arr[i]);
        //arr[i] = *(arr+i)

        printf(" %d ",*(arr+i));

        
    }
}