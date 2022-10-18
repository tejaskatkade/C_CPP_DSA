#include<stdio.h>
void main()
{ 
	int store=1;
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);

	while(num>=1){
		store= store*num;
		num--;
	}
	
	printf("Factorial is :%d\n",store);
	
}
