#include<stdio.h>
void main()
{ 
	int row;
	printf("Enter the row\n");
	scanf("%d",&row);

	char ch=64+row;

	for(int i=1; i<=row; i++){
		
		for(int j=row; j>=i; j--){
			
			printf("  %c  ",ch);
			
		ch--;
		}
		ch=ch+(row-i);
		printf("\n");
	}
}
