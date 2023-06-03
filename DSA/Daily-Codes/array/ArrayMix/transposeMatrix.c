// transpose matrix 


#include<stdio.h>

void transposeMatrix(int arr[][3]){
	
	int arr1[3][3];
	for(int i=0; i<3;i++){
	
		for(int j=0; j<3; j++){
			printf(" %d ",arr[i][j]);
			arr1[j][i] = arr[i][j];
		} 
		printf("\n");
	}

	printf("\nThe transpose matrix is\n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++){
	
			printf(" %d ",arr1[i][j]);
		}	
		printf("\n");
	}
}
void main(){

	int arr[][3]={1,2,3,4,5,6,7,8,9};

	transposeMatrix(arr);
}
