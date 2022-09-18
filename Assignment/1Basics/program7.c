//7. WAP to print the table of 12
#include<stdio.h>
void main(){
	int num;
	printf("Enter the number: \n");
	scanf("%d",&num);
	
	printf("Table of %d\n",num);
	for(int i=1; i<=10; i++){
		printf("%d\n",num*i);
	}


}