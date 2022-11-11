//Wap that accepts an array on length N from the user and calculate squres of all even elements and cubes of all odd elements from thatarray and replace the elements res. with the answer


#include<stdio.h>
void main(){
	int n;
	printf("Enter the length:\n");
	scanf("%d",&n);

	int arr[n];

	printf("Enter the array elements\n");

	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<n; i++){
		if(arr[i]%2==0){
			printf(" %d",arr[i]*arr[i]);
		}else{
			printf(" %d",arr[i]*arr[i]*arr[i]);
		}
	
	}
	printf("\n");
}
