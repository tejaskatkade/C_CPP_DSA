#include<stdio.h>
void main()
{
	
	int row;
	
	printf("Enter the row:\n");
	scanf("%d",&row);
	char ch = 64+row;
	for(int i= 0; i<row; i++){
		for(int i=0; i<row; i++)
		{
			printf("  %c  ",ch);
			
		}
		ch--;
		printf("\n");
	}
}
