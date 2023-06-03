#include<stdio.h>
void main(){
	int row;
	printf("Enter the row\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++)
	{	int num=1;
		for(int j=1; j<=row; j++)
		{
			if(j>row-(i))
			{
				printf("  %d  ",num);
				num++;		
			}else{
				printf("     ");
			}
		

		}
		printf("\n");
	}
}
