//1.WAP to check whether the given year is leap year or not
#include<stdio.h>
void main(){

	int yr;

	printf("Enter the year: \n");
	scanf("%d",&yr);
	
	if(yr%4==0){
		printf("It is a leap year");

	}else{
		printf("It is not a leap year");	
	}
}