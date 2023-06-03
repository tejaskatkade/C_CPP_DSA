#include<stdio.h>
void main()
{ 
	int row;
	
	printf("Enter the row\n");
	scanf("%d",&row);

	
	int num=row;

	for(int i=1; i<=row; i++){
		
		for(int j=row; j>=i; j--){
			if(i%2==1){
				printf("  %d  ",num);
				
			}else{
				printf("  %c  ",num+64);
				
			}
			num--;
		}
		num=num+(row-i);
		printf("\n");
	}
}
