//Convert 2-D array into 1-d array

#include<stdio.h>
void main(){
	int r,c;
	printf("Enter the row and column\n");
	scanf("%d %d",&r,&c);
	int arr1[r][c];
	
	int s = r*c;
	
	int arr2[s];

	printf("Enter the array elements\n");
	int k=0;
	for(int i=0; i<r; i++){
	
		for(int j=0; j<c; j++){
		
			scanf("%d",&arr1[i][j]);
			arr2[k]=arr1[i][j];
			k++;
		}
	
	}
	for(int i=0; i<s; i++){
	
		printf(" %d ",arr2[i]);
	}


}
