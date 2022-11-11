#include<stdio.h>
void main(){
	int row;
	printf("Enter the row\n");
	scanf("%d",&row);
	int num=1;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=i;j++){
			int ans =1;
			for(int k=1; k<=i; k++){
				ans= ans*num;
			}
			printf("  %d  ",ans);
			num++;
		}
		printf("\n");
	}
	
	printf("Space Added\n");
	
	num=1;
	for(int i=1; i<=row; i++)
	{	
		for(int j=1; j<=row; j++)
		{
			if(j>row-(i))
			{	int ans=1;
				for(int k=1; k<=i; k++){
					ans=ans*num;
				}
				printf("  %d  ",ans);
				num++;		
			}else{
				printf("      ");
			}
		

		}
		printf("\n");
	}
}
