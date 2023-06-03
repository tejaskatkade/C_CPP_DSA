// Row sum

// Given a 2D array integer matrix and return a 1 D array containing row-wise sums of the original matrix.
// Return the array cotaining row-wise sums of the original matrix.


#include<stdio.h>

void columnSum(int arr[][4]){
	
	int arr1[4]={0}; 

	for(int i=0; i<4; i++){
	
		for(int j=0; j<4; j++){
		
			
			arr1[i]=arr1[i]+arr[i][j];
				
		}
	}
	for(int i=0; i<4; i++){
	
		printf("%d  ",arr1[i]);

	}
	printf("\n");
}
void main(){

	int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	
	columnSum(arr);
}
