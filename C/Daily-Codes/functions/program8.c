// What happen if we pass the single pointer argument for double pointer parameter pointer

#include<stdio.h>
void fun(int **ptr)
{

	printf("%d\n",**ptr);
}

void main(){
	int x =10;
	int *ptr = &x;
	int **ptr1 = &ptr;

	//fun(ptr);  //warning: passing argument 1 of ‘fun’ from incompatible pointer type
	fun(&ptr);  //10
	fun(ptr1);  //10
}
