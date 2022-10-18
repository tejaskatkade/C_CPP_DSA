//3.
//1  2  3  4
//5  6  7  8
//9 10  11  11


#include <stdio.h>
void main()
{

	int row;
	
	printf("Enter the rows:\n");
	scanf("%d",&row);

	int num=1;

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		
		{
			printf("  %d  ",num);
			num++;
		}
		printf("\n");
	}
}

