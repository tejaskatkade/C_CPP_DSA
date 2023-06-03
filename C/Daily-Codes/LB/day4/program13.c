#include<stdio.h>
void main()
{ 
	int start;
	int end;
	
	printf("Enter the start :\n");
	scanf("%d",&start);
	printf("Enter the end :\n");
	scanf("%d",&end);
	
	int store=1;
	int num = end - start;
	for(int i=start; i<=end; i++){
		int j=i;
		while(j<=i){
			store= store*j;
			j++;
		}
		printf("Factorial of %d is %d: \n",i,store);
	}
	
	
	
}
