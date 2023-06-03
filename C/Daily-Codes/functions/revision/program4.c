//4

#include<stdio.h>
int printArr()
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
	return arr , arrsize;
}

void main()
{
	printf("The array elements are \n");
        printArr();

	for(int i=0; i<arrsize; i++){
		printf("%d\n",*(arr+i));
	
	}
}

