//WAP to merge two array 

#include<stdio.h>
void main()

{
	int size;
	printf("Enter the array size : \n");
	scanf("%d",&size);
	
	printf("Enter array elements:\n");
	int arr[size];
	
	for(int  i=0; i<size; i++){
	
		scanf("%d",&arr[i]);
	}	
	
	int size1;
	printf("Enter the array size : \n");
	scanf("%d",&size1);
	
	printf("Enter array elements:\n");
	int arr1[size1];

	int length = size + size1;

	for(int  i=0; i<size1; i++){
	
		scanf("%d",&arr1[i]);
	
	}

	
	printf("Array after merging two arrays\n");
	
	int arr2[length];

	for(int  i=0; i<size; i++){
	
		arr2[i]= arr[i];
	}

	for(int  i=size,j=0; i<length,j<size1; i++, j++){
	
		arr2[i]= arr1[j];
	}

	for(int  i=0; i<length; i++){
	
		printf("%d\n",arr2[i]);
   
	}
}
