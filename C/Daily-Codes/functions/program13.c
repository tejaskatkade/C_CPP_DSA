//call by address

#include<stdio.h>
void swap(int *ptr1, int *ptr2){

        int temp;
       
	temp = *ptr1;
	*ptr1= *ptr2;
	*ptr2 =temp;
}
void main(){

	int x = 10;
	int y = 20;

	printf("x=%d\n",x);
	printf("y=%d\n",y);

	swap(&x,&y);
	
	printf("x=%d\n",x);
	printf("y=%d\n",y);


	
}
