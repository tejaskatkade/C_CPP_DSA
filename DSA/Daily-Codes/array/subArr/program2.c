//Print all the subarray
// approach 2 


//   !!! CODE NOT WORKING !!!



#include<stdio.h>

void main(){

	int arr[]={4,2,1,3};
	int N=4;
	int var=0;
	for(int i=0; i<N; i++){
		if(i == N-1){
			i=var++;
		}
	
		for(int k=i; k<N; k++){

			printf("%d",arr[k]);

		}
		printf("\n");	
	}
		
}
