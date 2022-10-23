#include<stdio.h>
void main(){

	int row;
	printf("Enter the row\n");
	scanf("%d",&row);

	int num=row;
	for(int i=1; i<=row; i++)
	{	
		for(int j=1; j<i; j++)
		{
			printf("     ");
				
		}
		for(int k=i;k<=row;k++)	
		{
			printf("  %d  ",num);
			num--;
		}
		num=num+(row-i);
		printf("\n");
	}
}
