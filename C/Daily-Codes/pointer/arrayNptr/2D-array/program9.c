//Sum of all elements 2-D array

#include<stdio.h>
void main()
{

	int row,col;
	printf("Enter the row\n");
	scanf("%d",&row);
	printf("Enter the col\n");
	scanf("%d",&col);

	int arr[row][col];
	int sum=0;
	printf("Enter the array element\n");
	for(int i=0; i<row; i++){
	
		for(int j=0; j<col; j++){
		
			scanf("%d",&arr[i][j]);
			sum=sum+arr[i][j];
		}
	}
	printf("The array elements are:\n");
	for(int i=0; i<row; i++){
	
		for(int j=0; j<col; j++){
		
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}

	printf("The sum of array element is: %d\n",sum);
}
