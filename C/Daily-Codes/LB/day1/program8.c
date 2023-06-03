//8.
//9  8  7
//6  5  4
//3  2  1


#include <stdio.h>
void main()
{

	int row;
	
	printf("Enter the rows:\n");
	scanf("%d",&row);

	int num=row*row;

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		
		{
			printf("  %d  ",num);
			num--;	
		}
		printf("\n");
	}
}

