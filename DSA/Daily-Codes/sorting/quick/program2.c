//Quick sort
//Hoare's partition (pivot element is the first element of array)

#include<stdio.h>

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int start,int end){
	int pivot = arr[start];
	int i = start-1;
	int j = end+1;

	while(1){
		
		do{
			i++;
		}while(arr[i] < pivot);

		do{
			j--;
		}while(arr[j] > pivot);
		
		if(i>=j){
			return j;
		}
		swap(&arr[i],&arr[j]);

	}
}

void quickSort(int arr[],int start, int end){

	if(start<end){	
		int position = partition(arr,start,end);
		quickSort(arr,start,position);
		quickSort(arr,position+1,end);

	}
}

void main(){

	int arr[7]={3,5,7,4,6,8,9};
	int start = 0;
	int end =6;
	quickSort(arr,start,end);

	for(int i=0; i<7; i++){
		printf("%d\n",arr[i]);
	}
	printf("\n");
}
