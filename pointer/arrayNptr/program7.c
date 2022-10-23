//24-09-22


#include<stdio.h>
void main(){
	int x=10;
	int* const ptr = &x;  //here pointer is constant not a integer or x 

	printf("%d\n",x);
	*ptr = 30;  
	printf("%d\n",x);
}
