#include<stdio.h>
void main()
{ 
	int row;
	printf("Enter the row\n");
	scanf("%d",&row);

	for(int i=0; i<row; i++){
		char ch='a';
		for(int j=row; j>i; j--){
			printf("  %c  ",ch);
			ch++;
		}
		printf("\n");
	}
}
