//WAP to print the minimum elemnt present in array;
#include<stdio.h>
void main()

{
	int size;
	printf("Enter the array size: \n");
	scanf("%d",&size);
	
	printf("Enter array elements:\n");
	int arr[size];
	for(int  i=0; i<size; i++){
	
		scanf("%d",&arr[i]);
	
	}
        int min = arr[0];     
	for(int i=0; i<size; i++){

		if(min>arr[i]){
		
			min= arr[i];
		}
	}
	printf("The minimum ele. is %d",min);
}
