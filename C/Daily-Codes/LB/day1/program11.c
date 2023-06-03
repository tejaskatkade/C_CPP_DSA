//11
//1  2  3  4
//a  b  c  d
//5  6  7  8
//e  f  g  h 

#include <stdio.h>
void main()
{

	int row;
	
	printf("Enter the rows:\n");
	scanf("%d",&row);

	int num=1;
	char ch='a';

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		{	if(i%2==0){
				printf("  %d  ",num);
				num++;
			}else{
				printf("  %c  ",ch);
				ch++;
			}	
		}
		printf("\n");
	}
}

