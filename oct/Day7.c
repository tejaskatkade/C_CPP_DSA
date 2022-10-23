#include<stdio.h>
void main()
{
	int row,col;
	printf("Enter the row and column;\n");
	scanf("%d %d",&row,&col);
	
	int arr[row][col];

	printf("Enter the array elements\n");
	for(int i=0; i<row*col; i++)
	{
		scanf("%d",&(*(*arr+i)));
	}

	for(int i=0; i<row*col; i++)
	{
		printf("%d",*(*arr+i));
	}


}
