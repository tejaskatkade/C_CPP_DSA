//WAP to calculate the sum of array in function & return the sum in main


#include <stdio.h>
int sum(int *ptr,int size){
	int sum=0;
	for(int i=0; i<size; i++){
		//printf("%d\n",*(ptr+i));
		sum =sum + *(ptr+i);	
	}
	return sum;
}
void main(){
	int arr[]={10,20,30,40,50};

	int size = sizeof(arr)/sizeof(int);
	
	int a =	sum(arr,size);
	printf("%d\n",a);
}
