#include<stdio.h>
void main(){
	int x=10;
	int *ptr1=&x;
	int *ptr2=x; //Warning: pointer from int without cast

	printf("%p\n",ptr1);//0X100
	printf("%p\n",ptr2);//0Xa
}
