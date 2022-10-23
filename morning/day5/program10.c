#include<stdio.h>
void main(){

	int row;
	printf("Enter the row\n");
	scanf("%d",&row);

	int num=row*row-((row*(row-1))/2);
	for(int i=1; i<=row; i++)
	{	
		for(int j=1; j<i; j++)
		{
			printf("     ");
				
		}
		for(int k=i;k<=row;k++)	
		{
			if(i%2==1&&k%2==1)
				printf("  %d  ",num*num);
			if(i%2==0&&i)
			printf("  %d  ",num);
			num--;
		}
		
		printf("\n");
	}
}
