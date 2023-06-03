//Passing array to function

#include <stdio.h>
void passele(int *ptr,int size){
	for(int i=0; i<size; i++){
		printf("%d\n",*(ptr+i));
		//printf("%d\n",ptr[i]);
	}
}
void main(){
	int arr[]={10,20,30,40,50};

	int size = sizeof(arr)/sizeof(int);
	
	passele(arr,size);
}
