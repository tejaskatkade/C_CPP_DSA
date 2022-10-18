//Wap to print the squre of odd number between a range from the user


#include <stdio.h>
void main()
{

	int start, end;
	printf("Enter the start number :\n");
	scanf("%d",&start);
	printf("Enter the end number :\n");
	scanf("%d",&end);

	printf("Square of odd num between %d and %d are: \n",start, end);
	for(int i=start; i<end; i++)
	{
		if (i%2==1){
			printf("%d\n",i*i);
		}
	}
}

