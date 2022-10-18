#include<stdio.h>
void main(){
	int num;
	printf("Enter the row\n");
	scanf("%d",&num);

	for(int i=0; i<num; i++)
	{	int n=num;
		for(int j=0; j<num; j++)
		{
			if(j>=num-(i+1))
			{
				printf("  *  ");
				
			}else{
				printf("     ");
			}
			n++;

		}
		printf("\n");
	}
}
