#include<stdio.h>
void main()
{
	int row;
	printf("Enter the row\n");
	scanf("%d",&row);
	
	char ch = row+64;
	for(int i=1; i<=row; i++)
	{	
		
		for(int j=1; j<i; j++)
		{
			printf("     ");
				
		}
		for(int k=i;k<=row;k++)	
		{
			if(i%2==1){
				printf("  %c  ",ch);
		
			}else{
				printf("  %c  ",ch+32);
			}
		
		}
		ch--;
		
		printf("\n");
	}
}
