#include<stdio.h>
void main()
{ 
	int store=1;
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	int i=1;
	while(num>=i){
		store= store*i;
		i++;
	}
	
	printf("Factorial of %d is :%d\n",num,store);
	
}
