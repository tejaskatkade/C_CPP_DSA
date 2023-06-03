#include<stdio.h>
void main(){
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	int size = sizeof(arr)/sizeof(int);

	for(int i=0; i<size; i++){
		printf("%d\n",*(*arr+i));
	}
}
