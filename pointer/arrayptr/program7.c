#include<stdio.h>
void main()
{

	int arr[][3]={1,2,3,{4,5},{6}};
	int arr1[][3]={1,2,3,4,{5,6}};

	for(int i=0; i<3; i++)
	
	{
	
		for(int j=0; j<3; j++)
		{
		
			printf(" %d ",arr[i][j]);
		}
		printf("\n");	
	}
}
