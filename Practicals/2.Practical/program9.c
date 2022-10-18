//9.WAP to print the count of divisors of the entered number

#include<stdio.h>
void main(){

	int i,n;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("The divisors of %d are : \n",n);
	for(i=1; i<=n;i++){
		if(n%i==0){
			printf("%d\n",i);
		}

	}
}