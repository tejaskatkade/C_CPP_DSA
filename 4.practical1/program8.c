//8.take input from user and print the product of digit
 

#include<stdio.h>
void main(){
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	int rem;
	int i = num;
	int product =1;

	while(num!=0){
		rem=num%10;
		product = product *rem;
		num=num/10;
	
		
	}printf("%d",product);

}