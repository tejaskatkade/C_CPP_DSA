#include<stdio.h>
void main(){

	int r; 
	printf("Enter the no. of rows:\n");
	scanf("%d",&r);

	int num= (r*(r+1))/2;
	for(int i=1; i<=r; i++){
	
		for(int j=1; j<=r; j++){
		
			if(j<i){
				printf("\t");
			}else{
				if(num%2==0)
					printf("%d\t",num*num);
				else
					printf("%d\t",num);
			num--;
			}
		}
		printf("\n");
	}
}
