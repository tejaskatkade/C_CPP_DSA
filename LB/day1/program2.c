//Wap to print the number divisible by 3 and 7 between range given by the user


#include <stdio.h>
void main()
{

	int start, end;
	printf("Enter the start number :\n");
	scanf("%d",&start);
	printf("Enter the end number :\n");
	scanf("%d",&end);

	printf("The num divisible by 3 and 7 from %d to %d are: \n",start, end);
	for(int i=start; i<end; i++)
	{
		if (i%3==0 && i%7==0){
			printf("%d\n",i);
		}
	}
}

