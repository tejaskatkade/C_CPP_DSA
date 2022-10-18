#include<stdio.h>
void main(){

	int arr1[]={10,20,30,40,50};

	int *ptr1=arr1;
	int (*ptr2)[5]=&arr1;

	printf("%d\n",*ptr1);
	printf("%d\n",**ptr2);
}