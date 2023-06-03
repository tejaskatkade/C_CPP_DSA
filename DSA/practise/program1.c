#include<stdio.h>

void pair(int arr[],int size, int sum){

	for(int i=0; i<size; i++){
		
		for(int j=i+1; j<size; j++){
			if(arr[i]+arr[j] == sum){
				printf("%d , %d \n",arr[i],arr[j]);
			}
		}	
	}
}

void main(){
	int size;
	printf("Enter the size of an array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array elements\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	int sum;
	printf("Enter the sum to find the pairs\n");
	scanf("%d",&sum);
	pair(arr,size,sum);
}

