#include<stdio.h>
void main()
{
	int row;
	printf("Enter the row:\n");
	scanf("%d",&row);

	for(int i= 0; i<row; i++){
		int num=1;
		for(int j=0; j<row; j++)
		{
			printf("  %d  ",num+i);
			num++;
		}
		
		printf("\n");
	}
}
