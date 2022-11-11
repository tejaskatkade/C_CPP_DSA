//wap to find whether the given input character is an alphabet, a digit or a special character;

#include<stdio.h>
void main()
{
	char i;
	printf("Enter the input:\n");
	scanf("%c",&i);

	if(i<=90 && i>=65 || i<=122 && i>= 97)
	{
		printf("%c is an alphabet\n",i);
	
	}
	else if(i<=57 && i>=48)
	{
		printf("%d is a digit\n",i-48);
	}
	else
	{
		printf("%c is a special character\n",i);	
	}
}
