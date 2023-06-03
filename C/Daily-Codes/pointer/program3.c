//Dereferencing of pointer

#include<stdio.h>
void main(){
	int x=10;
	int *ptr = &x;
	
	printf("%p\n",ptr);//address of x
	printf("%d\n",*ptr);//10 (value of x)

}
