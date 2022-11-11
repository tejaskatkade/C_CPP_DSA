#include<stdio.h>
void main()
{

	int arr[7]={1,2,3,4,5,6,7};
	printf("Array elements are:\n");
	for(int i= 0; i<7; i++){
	
		printf(" %d ",*(arr+i));
	}
}
