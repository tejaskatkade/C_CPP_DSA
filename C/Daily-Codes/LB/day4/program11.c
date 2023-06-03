#include<stdio.h>
void main()
{ 
	int row;
	printf("Enter the row\n");
	scanf("%d",&row);
	int num =1;
	for(int i=1; i<=row; i++){
		
		for(int j=row; j>=i; j--){
			printf("  %d  ",num);
			num++;
		}
		num=num-1;
		printf("\n");
	}
}
