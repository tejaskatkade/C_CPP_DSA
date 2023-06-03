//take a input from the user and count the no of digit 

#include<stdio.h>
void main(){
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	int rem;
	int i = num;
	int count =0;

	while(num!=0){
		rem=num%10;
		count = count +1;
		num=num/10;
	
		
	}printf("%d",count);

}