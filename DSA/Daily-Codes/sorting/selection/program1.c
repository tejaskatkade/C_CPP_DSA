// selection sort


#include<stdio.h>

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void selectionSort(int arr[], int end){
	
	int i, j, k;
	for(i =0; i<end; i++){
		k=i;
		for(j = i+1; j<=end; j++){
			if(arr[j]<arr[k])
				k=j;
		}
		swap(&arr[i],&arr[k]);
	}
}

void main(){

	int arr[7]={3,5,7,4,6,8,9};
	int end =6;
	selectionSort(arr,end);

	for(int i=0; i<7; i++){
		printf("%d\n",arr[i]);
	}
	printf("\n");
}
