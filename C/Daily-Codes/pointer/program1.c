//Pointer stores address of anything;

#include<stdio.h>
void main(){
	int x=10;

	printf("%d\n",x);  //10
	printf("%d\n",&x);  //address in integer format  //warning
	
	printf("%p\n",x); //address of x //0Xa //warning
	printf("%p\n",&x); //address

	int *ptr=&x;
	printf("%p\n",ptr); //address  (same as above output)

}
