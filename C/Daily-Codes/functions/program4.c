// 27/09/2022
#include<stdio.h>
void fun(int x){

	printf("%d\n",x);
}
void main()
{
	fun('A');
	fun(10);
	fun(20.5);
	fun(53.2345);
}

//NO WARNING ... NO ERRORS
