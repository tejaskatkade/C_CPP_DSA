//3. Enter the row
//4
//                d
//           c    c
//      b    b    b
// a    a    a    a

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
				printf("  %c  ",ch);
					
			}else{
				printf("     ");
			}
		

		}
		ch--;
		printf("\n");
	}
}
