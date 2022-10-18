#include<stdio.h>
void main(){
	int num;
	printf("Enter the row\n");
	scanf("%d",&num);
	int n=1;
	for(int i=1; i<=num; i++)
	{	
		for(int j=1; j<i; j++)
		{
			printf("   ");

		}
		for(int k=num; k>=i;k--){
			printf(" %d ",n);
			n++;

		}
		printf("\n");
	}
}
