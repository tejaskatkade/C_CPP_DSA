//24-09-22


#include<stdio.h>
void main(){
	int x=10;
	int y=20;

	const int * const ptr = &x;  //here pointer and integer both are const 

	printf("%d\n",x);

	*ptr = 30; //error: assignment of read-only location ‘*ptr’

	printf("%d\n",x);
	ptr = &y; // error: assignment of read-only variable ‘ptr’

	//the variable and pointer bothe are read-only they cannot be change.
}
