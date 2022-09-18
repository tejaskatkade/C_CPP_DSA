//WAP in which according to month number print the no. of days in that program

#include<stdio.h>
void main(){
	int x;	
	printf("ENter the no. of month: ");
	scanf("%d",&x);
	switch(x){
		case 1:
			printf("Jan = 31");
			break;
	
		case 2:
			printf("feb = 28 or 29");
			break;

		case 3:
			printf("Mar = 31");
			break;

		case 4:
			printf("Apr = 30");
			break;
		case 5:
			printf("May = 31");
			break;
		case 6:
			printf("Jun = 30");
			break;
		case 7:
			printf("July = 31");
			break;		
		case 8:
			printf("Aug = 31");
			break;		
		case 9:
			printf("sep = 30");
			break;
		case 10:
			printf("oct = 31");
			break;
		case 11:
			printf("nov = 30");
			break;
		case 12:
			printf("dec = 31");
			break;
		default:
			printf("Wrong input");
			break;
	}


}
