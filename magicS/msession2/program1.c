#include<stdio.h>
void main()
{
	int size;
	int flag;
	int arr[size];
	int search;
	
	printf("Enter the size of array\n");
	scanf("%d",&size);

	printf("Enter the array elements:\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&search);

	for(int i=0; i<size; i++){
		if(search==arr[i]){
			flag=1;
		}
	}
	if(flag==1){
		printf("Element Found\n");}
	else{
		printf("Element NOt found\n");
	}
}
