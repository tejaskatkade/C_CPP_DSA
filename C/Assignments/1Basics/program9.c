//9. WAP to print the sum of the first 10 odd numbers 

#include<stdio.h>
void main(){
	int num;
	printf("Enter the number count: \n");
	scanf("%d",&num);
	
	int sum =0;
	printf("Sum of first of %d odd number\n",num);
	for(int i=1; i<=num*2; i++){
		if(i%2==1){
			
			sum = sum + i;
		
		}
	}
printf("%d\n",sum);

}