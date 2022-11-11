#include<stdio.h>
void main()
{
	int row;
	printf("Enter the row:\n");
	scanf("%d",&row);

	int num= 1;
	for(int i= 0; i<row; i++){
	
		for(int j=0; j<row; j++)
		{
			printf("  %d  ",num);
			num=num+2;
		}
		num=num-2;
		
		printf("\n");
	}
}
