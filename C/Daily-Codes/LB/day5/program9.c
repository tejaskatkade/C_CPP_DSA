//9. Enter the row
//4
//                  4
//             3    6
//        2    4    6
//   1    2    3    4


#include<stdio.h>
void main(){
	int row;
	printf("Enter the row\n");
	scanf("%d",&row);
	int num=row;
	for(int i=1; i<=row; i++)
	{	int add;
		for(int j=1; j<=row; j++)
		{
			if(j>row-(i))
			{
				printf("  %d  ",num);
				num=add+num;		
			}else{
				printf("     ");
			}
		

		}
		num=row-i;
		add=num;
		printf("\n");
	}
}
