// minor diagonal sum 

// You have given a N*N integer matrix
// you have to find the sum of all the minor digonal elements of matrix A.
// the main diagonal of a matrix A is a collection of elements A[i,j] such that i+j=M+1.
// Return an integer denoting the sum of minor diagonal elements


#include<stdio.h>

void diagonalSum(int arr[][3]){
	int sum=0;
	for(int i=0; i<3;i++){
	
		for(int j=0; j<3; j++){
		
			if(i+j == 2){
				sum = sum + arr[i][j]; 
			}

		} 
	}
	printf("sum = %d \n",sum);
}
void main(){

	int arr[][3]={1,2,3,4,5,6,7,8,9};

	diagonalSum(arr);
}
