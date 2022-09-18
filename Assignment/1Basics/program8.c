//8.  WAP to print the table in revesre order 
#include<stdio.h>
void main(){
	int num;
	printf("Enter the number: \n");
	scanf("%d",&num);
	
	printf("Table of %d in reverse order\n",num);
	for(int i=10; i>=1; i--){
		printf("%d\n",num*i);
	}


}