#include<stdio.h>
void main()
{ 
	int row;
	printf("Enter the row\n");
	scanf("%d",&row);

	char ch=64+row;

	for(int i=0; i<row; i++){
		
		for(int j=row; j>i; j--){
			if(i%2==0){
				printf("  %c  ",ch+32);
			}else
				printf("  %c  ",ch);
			
		}ch--;
		printf("\n");
	}
}
