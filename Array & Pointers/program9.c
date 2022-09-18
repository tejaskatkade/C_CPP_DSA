//WAP TO CHECK THAT IF ELEMENT IS PRESENT IN AN ARRAY OR NOT

#include<stdio.h>
void main()
{
    int size;
    printf("Enter array size:\n");
    scanf("%d",&size);
    int arr[size];

    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    
    int search;

    printf("Enter search element: \n");
    scanf("%d",&search);

    //WRONG TRY
    // for(int i=0; i<size; i++)
    // {
    //     if(search==arr[i])
    //     {
    //         printf("Element found\n");
    //     }
    //     else
    //     {
    //         printf("Element Not found\n");
    //     }
    // }

    int flag=0;
    for(int i=0; i<size; i++)
    {
        if(search==arr[i])
            flag=1;
    }
    if(flag==1)
        printf("Element Found\n");
    else
        printf("Element Not Found\n");
    

}