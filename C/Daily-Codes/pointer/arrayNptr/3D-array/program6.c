#include<stdio.h>
void main(){
	int arr[2][2][3];	
	int sum=0;
	printf("Enter the array elements:\n");
	for(int i=0;i<2; i++){
		for(int j=0; j<2; j++){
			for(int k=0; k<3; k++){
				scanf("%d",&arr[i][j][k]);
				if(j==0){
					sum = sum+arr[i][j][k];
				}
			}
		}
	}
	printf("sum of first rows = %d\n",sum);
}
