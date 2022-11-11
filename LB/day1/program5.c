//5.
//a  b  c  
//d  e  f
//g  h  i


#include <stdio.h>
void main()
{

	int row;
	
	printf("Enter the rows:\n");
	scanf("%d",&row);

	char ch='a';

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		
		{
			printf("  %c  ",ch);
			ch++;
		}
		printf("\n");
	}
}

