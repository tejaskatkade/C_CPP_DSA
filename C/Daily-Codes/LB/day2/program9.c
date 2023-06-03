#include<stdio.h>
void main()
{
	
	int row;
	
	printf("Enter the row:\n");
	scanf("%d",&row);
	char ch = 'a';
	for(int i= 0; i<row; i++){
		for(int j=0; j<row; j++){
			
			if(ch%2==1){
				printf("  %c  ",ch-32);
			}else{
				printf("  %c  ",ch);
			}
			ch++;
		}
			printf("\n");
		
	}
}
