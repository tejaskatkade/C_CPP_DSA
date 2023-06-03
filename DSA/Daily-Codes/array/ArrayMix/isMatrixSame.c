// is the matrix same

#include<stdio.h>

int isMatrixSame(int arr[][4],int arr1[][4]){
	

	for(int i=0; i<4; i++){
	
		for(int j=0; j<4; j++){
		
			
			if(arr1[i][j] != arr1[i][j])
				return -1;
		}
	}
	return 0;
}
void main(){

	int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
 	
	int arr1[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};



	printf(" %d \n",isMatrixSame(arr,arr1));
}
