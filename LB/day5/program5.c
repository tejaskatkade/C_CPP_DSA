//Enter the row
//4
//                D
//           c    D
//      B    c    D
// a    B    c    D
#include<stdio.h>
void main(){
	int row;
	printf("Enter the row\n");
	scanf("%d",&row);
	char ch = 96+row;
	for(int i=1; i<=row; i++)
	{	
		for(int j=1; j<=row; j++)
		{
			if(j>row-(i))
			{
				if(j%2==1){
					printf("  %c  ",ch);
				}else{
					printf("  %c  ",ch-32);
				}
			ch++;	
			}else{
				printf("     ");
			}
		

		}
		ch=96+row-i;
		printf("\n");
	}
}
