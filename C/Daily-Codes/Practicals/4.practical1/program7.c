//7.take input from user and print the sum of digit



#include<stdio.h>
void main(){
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	int rem;
	int i = num;
	int sum =0;

	while(num!=0){
		rem=num%10;
		sum = sum +rem;
		num=num/10;
	
		
	}printf("%d",sum);

}