//24-09-22


#include<stdio.h>
void main(){
	int x=10;
	const int *ptr = &x;  //here int is constant not a ptr 

	printf("%d\n",x);
	*ptr = 30;  // error: assignment of read-only location ‘*ptr’
	printf("%d\n",x);
}
