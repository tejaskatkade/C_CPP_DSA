//take input from the user AND REVERSE IT 



#include<stdio.h>
void main(){
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	int rem;
	int i = num;
	

	while(num!=0){
		rem=num%10;
		printf("%d",rem);
		num=num/10;
	
		
	}

}