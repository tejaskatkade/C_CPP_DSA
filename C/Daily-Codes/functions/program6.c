// 27/09/2022

#include<stdio.h>
void fun(int* x){

	printf("%p\n",x);
	//printf("%d\n",*x);   //segmetation fault
}
void main()
{
	int a = 10;
	fun(a);         //warning: passing argument 1 of ‘fun’ makes pointer from integer without a cast
	
}

//if parameter is pointer then it needs  address as a parameter
