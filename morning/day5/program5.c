#include<stdio.h>
void main(){
	
	int row;
	

	printf("Enter the row\n");
	scanf("%d",&row);
	char ch = 97;
	
	for(int i=1; i<=row; i++)
	{	
		for(int j=1; j<i; j++)
		{
			printf("     ");
				
		}
		for(int k=row;k>=i;k--)	
		{
			if(k%2==0){
				printf("  %c  ",ch);
		
			}else{
				printf("  %c  ",ch-32);
			}
		ch++;
		}
		
		printf("\n");
	}
}
