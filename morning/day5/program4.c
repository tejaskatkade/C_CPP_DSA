#include<stdio.h>
void main(){
	
	int row;
	

	printf("Enter the row\n");
	scanf("%d",&row);
	char ch = 96+row;
	
	for(int i=1; i<=row; i++)
	{	
		for(int j=1; j<i; j++)
		{
			printf("     ");
				
		}
		for(int k=row;k>=i;k--)	
		{
			printf("  %c  ",ch);
		
			
		}
		ch--;
		printf("\n");
	}
}
