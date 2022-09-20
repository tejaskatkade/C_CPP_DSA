//Comparing an array;


#include<stdio.h>
void main(){
	int arr1[3]={10,20,30};
	int arr2[3]={10,20,30};

	if(arr1==arr2){
	printf("Arrays are equal\n");
	}else{
		printf("Arrays are are not equal\n");
	}
//Arrays are not equal b'cz their adress are not same;
}
