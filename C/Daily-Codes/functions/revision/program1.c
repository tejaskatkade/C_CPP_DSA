\\1

#include<stdio.h>
void fun(int);
void main()
{

	int val;
	printf("Enter the value: \n");
	scanf("%d",&val);
	fun(val);

}

void fun(int val)
{

	printf("The value  in function = %d\n",val);
}
