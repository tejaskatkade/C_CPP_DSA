#include<stdio.h>
void main()
{
	int row;

	printf("Enter the row:\n");
	scanf("%d",&row);
	
	int num = 1;
	for(int i=0; i<row; i++){
		
		for(int j=0; j<=i; j++ ){
			printf(" %d ",num);
			num=num+(i+1);	
		}
		num=num/(i+1);
	
		printf("\n");
	}
}
