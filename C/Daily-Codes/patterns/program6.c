// *  *  *  *  *
// *  *  *  *  *
// *  *  *  *  *
// *  *  *  *  *
// *  *  *  *  *


#include<stdio.h>
void main(){
	
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf(" * ");
		}
		printf("\n");
	}
}
