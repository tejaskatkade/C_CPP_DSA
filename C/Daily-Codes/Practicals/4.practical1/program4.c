//4 WAP to program of prime no.

#include<stdio.h>
void main(){
	int num;
	int var=0;
	printf("Enter the number\n");
	scanf("%d",&num);

	
		for(int i=2;i<=num;i++){
			if(num/i==0){
				var++;
			}
		}
		if(var==1){
			printf("p");
		}else if(var>1){
			printf("np");
		}
	
}