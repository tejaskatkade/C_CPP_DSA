
#include<stdio.h>

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void bubbleSort(int arr[], int end){
	
	for(int i=0; i<end; i++){
		for(int j=0; j<end-i; j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}

}

void main(){

	int arr[7]={3,5,7,4,6,8,9};
	int start = 0;
	int end =6;
	bubbleSort(arr,end);

	for(int i=0; i<7; i++){
		printf("%d\n",arr[i]);
	}
}
