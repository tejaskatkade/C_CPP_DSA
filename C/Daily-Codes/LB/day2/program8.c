#include<stdio.h>
void main()
{
	int row;
	printf("Enter the row:\n");
	scanf("%d",&row);
	int num = row*row;
	for(int i= 0; i<row; i++){
		
		for(int j=0; j<row; j++)
		{	if(num%2==0){
				printf("  %d  ",num*num);
			 }else{
			 	printf("  %d  ",num);

			 }
			num--;
		}
		
		printf("\n");
	}
}
