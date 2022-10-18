#include<stdio.h>
void main()
{
	int row;

	printf("Enter the row:\n");
	scanf("%d",&row);
	
	int num= row*(row+1)/2;	
	
	for(int i=0; i<row; i++){
		
		for(int j=0; j<=i; j++ ){
		if(i%2==0){
			printf(" %d ",num);
		}else{
			printf(" %c ",num+64);
		}
			num--;	
		}
	
		printf("\n");
	}
}
