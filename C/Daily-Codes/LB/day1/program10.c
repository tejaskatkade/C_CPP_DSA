//10
//1   3   5   
//7   9   11
//13  15  17 


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
			 
			num=num+2;	
		}
		
		printf("\n");
	}
}

