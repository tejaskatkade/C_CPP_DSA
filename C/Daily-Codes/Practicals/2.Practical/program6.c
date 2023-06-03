//6.wap to get 10 num from user and find their sum and average

#include<stdio.h>
void main(){
	int num;
	int sum = 0;
	for(int i=0; i<10; i++){
		
		//printf("enter the no.%d",num);
		printf("Enter the no");
		scanf("%d",&num);
		sum = sum + num;

	}

	printf("The sum is %d\n",sum);
	int avg = sum/10;

	printf("Then average is: %d",avg);


}