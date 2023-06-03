//3

#include<stdio.h>

void printArr(int *arr, int arrsize)
{
	printf("The array elements are \n"); 
	for(int i=0; i<arrsize; i++){
		printf("%d\n",*(arr+i));
	
	}
	
}
int main()
{
	printf("In main\n");
	int size;
	printf("Enter the size: \n");
	scanf("%d",&size);
	
	printf("Enter the array element:\n");
	int arr[size];
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	int arrsize = sizeof(arr)/sizeof(int);
	printArr(arr , arrsize);
}


