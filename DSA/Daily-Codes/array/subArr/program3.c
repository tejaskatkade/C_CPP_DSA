// Given an array of size N
// prints the sum of every single subarray using prefix sum technique

#include<stdio.h>
void main(){
	int N =4;
	int arr[4]={4,2,1,3};
	int pSum[N];
	pSum[0]=arr[0];
	for(int i=1; i<N; i++){
		
		pSum[i]=pSum[i-1]+arr[i];
	}	
	for(int i=0; i<N ;i++){
		for(int j=i; j<N; j++){
			int sum =0;
			if(i == 0){
				sum = pSum[j];
			}else{
				sum=pSum[j]-pSum[i-1];
			}
			printf("%d\n",sum);
		}
	} 
}

