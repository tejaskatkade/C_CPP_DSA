//WAP to find whether given array strictly increasing or not;

#include<stdio.h>
void main()

{
	int size;
	printf("Enter the array size: \n");
	scanf("%d",&size);
	
	printf("Enter array elements:\n");
	int arr[size];
	for(int  i=0; i<size; i++){
	
		scanf("%d",&arr[i]);
	
	}
   	int ele;
	int flag=0;
	for(int i=0; i<(size-i); i++){
		ele = arr[i];
		if(ele>=arr[i+1]){
			flag =1;
		}
	}
	if(flag==0){
		printf("The array is strictly incresing");
	}else{
		printf("Array is not srictly increasing");
	}
}
