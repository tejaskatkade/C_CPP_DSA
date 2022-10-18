//WAP to split array into two array as per nature(even and odd)

#include<stdio.h>
void main()

{
	int size;
	printf("Enter the array size : \n");
	scanf("%d",&size);
	
	printf("Enter array elements:\n");
	int arr[size];
	
	for(int  i=0; i<size; i++){
	
		scanf("%d",&arr[i]);
	}
	int count=0;
	int count1=0;

	for(int  i=0; i<size; i++){
	
		if(arr[i]%2== 0){
			count++;       
		}else{
			count1++;
		
		}
	}

	
	int arr1[count];
	int arr2[count1];
	int j,k;
	j=k=0;
	for(int i =0; i<size; i++){
	
		if(arr[i]%2==0){				
		
			arr1[j]=arr[i];
			j++;

		}else{
			arr2[k]=arr[i];
			k++;
		}
	}


	printf("Array1 (Even)\n");

	for(int i =0; i< count; i++){
	
		printf("%d\t", arr1[i]);
	}
	
	
	
	printf("Array2 (odd)\n");
	for(int i =0; i< count1; i++){
	
		printf("%d\t", arr2[i]);
	}
	

}
