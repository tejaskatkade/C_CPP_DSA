#include<stdio.h>

void des(int *arr, int sz){

	for(int i=0; i<sz; i++){
		for(int j=i+1;j<sz; j++){
			if(arr[i]<arr[j]){
				int temp= arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0; i<sz; i++){
		printf("%d\t",arr[i]);
	}
}


	

void main(){
	int n;
	printf("Enter the length:\n");
	scanf("%d",&n);
	int arr[n];
	
	printf("Enter the digits:\n");

	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	des(arr,n);
	printf("\n");
	


}
