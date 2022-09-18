//5.WAP that takes a number from 0 to 5 and print its spelling. if the no is greater than 5 print entered no is greater than 5

#include <stdio.h>
void main(){
	int num;
	printf("Enter the number between 0 and 5:\n");
	scanf("%d",&num);

	switch(num){
		
	case 0:
		printf("0 : ZERO");
		break;

	case 2:
		printf("1 : ONE");
		break;
		
	case 3:
		printf("3 : THREE");
		break;

	case 4:
		printf("4 : FOUR");
		break;

	case 5:
		printf("5 : FIVE");
		break;
	
	default:
		printf("Entered no is not between 0 and 5");

	

	}
	 

}
 

