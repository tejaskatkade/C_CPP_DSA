//WAP TO CHECK THAT IF NO. IS DIVISIBLE BY 4 ANS 5  OR NOT

#include<stdio.h>
void main()
{
    int size;
    printf("Enter array size:\n");
    scanf("%d",&size);
    int arr[size];

    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    


    int flag=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]%4==0 && arr[i]%5==0)
            flag=1;
    }
    if(flag==1)
        printf("Divisible by 4 and 5\n");
    else
        printf("not Divisible by 4 and 5\n");
    

}