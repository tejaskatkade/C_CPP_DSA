\\2

#include<stdio.h>

int fun()
{
	printf("In function\n");
	int val;
	printf("Enter the value: \n");
	scanf("%d",&val);
	return val;

}

void main()
{
	int value = fun();
	printf("In main = %d\n",value);
}
