//10. WAP to print the product of the first 10 numbers 

#include<stdio.h>
void main(){
	int num;
	printf("Enter the number count: \n");
	scanf("%d",&num);
	
	int sum =1;
	printf("Product of first %d number\n",num);
	for(int i=1; i<=num; i++){
			
		sum = sum*i;

	}
printf("%d\n",sum);

}