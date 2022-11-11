//9.
//A  A  A
//B  B  B
//C  C  C

#include <stdio.h>
void main()
{

	int row;
	
	printf("Enter the rows:\n");
	scanf("%d",&row);

	char ch = 'A';

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		
		{
			printf("  %c  ",ch);
			
		}
		ch++;
		printf("\n");
	}
}

