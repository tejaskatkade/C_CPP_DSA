// fun ret diff of max even no and min odd no.

#include<stdio.h>
int diff(int arr[],int size){
	int min = arr[0];
	int max = arr[0];
	for(int i=0; i<size; i++){

		if(arr[i]%2 != 0){
			if(min > arr[i]){
				min = arr[i];
			}
		}else{
			if(max < arr[i])
				max = arr[i];
		}
	}
	return max-min ;
}
void main(){
	int size;
	printf("Enter the size of an array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array elements\n");
	for(int i=0; i<size; i++){
		scanf("%d", &arr[i] );
	}
	int d = diff(arr,size);
	printf("Difference between max even num and min odd num is: %d \n",d);

}

