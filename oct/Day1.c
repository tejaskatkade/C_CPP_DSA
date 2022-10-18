//WAP to print the maximum elemnt present in array;
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
        int max = arr[0];     
	for(int i=0; i<size; i++){

		if(max<arr[i]){
		
			max = arr[i];
		}
	}
	printf("The maximum num. is %d",max);
}
