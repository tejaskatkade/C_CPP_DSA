//WAP to find count of odd numbers and even numbers present in array print both counts separately;

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
        int even, odd;
    	int counte =0;
	int counto =0;	
	for(int i=0; i<size; i++){

		if(arr[i]%2==0){
			counte++;

		}else{
			counto++;
		}
	}
	printf("Count of Even num is %d\n",counte);

	printf("Count of Ood num is %d\n",counto);

	
}
