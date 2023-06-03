//insertion

#include<stdio.h>
void insertion(int arr[],int size){
	for(int i=1; i<size; i++){
		int store= arr[i];
		int j;
		for(j=i-1; j>=0 && store < arr[j]; j--){
			arr[j+1] = arr[j];
		}
		arr[j+1]=store;
	}

}

void main(){
	int arr[]={1,4,5,2,3};

	insertion(arr,5);

	for(int i=0; i<5; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
