//Passing array to function

#include <stdio.h>
void printele(int ele){
	printf("%d\n",ele);
}
void main(){
	int arr[]={10,20,30,40,50};

	int size = sizeof(arr)/sizeof(int);
	
	for(int i = 0; i<size; i++){
		printele(arr[i]);
	}
}
