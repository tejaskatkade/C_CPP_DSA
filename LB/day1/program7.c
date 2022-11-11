//7.
//4  4  4  4
//3  3  3  3
//2  2  2  2
//1  1  1  1


#include <stdio.h>
void main()
{

	int row;
	
	printf("Enter the rows:\n");
	scanf("%d",&row);

	int num=row;

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		
		{
			printf("  %d  ",num);
			
		}
		num--;
		printf("\n");
	}
}

