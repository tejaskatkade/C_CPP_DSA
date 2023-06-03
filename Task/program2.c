//Convert 3-D array into 1-d array

#include<stdio.h>
void main(){
	int p,r,c;
	printf("Enter the plane row and column\n");
	scanf("%d %d %d",&p,&r,&c);
	int arr1[p][r][c];
	
	int s = p*r*c;
	
	int arr2[s];

	printf("Enter the array elements\n");
	int l=0;
	for(int i=0; i<p; i++){
	
		for(int j=0; j<r; j++){
		
			for(int k=0; k<c; k++){
				scanf("%d",&arr1[i][j][k]);
		
				arr2[l]=arr1[i][j][k];
				l++;
			}
		}
	
	}
	for(int i=0; i<s; i++){
	
		printf(" %d ",arr2[i]);
	}


}
