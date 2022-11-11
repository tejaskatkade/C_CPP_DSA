#include<stdio.h>
void main()
{
	int row;

	printf("Enter the row:\n");
	scanf("%d",&row);
	
	int num =row;
	for(int i=1; i<=row; i++){
		
		for(int j=1; j<=i; j++ ){
			printf(" %d ",num);
			num=num+row;	
		}
	
		printf("\n");
	}
}
