//wap to print the odd numbers as it is and cube of even numbers between a given range from the user.

#include<stdio.h>
void main()
{
	int start, end;
	printf("Enter the start number:\n");
	scanf("%d",&start);
	printf("Enter the end number:\n");
	scanf("%d",&end);

	for(int i=start; i<=end; i++ )
	{
		if(i%2==0)
			printf("%d\t",i*i*i);
	 	else
			printf("%d\t",i);
	}

}
