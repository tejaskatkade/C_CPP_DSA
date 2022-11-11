#include<stdio.h>
void main()
{
	int row;
	int num =1;
	printf("Enter the row:\n");
	scanf("%d",&row);

	for(int i=0; i<row; i++){
		for(int j=0; j<=i; j++ ){
			printf(" %d ",num);
			num++;
		}
		printf("\n");
	}
}
