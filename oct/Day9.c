#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of an array\n");
	scanf("%d",&size);

	int arr[size];
	 printf("enter the array element\n");

	for(int i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	

	int j;
	for(int i=0;arr+i<arr+(size-1);i++){
		j=arr[size-1];
		arr[size-1]=arr[i];
		arr[i]=j;

		&(arr[i])++;
		&(arr{size-10])--;
	     }
	for(int i=0; i<size; i++){
		printf("%d",arr[i]);
	}
}
