#include<stdio.h>
void main()
{
	
	int row;
	int col;	
	printf("Enter the row:\n");
	scanf("%d",&row);

	printf("Enter the col:\n");
	scanf("%d",&col);

	char ch = 'a';
	int num = 1;
	for(int i= 0; i<row; i++){
		for(int j=0; j<col; j++){
			
			if(i%3==0){
				printf("  %d  ",num);
				num++;
			}if(i%3==1){
				printf("  %c  ",ch);
				ch++;
			}if(i%3==2){
				printf("  #  ");
			}
			
		}
			printf("\n");
		
	}
}
