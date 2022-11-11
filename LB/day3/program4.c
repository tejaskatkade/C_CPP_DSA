#include<stdio.h>
void main()
{
	int row;

	printf("Enter the row:\n");
	scanf("%d",&row);
	
	
	for(int i=0; i<row; i++){
		int num = 1;
		for(int j=0; j<=i; j++ ){
			printf(" %d ",num);
			num++;	
		}
	
		printf("\n");
	}
}
