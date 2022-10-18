#include<stdio.h>
void main(){

	int arr1[]={10,20,30,40,50};

	int *ptr1=arr1;
	int *ptr2=&arr1[2];
	//int *ptr2=&arr1;
	

	int (*ptr3)[5]=&arr1; 
	
	//warning: initialization from incompatible pointer type

	printf("%d\n",*ptr1);  //10
	printf("%d\n",*ptr2);  //30
	printf("%p\n",*ptr3);  //adress
	printf("%d\n",**ptr3); //10
}