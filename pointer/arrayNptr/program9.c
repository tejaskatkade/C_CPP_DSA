//24-09-22


#include<stdio.h>
void main(){
	int x=10;
	const int* const ptr = &x;  //here pointer is constant not a integer or x 

	printf("%d\n",x);     //10

	x = 30;  //NO error: we can change the value like this but we can not change it by using pointer

	printf("%d\n",x);      //30
	printf("%d\n",*ptr);  //30
}
