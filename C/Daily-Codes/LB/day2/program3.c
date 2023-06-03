#include<stdio.h>
void main()
{
	int num=1;
	int row;
	printf("Enter the row:\n");
	scanf("%d",&row);

	for(int i= 0; i<row; i++){
		for(int i=0; i<row; i++)
		{
			printf("  %d  ",num);
			num=num+3;
		}
		printf("\n");
	}
}
