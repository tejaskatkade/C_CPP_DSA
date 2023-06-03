//fun return the sum of diagonal element of 2 D array
//01-10-2022
#include<stdio.h>
int sum(int (*arr)[],int size){
	int sum1 = 0;
	for(int i=0; i<size; i++){
		sum1 = sum1 + *(*arr+i);

	}
	return sum1;
}
int dsum(int (*arr)[],int size){
	int sum2 = 0;
	for(int i=0; i<size; i++){
		if(i%4==0){
			sum2 = sum2 + *(*arr+i);
		}
	}
	return sum2;
}
void main(){
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	int size = sizeof(arr)/sizeof(int);

	int sum1= sum(arr,size);
	int sum2= dsum(arr,size);

	printf("Sum of ele:%d\n",sum1);
	printf("Sum of diagonal ele:%d\n",sum2);
	
	
	
}
