#include<stdio.h>
void main(){
	int row;
	printf("Enter the row\n");
	scanf("%d",&row);
	int num =1;

	for(int i=1; i<=row; i++)
	{	
		for(int j=1; j<=row; j++)
		{
			if(j>row-(i))
			{
				printf("  %d  ",num);
				num=num+row;		
			}else{
				printf("     ");
			}
		

		}
		printf("\n");
	}
}
