//Quick sort
//Naive partition

#include<stdio.h>

int partition(int arr[], int start, int end){
	int temp[end-start+1];
	int index= start+0;
	int pivot = arr[end];
	for(int i=start; i<end; i++){
		if(arr[i]<pivot){
			temp[index++]= arr[i];
		}
	}
	int pos = index;
	temp[index++]=pivot;

	for(int i=start; i<end; i++){
		if(arr[i]>pivot){
			temp[index++]= arr[i];
		}
	}

	
	for(int i=start; i<=end; i++){
		
		arr[i]=temp[i];
		
	}

	return pos;



}

void quickSort(int arr[], int start, int end){
	if(start<end){
		int pos= partition(arr,start,end);
		quickSort(arr,start,pos-1);
		quickSort(arr,pos+1,end);
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
